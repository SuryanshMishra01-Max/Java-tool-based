
/* STL HAS FOUR PARTS 
1.algorithms
2.containers
3.functions
4.iterators */


/* containers  */

void explainpair(){
    pair<int ,  int> p = {1,3};
    cout<<p.first<<" "<<p.second 
    pair<int , pair<int , int>> p = {1,{3,4}}
    cout<<p.first<<" ",,p.second.first //i.e 3 in the second pair
    pair<int , int> arr[] = {{1,2}, {2,2}}
    cout<<arr[1].second;
}