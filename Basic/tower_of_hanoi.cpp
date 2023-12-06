// #include<iostream>
// using namespace std;
// void toh(int n,char A,char B,char C){
//     if(n==1){
//         cout<<"move disc 1 from "<< A<<" to "<<C<<endl;
//         return;
//     }
//     toh(n-1,A,C,B);
//     cout<<"move disc "<<n<<" from "<<A<<" to "<<C<<endl;
//     toh(n-1,B,A,C);
// }
// int main(){
//     toh(3,'A','B','C');
//     return 0;
// }


// #include<iostream>
// using namespace std;
// void toh(int n,char A,char B,char C){
//     if(n==1){
//         cout<<"move disc 1 from "<<A<<" to "<<C<<endl;
//         return;
//     }
//     toh(n-1,A,C,B);
//     cout<<"move disc "<<n<<" from "<<A<<" to "<<C<<endl;
//     toh(n-1,B,A,C);

// }
// int main(){
//     toh(3,'A','B','C');
//     return 0;
// }
#include<iostream>
using namespace std;
void permute(string s,int i=0){
    if(i==s.length()-1){
        cout<<s<<" ";
        return ;
    }
    for(int j=i;j<s.length();j++){
        swap(s[i],s[j]);
        permute(s,i+1);
        swap(s[i],s[j]);
    }
}
int main(){
    permute("abc");
    
    return 0;
}