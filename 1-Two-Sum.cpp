class Solution {
public:
    vector<int> twoSum(vector<int>& v, int x) {
        for(int i=0;i<=v.size()-2;i++){
            for(int j=i+1;j<=v.size()-1;j++){
                if(v[i]+v[j]==x){
                    return {i,j};
                }
            }
        }
        return {} ;
    }
};