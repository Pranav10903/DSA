class Solution {
public:
    vector<int> searchRange(vector<int>& a, int target) {
	int start = 0, end = a.size()-1;
	vector<int> ans(2, -1);
	while(start <= end){
		int mid = start + (end-start)/2;
		if(a[mid] < target)
			start = mid+1;
		else if(a[mid] > target)
			end = mid-1;
		else{
			if(mid == start || a[mid] != a[mid-1]){
				ans[0] = mid;
				break;
			}
			else{
				end = mid-1;
				ans[0] = mid-1;
			}
		}
	}
	start = 0, end = a.size()-1;
	while(start <= end){
		int mid = start + (end-start)/2;
		if(a[mid] < target)
			start = mid+1;
		else if(a[mid] > target)
			end = mid-1;
		else{
			if(mid == end || a[mid] != a[mid+1]){
				ans[1] = mid;
				break;
			}
			else{
				start = mid+1;
				ans[1] = mid+1;
			}
		}
	}
	return ans; 
   }
};
