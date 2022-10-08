// link-https://leetcode.com/problems/my-calendar-iii/
// youtube link-https://www.youtube.com/watch?v=8k2qVUv_a2M



// approach
// here we use map not unordered map because we want the events to be sorted order OR  we have to maintain the order of the events
// use map to solve this question
// we have take mp[start]++ that means it will increment the key by 1 and mp[end]-- decrement the key
// for example [10,20) 10->1,20->-1 so  finally  count becomes =0 and maxi is storing the maximum of the previous k events (i.e) maxi=1
// rest you just dry run you will get my point more clearly



class MyCalendarThree {
public:
    map<int,int> mp;
    MyCalendarThree() {
        
    }
    
    int book(int start, int end) {
       mp[start]++;
       mp[end]--; 
       int count=0,maxi=0;
       for(auto it:mp){
        count+=it.second;
        maxi=max(count,maxi);

       }
       return maxi;
    }
};
