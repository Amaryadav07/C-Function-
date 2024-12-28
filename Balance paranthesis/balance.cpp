#include <iostream>
using namespace std;

bool balanced (string &str) {
    int square=0,curly=0,para=0;
    for(int i=0;i<str.length();++i){
        if(str[i]=='['){
            square++;
        }
        else if(str[i]==']' && square!=0){
            square--;
        }
         else if(str[i]=='{'){
            
            curly++;
    }
     else if(str[i]=='}' && curly!=0){
            curly--;
        }
          else if(str[i]=='('){
            para++;
    }
     else if(str[i]==')' && para!=0){
            para--;
        }
    }
        if(square==0 && curly==0 && para==0){
            return true;
        }
        return false;
  
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    if(balanced(str)){
        cout<<"balanced:";
    }
    else{
        cout<<"not balanced";
    }
}