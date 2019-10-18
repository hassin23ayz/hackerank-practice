#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <fstream>

#define TEST

using namespace std;

vector<string> split_string(string);

int main() {

  vector<string> result;

  //take a line from user input
  //parse no of lines , parse no of queries
  int no_lines = 0;
  int no_queries = 0;
  string infoLine;
  #ifdef TEST
  ifstream myfile("input.txt");
  if(myfile.is_open()){
    getline(myfile, infoLine);
  }
  #else
  getline(cin, infoLine);
  #endif
  vector<string> infos = split_string(infoLine);
  no_lines = stoi(infos.at(0));
  no_queries = stoi(infos.at(1));

  // take input lines from user
  vector<string> lines(no_lines);
  for(uint8_t i=0; i<lines.size(); i++){
    string aLine;
    #ifdef TEST
    if(myfile.is_open()){
      getline(myfile, aLine);
    }
    #else
    getline(cin, aLine);
    #endif
    lines.at(i) = aLine;
  }

  //iterate in a for loop , parse & process each query
  for(uint8_t i=0; i<no_queries; i++)
  {
    string aQuery;
    #ifdef TEST
    if(myfile.is_open()){
      getline(myfile, aQuery);
    }
    #else
    getline(cin, aQuery);
    #endif
    string tag2find;
    //dissect the query
    //parse until the '~' character
    size_t tildePos = aQuery.find_last_of("~");
    if(tildePos != std::string::npos){
      string till_tilde = aQuery.substr(0, tildePos);
      size_t dotPos = till_tilde.find_last_of(".");
      if(dotPos != std::string::npos){
        tag2find = till_tilde.substr(dotPos+1);
      }//indexed tag query
      else{
        tag2find = till_tilde;
      }
      string attr2find = aQuery.substr(tildePos+1);

      // cout << "-------------------" << endl;
      // cout << tag2find << "," << attr2find << endl;
      // cout << "-------------------" << endl;

      bool found = false;
      for(uint8_t i=0; i<lines.size(); i++){
        if(lines.at(i).find(tag2find) != std::string::npos)
        {
          //cout << "$tag: " << tag2find << "Found in: " << lines.at(i) << endl;
          //attr should be in this line
          size_t attrStart = lines.at(i).find(attr2find);
          if(attrStart != std::string::npos){
            string atrrValueStr = lines.at(i).substr(attrStart+1);
            //cout << "atrrValueStr:" << atrrValueStr << endl;
            size_t firstQt = atrrValueStr.find_first_of("\"");
            string afterFirstQt = atrrValueStr.substr(firstQt+1);
            size_t secondQt = afterFirstQt.find_first_of("\"");
            string resultValue = afterFirstQt.substr(0, secondQt);

            //cout << resultValue << endl;
            result.push_back(resultValue);
            found = true;
          }// attr is found
        }// tag is found
      }//iterate thru each input line to find the value
      if(!found){
        result.push_back("Not Found!");
      }//if value is not found
    }//valid query
  }//iterate thru each query

  #ifdef TEST
  myfile.close();
  #endif

  //cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~" <<endl;
  for(auto eachElem:result){
    cout << eachElem << endl;
  }
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}