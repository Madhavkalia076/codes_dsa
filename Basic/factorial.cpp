#include<iostream>
using namespace std;
int main()
{
int n;	
long fact=1.0;
cout<<"enter the number:";
cin>>n;
if(n<0)
cout<<"error"<<endl;
else{

int i;
for(i=1;i<=n;++i){
	fact=fact*i;
}

cout<<fact;
}
	return 0;
}