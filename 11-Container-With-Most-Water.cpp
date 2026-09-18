class Solution {
public:
    int maxArea(vector<int>& h) {
        int n=h.size();
        int i=0;
        int j=n-1;
        int cur_area=0;
        while(i<j){
            int area=(j-i)*min(h[i],h[j]);
            if(area>cur_area){
                cur_area=area;
            }
            if (h[i] < h[j])
                i++;
            else
                j--;
        }
        return cur_area;
    }
};