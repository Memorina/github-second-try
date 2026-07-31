int cmp(const void *a,const void *b){
    return (*(int*)a-*(int*)b);
}

int threeSumClosest(int* nums,int numsSize,int target){
    qsort(nums,numsSize,sizeof(int),cmp);
    int ans=nums[0]+nums[1]+nums[2];
    for(int i=0;i<numsSize-2;i++){
        int l=i+1,r=numsSize-1;
        while(l<r){
            int sum=nums[i]+nums[l]+nums[r];
            if(abs(target-sum)<abs(target-ans)){
                ans=sum;
            }
            if(sum<target){
                l++;
            }else if(sum>target){
                r--;
            }else{
                return sum;
            }
        }
    }
    return ans;
}