#include<iostream>
#include<bits/stdc++.h>
using namespace std;
/*
// largest elemenent in an array

int main(){
    int n=5;
    int arr[5]={0,2,3,6,4};
    int largest= arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]>largest){
            largest=arr[i];
    }
}
 cout<<largest;
} 
*/

//second largest element 
/* 

int secondlargest(){
    int n;
    int arr[5]={0,2,3,6,4};
    int scndlrgst= arr[n-1];
    for(int i=n-2; i>0; i--){  ye socho ki jo last wala element hoga sorted Array ka wo largest hi hoga
    but usse piche wala second largest hoga i.e n-2 to waha se traverse kroge tm
        if(arr[i]<scndlrgst){    
            scndlrgst= arr[i];
        }

    }
    cout<<scndlrgst;
}
    int main(){
     secondlargest();
     return 0;
    }
 */

 /* 
 //you have to find the secondlargest and secondsmallest

    int largest=a[0];
    slargest = -1;
    for(int i=0; i<n; i++){
        if(a[i]>largest){
            slargest = largest;
            largest= a[i];
        }
        return slargest;
    }
    else if(a[i]<largest && a[i]>slargest){
        slargest= a[i];
    }
    return slargest;

    int smallest = a[0];
    int ssmallest = INT_MAX; //bcz we are taking ssmllest so we have to take the larger number
    for(int i=0; i<n; i++){
        if(a[i]<smallest){
            ssmallest = smallest;
            smallest = a[i];
        }
        else if(a[i]!=smallest && a[i]<ssmallest){
            ssmallest = a[i];
        }
    }
    return ssmallest;
}
    vector<int>getSeconcOrderElements(int n, vector<int> a){
        int slargest= secondlargest(a,n);
        int ssmallest=secondsmallest(a,n)
        return(slargest,ssmallest)
    }
 */

// if the array is sorted 
/* 

bool issortedarray(int arr[], int n){
for (int i=0; i<n; i++){
    if(arr[i]>=arr[i-1]){
    }
    else{
        return false;
    }
}
return true;
}
int main(){
} 

*/

// remove the duplicates from the sorted arrays
//  like u have arr[]={1,1,2,2,3,3,4,4,5,5} so unique elements ko ek taraf krdo and rest ko aage ki traf and return ki kitne unique elements mile
/* 
set<int>st;
for(int i=0; i<n; i++){  //(nlogn) the time complexity will be
    st.insert(arr[i])
}
int index =0;
for(auto it:st)  //used iterating element in the set..it'll iterate 1 then 1 will  store in it i.e insdex then index will increase..
{
arr[index]= it   // n time complexity and (O)n space complexity overall....Nlogn+N+ON
    index++
} 
    */

// remove duplicates in place from the sorted array
 i=0;
 for(int j=0; j<n; j++){
    if(a[i]!=a[j]){
        a[i+1]=a[j];
        i++;
    }
    return a[i+1];
 }