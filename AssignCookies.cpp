class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
    	int contentChildren = 0;
        for(int i=0; i< g.size(); i++){
        	for(int j=0;j<s.size(); j++){
        		if(s[j] >= g[i]){
        			contentChildren++;
       				s.erase(s.begin() + j);
       				break;
        		}
        	}
        }
        return contentChildren;
    }
};
