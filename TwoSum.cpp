#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;


vector<int> twoSum(vector<int>&nums,int target){
    unordered_map<int,int>mp;//value->index
    for(int i=0;i<nums.size();i++){
        int current=nums[i];
        int required =target - current;

        // Check if required value already exists 
        if(mp.find(required) !=mp.end()){
            return {mp[required],i};
        }
        // store current element
        mp[current] = i;

    }
    return {}; //if no solution

}
int main(){
    vector<int> nums ={2,7,11,15};
    int target =9;
    vector <int> result =twoSum(nums,target);

    if(result.size() ==2){
        cout<<"Indices: "<<result[0]<<" "<<result[1]<<endl;
        
    }else{
            cout<<"No solution found...";
        }
        return 0;
}