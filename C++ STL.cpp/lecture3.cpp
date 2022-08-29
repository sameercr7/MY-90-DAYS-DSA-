 #include<bits/stdc++.h>
 using namespace std;
int main(){
// A bitset is an array of bool but each Boolean value is not stored separately instead bitset optimizes the space such that each bool takes 1 bit space only, so space taken by bitset bs is less than that of bool bs[N] and vector bs(N). However, a limitation of bitset is, N must be known at compile time, i.e., a constant (this limitation is not there with vector and dynamic array)
//  bitset
// it take less size than int
bitset<5> bt;
cin>>bt; 
// all
// it stores 1 and 0
// this return true if all the bits are set and if not then return false
cout<<bt.all()<<endl; 
// any
// if any 1 bit is set then returns true
cout<<bt.any()<<endl;
// count
// print the number of set bits
cout<<bt.count()<<endl;
// flip
// 1 become zero and zero become one ....beech mein index daaldo
cout<<bt.flip(2)<<endl;
// none
// if none is set then true else false
cout<<bt.none()<<endl;
// set
// it will update entire with all 1
cout<<bt.set()<<endl;
// if you want to set specific index with specific value
//  doubt h ispe cout<<bt.set(3,0)<<endl;
// reset it just reset all to zero
cout<<bt.reset()<<endl;
// test
// for checking the bit is set or not at index 1
cout<<bt.test(2)<<endl;

// Algorithm
// sorting
// arry,vector
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++) cin>>arr[i];
// sort take a time nlog(n)
sort(arr,arr+n);
vector<int> vec;
for(int i=0;i<n;i++)
   cin>>vec[i];
sort(vec.begin(),vec.end());

// vec->{1,6,2,7,4}
// sort it to so that only indexes from 1 to 3;
sort(vec.begin()+1,vec.end()+4);
// [1,4)
reverse(vec.begin(),vec.end());

// to obtain max element
// if you do not get apply =star gvives iterator as output

int el=*max_element(vec.begin(),vec.end());

// to get the sum from i to j
// 0 ki jagah mtlb h ki 0 add ho tha initially ya tm apne a/c krdo

int sum=accumulate(vec.begin(),vec.end(),0);

// vec={1,6,7,1,2,1,4}
// couont the number of one
// complexity waise bi whi rhegi jo for mein h

int cnt=count(vec.begin(),vec.end(),1);
 
// vec={1,6,7,1,2,1,4}
// want to find the first occurence of 1 or any other element
// returns iterator

//...****..  to have the index from iterator just subtract the begin form iterator

auto it = find(vec.begin(),vec.end(),1)-vec.begin(); 

// imagine what wil now it returns

// vec={1,6,7,1,2,1,4}
//  so here is the answer it will point to the end

 auto it=find(vec.begin(),vec.end(),98)
if(it==vec.end())
 cout<<"element is not present";
else
  cout<<"element is first present at"<<it-vec.begin();

// BINARY search
// this stl is work on only sorted array
// works on log(n) function


// vec={1,5,7,9,10}
// x=9
// true -> if  exists in my arr
// x=8
// false -> if doesn't secret
 bool res=binary_search(vec.begin(),vec.end(),8);
 
// lower_bound function
// return an iterator pointing to the first
// element which is not less than x
// vec={1,5,7,7,8,10,10,10,11,11,12}
// x=10 o/p-5th index
// x=6  o/p-2  
// x=13  o/p- end
// this work in log(n)

int x=4;
auto it =lower_bound(vec.begin(),vec.end(),x);

// upper bound function
// return an iterator pointing to the first
// element which is just greater than x
// vec={1,5,7,7,8,10,10,10,11,11,12}
// x=10 o/p-7
// x=6  o/p-2

auto it =upper_bound(vec.begin(),vec.end(),x);
// vec={1,5,7,7,8,10,10,10,11,11,12}
// x=10 o/p-8
// x=7  o/p-4


// ques find the element first occurunce in an array
// arr={1,5,7,7,8,10,10,10,11,11,12};
// find x=7
// do it in log(n)
// for 7 only lower bound will work but if x=6 then it will give ooutput as

// this takes 2log(n) 
if(binary_search(vec.begin(),vec.end(),x)==true){
        auto ind=lower_bound(vec.begin(),vec.end(),x)-vec.begin();

        cout<<ind;
}
else
   cout<<"doesnt exist";

// 2nd way
// for x=13 which isout pf bound  hence vec[11] will give you run time error

int ind=lower_bound(vec.begin(),vec.end(),x)-vec.begin();
if(ind!=n && vec[ind]==x)
   cout<<"found";
else 
   cout<<"not found";



















}

