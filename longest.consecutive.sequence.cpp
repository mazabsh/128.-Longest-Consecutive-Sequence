// Online C++ compiler to run C++ program online
#include<iostream> 
#include<vector> 
#include<unordered_set> 
#include<algorithm>

using namespace std; 

class Solution{
public: 
   int longestConsecutive(vector<int>& nums) {
     unordered_set<int> s(nums.begin(), nums.end()); 
     int maxLength =0; 
     for(int n:s){
       if(!s.count(n-1)){
         int curr = n; 
         int currLength =1; 
         while(s.count(curr+1)){
           curr +=1; 
           currLength+=1; 
         }
         maxLength = max(maxLength, currLength); 
       }
       
     }
     return maxLength; 
   }
};
int main(){
  vector<int> nums={100,4,200,1,2,3}; 
  Solution sol; 
  cout << sol.longestConsecutive(nums) <<endl; 
  return 0; 
}
