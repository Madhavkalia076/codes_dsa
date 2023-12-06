#include<iostream>
#include<string>

using namespace std;

// string converted(string s){
//         int l=s.length();
//         int i=0;
//         while(i<l){
//           if(s[i]>='A' && s[i]<='Z'){
//               s[i]=s[i]+('a'-'A');
//           }
//           else if(s[i]>='a' && s[i]<='z'){
//               s[i]=s[i];
//           }
//           else if(s[i]== " "  || s[i]==","  || s[i]==':'){
//               if(s[i+1]>='A' && s[i]<='Z'){
//               s[i+1]=s[i+1]+('a'-'A');
//               s[i]=s[i+1];
//           }
//         }
//           else if(s[i]>='a' && s[i]<='z'){
//               s[i]=s[i+1];
//           }
//         }
//         return s;
        
        
//     }
    int main(){
        string s[10];
        cout<<"enter the string:";
        for(int i=0;i<10;i++){
            cin>>s[i];
        }
        cout<<"string is: "<<endl;
        for(int i=0;i<10;i++){
            cout<<s[i];
        }
        
        return 0;
    }