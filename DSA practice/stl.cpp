#include<bits/stdc++.h> //this includes all the libraries
using namespace std;

/* void print(){
   cout << "ayush \n";
}
 int sum(int a , int b){
   return a+b;
 }
int main() {
   print();
   int s = sum(1,5);
   cout << s;
    
} */


     
/* void print()  

/*     cout<<"suryansh";

}
 int sum(int a, int b) {
    return a+b;

 }
 int main(){
    print();
    int s=sum(6,9);
    cout<<s;
    return 0; */
    // /////////////////////////////
/*     pair<int, pair<int,int>> p={1,{2,3}};
 */

 //vector <int> ayush; */


//}

//////////////////////////////////////////////LIST////////////////////////////////////////////////////
 void explainlist()
list<int> ls;
ls.push_back(2);
ls.emplace_back(5);
ls.push_front(4); /* {4,2,5} */

///////////////////////////////////////////////DEQUE////////////////////////////////////////////////////

void explaindeque(){
   deque<int>dq;
   dq.push_back(1);
   dq.emplace_back(2);
   dq.push_front(4);
   dq.emplace_front(3);

   dq.pop_back();
   dq.pop_front();

   dq.back();

   dq.front();
}

void explainPQ(){
   priority_queue<int>pq;
   
} 

///////////////////////////////////////////PRIORITY QUEUE////////////////////////////////////////////////////
void explainPQ(){  //priority queue
   priority_queue<int>pq;

   pq.push(5); //{5}
   pq.push(2);  //{5,2}
   pq.push(9); //{9,5,2}
   pq.emplace(10);  //{10,9,5,2}
   
   cout<< pq.top(); //prints 10
   pq.pop(); //10 removed {9,5,2}
   cout<<pq.top(); //prints 9
   
  /* size swap empty function same as other 
  minimum heap
 */
  
   priority_queue<int , vector<int>, greater <int>> pq;
   pq.push(5);
   pq.push(2);
   pq.push(9);
   pq.emplace(10);

   cout<<pq.top();
}
///////////////////////////////////////////SET////////////////////////////////////////////////////

// iterator is something that points to an element in a container and we can access the element using the iterator  
void explainSet(){
   set<int> st;    //set is a container that stores unique elements in sorted order
   st.insert(1);  //{1}
   st.emplace(2); //{1,2}
   st.insert(2);  //{1,2}
   st.insert(3);  //{1,2,3}
   st.insert(4); //{1,2,3,4}
   auto it= st.find(3);  //it is an iterator that points to the element 3 in the set
   auto it= st.find(6); //auto automatically detects the data type from the value assigned to it.
    st.erase(4);

    int cnt = st.count(1); //time complexity of count is O(log n) in set and O(1) in unordered set
    auto it=st.find(4);
    st.erase(it);

    auto it1=st.find(5);
    auto it2=st.find(7);
    st.erase(it1,it2);

    auto it=lower_bound(2);
    auto it=upper_bound(3);

     /////////////////////////////////////////////////////// MUTLISET///////////////////////////////////////////////////

     void explainMultiset(){
        multiset<int> ms; //multiset is a container that stores multiple occurrences of the same element in sorted order...unique elements does not matter in multiset
        ms.insert(1);
        ms.insert(1);
        ms.insert(1);
        ms.erase(1);

        int cnt=ms.count(1);
        ms.erase(ms.find(1));
        ms.erase(ms.find(1),ms.find(1)+2); //erases 2 occcurences of 1 from the multiset
}
    

/////////////////////////////////////////MAP////////////////////////////////////////////////////
// map stores unique key value pairs in sorted order based on the keys
void explainMap(){
   map<int, int>mpp;
   map<int, pair<int,int>>mpp;
   mpp[1]=2; //{1,2}
   mpp[3]=1; //{1,2} {3,1}
   mpp.insert({2,4}); //{1,2} {2,4} {3,1}
   mpp.emplace(5,1); //{1,2} {2,4} {3,1} {5,1}
   for (auto it:mpp){
      cout<<it.first<<" "<<it.second<<endl;
   }
   cout<<mpp[1]<<endl; //prints 2
   cout<<mpp[3]<<endl; //prints 1

   auto it=mpp.found(3); //it is an iterator that points to the element with key 3 in the map
   cout<<*(it).second; //prints 1

   auto it=mpp.find(6); 

}

/////////////////SORTING//////////////////////////
void explainsort(){
   sort(a,a+n); //sorts the array in the ascending order
   sort(a,a+n,greater<int>()); // sorts the array in the descending order
   pair<int,int> a[]= {{2,4},{5,6},{3,4}};   /* sorts the array of pairs in the ascending order.... if 
   the second element is same then sort it based on the first element but in descending order */

   sort(a,a+n,comp); //comp is user defined function that returns true...
/*     if the first element should come before the second element in the sorted order and false otherwise*/ 
       
       int num=10;
       int cnt=_builtin__popcount(num); //returns the number of set bits in the binary representation of num
       long long num=834672387329;
       int cnt=_builtin__popcountll(num); //returns the number of the set bits in the
 //         binary representation of num for long long data type
         }

}
