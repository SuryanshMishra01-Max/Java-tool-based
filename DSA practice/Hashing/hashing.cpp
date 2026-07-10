#include<iostream>
using namespace std;
int hashingcode(int number,int arr[],int n){
int count = 0;
  for(int i=0; i<n; i++){
    if(arr[i]==number){
         count = count + 1;
    }
}
 return count ;
}
int main(){
    int n=5;
   int arr[]={2,3,4,5,6};
   cout<<(hashingcode(2,arr,n));
}
   
