class Solution {
public:
    vector<int> twoSum(vector<int> &nums, int target)
 {
  //Key is the number and value is its index in the vector.
	unordered_map<int, int> mymap;
	vector<int> result;
  int numToFind;    
	for (int i = 0; i < nums.size(); i++) // Adding the key and value to the map
        mymap[nums[i]] = i;

  for (int i = 0; i < nums.size(); i++)
  {
        numToFind = target - nums[i];
        //NOW SEARCH IF numToFind is in the map
        if((mymap.find(numToFind) != mymap.end()) && (i != mymap[numToFind])) 
        {
            //it is found
            result.push_back(i);
            result.push_back(mymap[numToFind]);
            return result;    
        }           
    }
    return result;
  }
};
