/* 

#include<iostream>
using namespace std;
int count = 0;
int n;
void name(){
    if(count==n){
        return ;
    }
    cout<<"enter number"<<endl;
    cin>>n;
    cout<<count<<endl;
    count++;
    name();
    
}
    int main(){
        name();
       
    }
        
 */
#include<iostream>
using namespace std;
void backtrack(int i, int n){
    if(i<1)
    return; {
}
 backtrack(i-1,n);
 cout<<i;
}
int main(){
    int n;
    cout<<"enter n"<<endl;
    cin>>n;
    backtrack(n,n);
    return 0;
}

