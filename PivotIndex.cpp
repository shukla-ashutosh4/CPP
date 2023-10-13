class Solution {
public:
    int n= nums.size();
     int sum=0;
     for(int i=0;i<n;i++){
         sum=sum+nums[i];
     }int firstsum=0;int secondsum;
     for(int i=0;i<n;i++){
     secondsum=sum-nums[i]-firstsum;
     if(firstsum==secondsum){
         return i;
     }

     firstsum=firstsum+nums[i];
     }
    return -1;
    }
};