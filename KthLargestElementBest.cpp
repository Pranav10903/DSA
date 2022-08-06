class Solution {
public:
    int partition(vector<int> &nums, int low, int high){
        int pivot_pos = rand() % (high-low+1)+low;  // random select pivot position(ensure the selected index between low and high index)
        int pivot = nums[pivot_pos];
        swap(nums[pivot_pos],nums[high]);
		//----below is classical quick sort process----
        int l = low-1;
        for(int i = low; i<high; i++){
            if(nums[i]<pivot){
                l++;
                swap(nums[l],nums[i]);
            }
        }
        swap(nums[l+1],nums[high]);
        return l+1;
    }
public:
    int findKthLargest(vector<int>& nums, int k) {
        int low = 0;
        int high = nums.size()-1;
        int rank = nums.size()-k;  //turn problem to find rank-th smallest
        while(true){
            int pivot_pos = partition(nums,low,high);
            if(pivot_pos == rank){
                return nums[pivot_pos];
            }
            if(pivot_pos<rank){   // if pivot_pos smaller than the rank, update low bound
                low = pivot_pos+1;
            }
            else{
                high = pivot_pos-1;
            }
        }
    }
};
