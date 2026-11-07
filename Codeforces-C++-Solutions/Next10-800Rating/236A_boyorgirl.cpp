#include<iostream>
#include<string>
#include<set>
using namespace std;
int main(){
string s;
cin>>s;
set<char> unique_chars;
for(int i=0;i<s.length();i++){
    unique_chars.insert(s[i]);
}
if(unique_chars.size()%2==0){

    cout<<"CHAT WITH HER"<<endl;
}else{
cout<<"IGNORE HIM"<<endl;
}
return 0;
}
