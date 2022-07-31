class NumArray {
public:
    vector<long>st;
    int n ;
    NumArray(vector<int>& nums) {
        n=nums.size();
        for(int i=0;i<n;i++){
            st.push_back(0);
        }
        for(int i =0;i<n;i++){
            st.push_back(nums[i]);
        }
        for(int i =n-1;i>=0;i--){
            st[i]=st[2*i]+st[2*i+1];
        }        
    }
    
    void update(int pos, int val) {
        pos+= n;
        st[pos]=val;
        while(pos>0){
            int left=pos;
            int right=pos;
            if(pos%2==0){
                right=pos+1;
            }
            else{
                left=pos-1;
            }
            st[pos/2]=st[left]+st[right];
            pos/=2;
        }
    }
    
    int sumRange(int l, int r) {
        l += n;
    // get leaf with value 'r'
    r += n;
    int sum = 0;
    while (l <= r) {
        if ((l % 2) == 1) {
           sum += st[l];
           l++;
        }
        if ((r % 2) == 0) {
           sum += st[r];
           r--;
        }
        l /= 2;
        r /= 2;
    }
    return sum;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */