#include <iostream>
using namespace std;

/* void add(int a, int b){
    int c=a+b;
    cout<<"sum of "<<a << " and"<< b <<"is"<< c<<endl;
     void add();
}

int main() {
    add(5,4);

    return 0;

    */

/*     cout<<"Hello world HER im doing coding!"<<endl;
        cout<<"hello bro!"<<endl;
    cout<<"hell yaa"<<endl;
        cout<<"yooo!"<<endl;
            cout<<"kk!"<<endl;
return 0;

*/

/*
        for (int j=1; j<=6; j++)
        {
        for (int i=1; i<=5; i++)
        {
           cout<<"*";
                      }
             cout<<""<<endl;
                 }

  }
                 */

/* void take() {
       cout<<"you have asked for 1"<<endl;
}

    int main() {
        int a;
        cout<<"enter number 1 to get 1:"<<endl;
        cin>>a;
        take();
    }
    */

/* int count = 0;
void recursive(){
    if(count == 4){
    return;
    }
     count++;
    cout<<count<<endl;
    recursive();
    }
int main (){

    recursive();
}
     */

/*      int count = 0;
     int n=100;
     void name(){
        if (count==n){
            return;
        }
        cout<<count<<endl;
        count++;
        name();

     }
     int main(){
        name();
     } */
/*
 void name(int i,int n) {
    if(i>n){  ///base condition  if user passes 5 then i=1 and n=5;
     return;

    }
    cout<<"ayush"<<endl;
    name(i+1,n);
 }

 int main(){
    int n;
    cout<<"enter a number:"<<endl;
    cin>>n;
    name(1,n);
    return 0;
 }
 */

// backtracking problem and printing from 1 to n given by the user
/*  
 void backtrack(int i, int n){
    if(i<1){
        return ;

    }
    backtrack(i-1,n);
    cout<<i;

  }
  int main(){
    int n;
    cout<<"enter the number:"<<endl;
    cin>>n;
    backtrack(n,n);
    return 0;

  } 
    
*/

/*  //backtracking problem and printing from n to 1 given by the user
void backtrack(int i, int n){
   if(i>n){
       return ;

   }
   backtrack(i+1,n);
   cout<<i<<endl;

 }
 int main(){
   int n,i;
   cout<<"enter the number i:"<<endl;
   cin>>i;
   cout<<"enter the number n:"<<endl;
   cin>>n;
   backtrack(i,n);
   return 0;
 }   */

/* / sum of the n numbers using recursion

  void recursive(int i,int sum){
    if(i<1){
        cout<<sum;
        return;
    }
    recursive(i-1,sum+i);
  }

  int main(){
    int n;
    cout<<"enter number n:"<<endl;
    cin>>n;
    recursive(n,0);
    return 0;
  } */

// using functional sum of n numbers
/* int  functional(int n){
    if(n==0){
     return 0 ;

    }
       cout<<n<<" ";
    return n+functional(n-1);

}
int main(){
    int n;
    cout<<"enter n:"<<endl;
    cin>>n;
    int ans = functional(n);
    cout<<"\n"<<ans;
    return 0;
} */

// using functional method getting the factorial of the number
/* int  functional(int n){
    if(n==1){
     return 1 ;

    }
       cout<<n<<" ";
    return n*functional(n-1);

}
int main(){
    int n;
    cout<<"enter n:"<<endl;
    cin>>n;
    int ans = functional(n);
    cout<<"\n"<<ans;
    return 0;
} */

/*
//checking reverse of the array using recursion

void reverse(int arr[], int l,int r){
    if(l>=r){
        return;
    }
    swap(arr[l], arr[r]);
    reverse(arr,l+1,r-1);

}
int main(){
    int n;
    cout<<"enter the length of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the elements:";
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    reverse(arr, 0,n-1);
cout<<"reversed array:";
for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
}
 return 0;
}

*/

/*
 char palindrome(char arr[],int i,int n){
    if(i>=n/2){
        return true;
       }
        if(arr[i]=!arr[n-i-1]){
            return false;
    }
        return palindrome(arr,i+1,n);

}
int main(){
    int n;
    cout<<"enter the size of string"<<endl;
    cin>>n;
    char arr[n];
    cout<<"enter the string :"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    if(palindrome(arr,0,n)){
        cout<<"palindrome"<<endl;
    }
    else{
        cout<<"not palindrome"<<endl;
    }
    return 0;
    }
*/

/*
bool palindrome(int arr[],int i, int n){
    if(i>=n/2){
        return true;
    }
    if(arr[i]!=arr[n-i-1]){
        return false;
    }
    return palindrome(arr,i+1,n);
}
    int main(){
        int n;
        cout<<"enter the length of the array:"<<endl;
        cin>>n;
        int arr[n];
        cout<<"enter the array"<<endl;
        for(int i=0; i<n; i++){
            cin>>arr[i];
    }
    if (palindrome(arr,0,n)){
        cout<<"palindrome";
    }
    else{
        cout<<"not a palindrome";
    }
}
 */

/*  bool palindrome(int i, string &s){
       if(i>= s.size()){
           return true;
       }
       if(s[i]!=s[s.size()-i-1]){
           return false;
       }
       return palindrome(i+1,s);
   }
   int main(){
       string s="madam";
       cout<<palindrome(0,s);
       return 0;
   }
   // 1 means s is palindrome and 0 means s is not palindrome

*/

/*
    //fibonacci using the recursion
    int fibonacci(int n){
        if(n<=1){
            return n;
        }
        int last= fibonacci(n-1);
        int slast=fibonacci(n-2);
        return last+slast;
    }

    int main(){
        int n;
        cout<<"enter number for fibonacci:";
        cin>>n;
        cout<<(fibonacci(n));
        return 0;
    }

*/
/*    int subsequence(int ind,[])
{
  if(ind>=n){
    cout<<[];
    return;
    [].add(arr[i]);
  subsequence(ind+1,[]);
  [].remove(arr[i]);
  subsequence(ind+1,[]);
}
int main(){
    int arr=[2,4,5,6];
    subsequence(0,[]);
}
}
 */
/* bool ispoweroftwo(int x){
    if(x==1){
        return true;
    }
    if(x<=0 || x%2!=0){
        return false;
    }
    return is(x/2);
    
}
int main(){
   cout<<( ispoweroftwo(33));
} 
   
*/

bool isPowerOfThree(int n) {
        if(n==1){
            return true;
        }
     if(n<=0 || n%3!=0){
        return false;
     }
        return isPowerOfThree(n/3);
    }
    int main(){
        cout<<(isPowerOfThree(9));
    }
