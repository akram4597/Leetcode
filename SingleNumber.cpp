class Solution {
public:
    int singleNumber(vector<int>& nums) {
      unordered_map <int, int> mymap;
      for(int i = 0; i < nums.size(); i++) //Adding the keys and values to the unordered_map
          mymap[nums[i]]++;
      for(auto it = mymap.begin(); it != mymap.end(); it++)//checking for the number which occurred once.
      {
        if(it -> second == 1)
            return it->first;        
      }    

       return 0;   
    }    
};
