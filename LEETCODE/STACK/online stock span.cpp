// link-https://leetcode.com/problems/online-stock-span/
// youtube link-youtube.com/watch?v=IDC1rnr3vus

// simple approach
// as we know we want to store the past history ....rather to use two loop one for traversing and other for backtraversing
// ....So here comes the stack to rescue

// stack,monotonic stack-jo neeche se uapr asending mein ho use monotonic stack khte h


class StockSpanner {
public:
    stack<pair<int,int>> st;
    StockSpanner() {
        
    }
    
    int next(int price) {
        int span=1;
        while(!st.empty() && st.top().first<=price){
            span+=st.top().second;
            st.pop();
        }
        st.push({price,span});
        return span;
  
        
        
    }
    
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */