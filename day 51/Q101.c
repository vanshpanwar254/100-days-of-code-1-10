/*
Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present.
Input 1:
nums = [5,7,7,8,8,10], target = 8
Output 1:
3,4
Input 2:
 nums = [5,7,7,8,8,10], target = 6
Output 2:
-1,-1
Input 3:
 nums = [5,7,7,8,8,10], target = 10
Output 3:
5,5
*/

// this is in O(N) 


#include <stdio.h>
int main(){
    int nums[] = {5,7,7,8,8,10};
    int target = 8;
    int first = -1, last = -1;
    int size = sizeof(nums)/sizeof(nums[0]);
    for(int i = 0; i < size; i++){
        if(nums[i] == target){
            if(first == -1){
                first = i;
            }
            last = i;
        }
    }
    printf("%d,%d\n", first, last);

  // we can do it with O(logN) by binary search 
  // binary search for first occurrence
    // while(i <= j){
    //     int mid = i + (j - i) / 2;
    //     if(nums[mid] == target){
    //         first = mid;
    //         j = mid - 1; // continue searching in the left half
    //     }
    //     else if(nums[mid] < target){
    //         i = mid + 1;
    //     }
    //     else{
    //         j = mid - 1;
    //     }
    // }
    // i = 0;
    // j = size - 1;
    // // binary search for last occurrence
    // while(i <= j){
    //     int mid = i + (j - i) / 2;
    //     if(nums[mid] == target){
    //         last = mid;
    //         i = mid + 1; // continue searching in the right half
    //     }
    //     else if(nums[mid] < target){
    //         i = mid + 1;
    //     }
    //     else{
    //         j = mid - 1;
    //     }
    // }
    return 0;
}
