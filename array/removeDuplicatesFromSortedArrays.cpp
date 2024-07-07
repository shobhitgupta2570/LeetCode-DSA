// class Solution {
// public:
//     int removeDuplicates(vector<int>& nums) {
//         int k = 0;
//         for(int i=1; i<nums.size(); i++){
//             if(nums[k]!=nums[i]){
//                 k++;
//                 nums[k]=nums[i];
//             }
//         }
//         return k+1;
//     }
// };


#include<bits/stdc++.h>

using namespace std;
int removeDuplicates(int arr[], int n)
{
  int i = 0;
  for (int j = 1; j < n; j++) {
    if (arr[i] != arr[j]) {
      i++;
      arr[i] = arr[j];
    }
  }
  return i + 1;
}
int main() {
  int arr[] = {1,1,2,2,2,3,3};
  int n = sizeof(arr)/sizeof(arr[0]);
  int k = removeDuplicates(arr, n);
  cout << "The array after removing duplicate elements is " << endl;
  for (int i = 0; i < k; i++) {
    cout << arr[i] << " ";
  }
}

