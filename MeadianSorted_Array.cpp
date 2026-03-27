#include<iostream>
#include<vector>
using namespace std;

double findMedianSortedArrays(vector<int>& nums1,vector<int>& nums2){
vector<int> merged;

int i=0,j=0;

// Merge both arrays
while(i<nums1.size() && j<nums2.size()){
    if(nums1[i]<nums2[j]){
        merged.push_back(nums1[i]);
        i++;
    }else{
        merged.push_back(nums2[j]);
        j++;
    }
}
// Remaining elements
while(i<nums1.size()){
    merged.push_back(nums1[i]);
    i++;
}
while(j<nums2.size()){
    merged.push_back(nums2[j]);
    j++;
}
// Find median
int n=merged.size();

if(n%2==1){
    return merged[n/2];
}else{
    return (merged[n/2-1]+merged[n/2])/2.0;
}

}
int main(){
    vector<int> nums1 ={1,3};
    vector<int> nums2 ={2};

    double result =findMedianSortedArrays(nums1,nums2);
    cout<<"Median is: "<<result<<endl;
    return 0;
}
