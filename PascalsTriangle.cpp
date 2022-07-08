#include <bits/stdc++.h> 
vector<vector<long long int>> printPascal(int numRows) 
{
  // Write your code here.
   vector<vector<long long int>>ans;
        for(int i=0;i<numRows;i++)
        {
            vector<long long int>partial;
            for(int j=0;j<=i;j++)
            {
                if(j==0||j==i)
                {
                    partial.push_back(1);
                }
                else
                {
                    partial.push_back(ans[i-1][j-1]+ans[i-1][j]);
                }
            } ans.push_back(partial);
        } return ans;
}
