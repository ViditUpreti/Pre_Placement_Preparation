class MyCalendar {
public:
    vector<vector<int>>temp;
    MyCalendar() {
        temp.push_back({0,0});
    }
    
    bool book(int start, int end) {
        for(int i=0;i<temp.size();i++){
            if(start<temp[i][1] &&end>temp[i][0]){
                return false;
            }    
        }
        temp.push_back({start,end});
        return true;
        }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */