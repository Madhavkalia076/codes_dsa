#include<iostream>
#include<vector>
using namespace std;
int secondlargest(vector<int>arr){
    int largest=0;
    int res=-1;
    for(int i=0;i<arr.size();i++){
        if(arr[i]>arr[largest]){
             res=largest;
             largest =i;
        }
        else if(arr[i]!=arr[largest]){
            if(res==-1 || arr[i]>arr[res]){
                res=i;
            }
        }
        
    }
    return res;
}
int main(){
    vector<int>a={5,4,2,7,2};
    int second_largest=secondlargest(a);
    cout<<"second largest element in the array: "<<a[second_largest]<<endl;
    return 0;
    
}