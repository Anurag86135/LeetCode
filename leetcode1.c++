// // Two Sum

// // 1.Brute force approach

// #include<iostream>
// using namespace std;

// void TwoSum(int nums[] ,int n,int target,int result[]){
   

//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(nums[i]+nums[j]==target){
//                 result[0]=i;
//                 result[1]=j;
//                 return;

//             }

//         }
        
//     }
  
// }
// int main(){
//      int target;
//     int nums[]={2,7,9,11,15};

//     cout<<"Enter the value of target :"<<endl;
//     cin>>target;
//     int n=sizeof(nums)/sizeof(nums[0]);

//     int result[2];
//     TwoSum(nums,n,target,result);
//     cout<<result[0]<<" "<<result[1];
//     return 0;
// }


// Optimal solution using Hashmape

#include<iostream>
#include<unordered_map>
using namespace std;
void TwoSumOptimized(int nums[],int n,int target,int result[]){
    unordered_map<int,int>mp; //value -> index
    for(int i=0;i<n;i++){
        int complement =target-nums[i];

        if(mp.find(complement)!=mp.end()){
            result[0]=mp[complement];
            result[1]=i;
            return;
        }
        mp[nums[i]] =i;
    }

}
int main(){
    int nums[]={2,7,11,15};
    int n=sizeof(nums)/sizeof(nums[0]);
    int target;

    cout<<"Enter the target ";
    cin>>target;

    int result[2];
    TwoSumOptimized(nums,n,target,result);
    cout<<result[0]<<" "<<result[1];
    return 0;

}