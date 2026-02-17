/*  vector is a container wwhich is dynamic in nature
  jaise array ka size const hota hai iska dynamic hota h
  the size you can change any time...
 */ 
void explainvoid(){
    vector <int> v;  //creates an empty array
    v.push_back(1)   //inserts 1
    v.emplace_back(2);

    vector<pair<int, int>>vec;
    v.push_back({1,2});
    v.emplace_back(1,2);/* it automatically detects the pair is
                          or not them inserts it*/
                        
   vector<int > v(5,100) //i.e 5 instances of 100 is stored
   vector<int> v(5);
   vector <int> v1(5,20);
   vector<int>v2(v1)    //v2 stores elements of v1 as its copy
     
/*   note: in order to access in the memory youve to include *
                 ITERATOR
*/ 
  vector<int>::iterator it = v.begin();
  it++;
  cout << *(it) << " ";
  vector<int>::iterator it= v.end();
  vector<int>::iterator it= v.rend();
  vector<int>::iterator it= v.rbegin();

}
