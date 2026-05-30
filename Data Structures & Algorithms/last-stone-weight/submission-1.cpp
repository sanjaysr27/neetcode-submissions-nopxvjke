class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;
        for(int stone : stones){
            pq.push(stone);
        }
        
        while(pq.size()>1){
            int k = pq.top();
            pq.pop();
            int l = pq.top();
            pq.pop();
            if(k!=l){
                pq.push(k-l);
            }
        }
        if(pq.empty()){
            return 0;
        }
        else return pq.top();
    }
};
