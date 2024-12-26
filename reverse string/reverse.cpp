#include <iostream>
using namespace std;
void revStrng(string &str){
    int n=str.length();
    int i=0;
    int j=n-1;
    while (i<j)
    {
        char ch=str[j];
        str[j]=str[i];
        str[i]=ch;
        i++;
        j--;
    }
    
}
int main(){
string str;
cout<<"enter your string to reverse";
cin>>str;
 revStrng(str);
 cout<<str;
}