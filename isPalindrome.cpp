#include<bits/stdc++.h>
using namespace std;
char toLowercase(char a){
     char ch = a;
    if((ch >='a' && ch <= 'z') ||(ch >= '0' && ch <= '9')){
         return ch;
    } 
   else{
         char temp = ch - 'A' + 'a';
         return temp;
       }     
}
bool isvalid(char a ){
    char ch = a ;
    if((ch >= 'a' && ch <= 'z' ) ||(ch >= 'A' && ch <= 'Z' ) || (ch >= '0' && ch <= '9' )){
        return true;
    }else{
        return false;
    }
}
bool isPalindrome(string str){
    int s = 0 ;
    int e = str.length()-1;
    while(s<e){
        if(str[s] != str[e])
            return false;
        s++;
        e--;
    }
    return true;
}
bool checkPalindrome(string s)
{
    // Write your code here.
    string ans = "";
    for(int i = 0 ;i<s.length() ; i++){
        if(isvalid(s[i])){
            ans.push_back(s[i]);
        }
    }
    for(int j = 0 ; j<ans.length() ; j++){
       ans[j] = toLowercase(ans[j]);
    }
    return isPalindrome(ans);
    
    
}
int main(){
    if(checkPalindrome("sdijwei")){
        cout<<"yes"<<endl;

    }else{
        cout<<"no"<<endl;
    }
 return 0;
}