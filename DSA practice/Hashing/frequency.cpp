#include <iostream>
using namespace std;
/*     int frequency(int arr[],int n,int x){
        int count = 0;
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        for(int i=0; i<n;  i++){
            if (arr[i] == x){
             count = count + 1;
            }

        }
        return count;
    }

int main(){
    int arr[]={2,4,5,3,2,6,5};
  cout<<(frequency(arr,7,2));
  return 0;
}
  */

int main()
{
    int y;
    cout << "enter the size of the array: ";
    cin >> y;
    int arr[y];
    cout << "Now enter the arrays: ";
    for (int i = 0; i < y; i++)
    {
        cin >> arr[i];
    }

    // precompute frequency
    int hash[10] = {0};
    for (int i = 0; i < y; i++)
    {
        hash[arr[i]]++;
    }

    cout << "enter the number you want to check the frequency: ";
    int x;
    cin >> x;
    // fetch
    cout << hash[x];

    int maxfreq=0;
    int number = 0;
    for(int i=0; i<y; i++){
        if(hash[i]>maxfreq){
            maxfreq= hash[i];
            number = i;
        }
    }
    cout<<"number with the heighest frequency"<<number<<endl;
    cout<<"frequency"<<maxfreq;
}
