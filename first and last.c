int first(int* nums,int n,int target){
    int l=0,h=n-1,ans=-1;
    while(l<=h){
        int m=l+(h-l)/2;
        if(nums[m]==target){
            ans=m;
            h=m-1;
        }else if(nums[m]<target){
            l=m+1;
        }else{
            h=m-1;
        }
    }
    return ans;
}

int last(int* nums,int n,int target){
    int l=0,h=n-1,ans=-1;
    while(l<=h){
        int m=l+(h-l)/2;
        if(nums[m]==target){
            ans=m;
            l=m+1;
        }else if(nums[m]<target){
            l=m+1;
        }else{
            h=m-1;
        }
    }
    return ans;
}

int* searchRange(int* nums,int numsSize,int target,int* returnSize){
    *returnSize=2;
    int* ans=(int*)malloc(2*sizeof(int));
    ans[0]=first(nums,numsSize,target);
    ans[1]=last(nums,numsSize,target);
    return ans;
}