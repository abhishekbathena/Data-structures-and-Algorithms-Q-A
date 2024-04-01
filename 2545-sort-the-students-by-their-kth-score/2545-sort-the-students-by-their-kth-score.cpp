class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& arr, int k) {
           int i, j, min_idx; 
        int n=arr.size();
    for (i = 0; i < n - 1; i++) { 
        min_idx = i; 
        for (j = i + 1; j < n; j++) { 
            if (arr[j][k] > arr[min_idx][k]) 
                min_idx = j; 
        } 
  
        // Swap the found minimum element 
        // with the first element 
        if (min_idx != i) 
            swap(arr[min_idx], arr[i]); 
        
    }
        return arr;
    }
};