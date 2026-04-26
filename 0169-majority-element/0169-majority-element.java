class Solution {
    public int majorityElement(int[] nums) {
        int l = nums.length;
        int maxlen=(l/2), index=0;
        int count, i;
        for (i =0; i<l ;i++)
        {
            count =0;
            for (int j =0; j<l;j++)
            {
                if(nums[i]==nums[j])
                {
                    count++;
                }
            }
            if(count > maxlen)
            {
                maxlen = count;
                break;
            }
        }
        return nums[i];
    }
}