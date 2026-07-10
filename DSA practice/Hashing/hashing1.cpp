#include <iostream>
using namespace std;
/* int n;
cin>>n;
int arr[n];
for(int i=0; i<n; i++){
    cin>>arr[i];
}
 //precomputes

 int hash[13]={0};  ///we initially stored 0 in the array at all place from 0... to 12
 for(int i=0; i<n; i++){
    hash[arr[i]] +=1 ;
 }
 int q;
 cin>>q;
 while(q--){
    int number ;
    cin>>number ;
    //fetching
    cout<<hash[number]<<endl;

 }
 return 0;
}
  */

int hashing(char c, string s, int n)
{
   int count = 0;
   for (int i = 0; i < n; i++)
   {
      if (s[i] == c)
      {
         count = count + 1;
      }
   }
   return count;
}
int main()
{
   cout << (hashing('h', "ayushh", 6));
}
