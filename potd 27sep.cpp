class Solution {
  public:
    // Function to find maximum of each subarray of size k.
    int findmax(int i,int j,vector<int>&arr)
    {
        int maxi=INT_MIN;
        for(int c=i;c<=j;c++)
        {
            maxi=max(maxi,arr[c]);
        }
        return maxi;
    }
    vector<int> max_of_subarrays(int k, vector<int> &arr) {
        // your code here
        int maxi=INT_MIN;
        // vector<int> ans;
        for(int i=0;i<k;i++)
        {
            maxi=max(maxi,arr[i]);
        }
        int j=k;
        vector<int> mainans;
        mainans.push_back(maxi);
        int i=0;
         while(i<arr.size()-k)
         {
             if(maxi==arr[i])
             {
                 maxi=findmax(i+1,j,arr);
                 mainans.push_back(maxi);
             }
             else 
             {
                 maxi=max(maxi,arr[j]);
                 mainans.push_back(maxi);
             }
             i+=1;
             j+=1;
         }
         return mainans;
    }
};
