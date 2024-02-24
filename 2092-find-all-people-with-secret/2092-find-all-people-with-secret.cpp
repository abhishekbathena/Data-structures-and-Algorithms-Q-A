// class Solution {
// public:
 
//     vector<int> findAllPeople(int n, vector<vector<int>>& vec, int firstPerson) {
    
//        sort(vec.begin(), vec.end(), [](const std::vector<int>& a, const std::vector<int>& b) {
//         return a[2] < b[2];
//         });
    
//         vector<bool>check(n,false);
//         check[0]=true;
//         check[firstPerson]=true;
//         vector<int>ans;
//         ans.push_back(0);
//         for(auto a:vec)
//         {
//             if(a[0]==0)
//             {
//                 check[a[1]]=true;
//                 ans.push_back(a[1]);
//                 break;
//             }
//             else if(a[1]==0)
//             {
//                 check[a[0]]=true;
//                 ans.push_back(a[0]);
//                 break;
//             }

//         }
//          if(find(ans.begin(), ans.end(), firstPerson)==ans.end()) ans.push_back(firstPerson);
        
//         for(auto a:vec)
//         {
//              if(check[a[0]]==true)
//              {
//                  check[a[1]]=true;
//                 if(find(ans.begin(), ans.end(), a[1])==ans.end()) ans.push_back(a[1]);
//              }
//              else if(check[a[1]]==true)
//              {
//                  check[a[0]]=true;
//                 if(find(ans.begin(), ans.end(), a[0])==ans.end()) ans.push_back(a[0]);
//              }
//         }
//         set<int>ans2(ans.begin(),ans.end());
//         ans.clear();
//         for(auto a:ans2) ans.push_back(a);
        
//         return ans;
    
        
        
//     }
    
    
// };

class Solution {
public:
#define MAX_N 100000
    int find(const int* groups, int index){
        while(index != groups[index])index = groups[index];
        return index;
    }

    vector<int> findAllPeople(int n, vector<vector<int>>& meetings, int firstPerson) {
        static int groups[MAX_N];
        static vector<int> temp;

        for (int i = 0; i < n; ++i) groups[i] = i;
        groups[firstPerson] = 0;

        sort(meetings.begin(), meetings.end(), [](const auto& l, const auto& r) {
            return l[2] < r[2];
        });

        const int SIZE = meetings.size();
        int i = 0;
        while (i < SIZE) {
            int currentTime = meetings[i][2];
            temp.clear();
            while (i < SIZE && meetings[i][2] == currentTime) {
                int g1 = find(groups, meetings[i][0]);
                int g2 = find(groups, meetings[i][1]);
                groups[max(g1, g2)] = min(g1, g2);
                temp.push_back(meetings[i][0]);
                temp.push_back(meetings[i][1]);
                ++i;
            }
            for (int j = 0; j < temp.size(); ++j) {
                if (find(groups, temp[j]) != 0) {
                    groups[temp[j]] = temp[j];
                }
            }
        }

        vector<int> result;
        for (int j = 0; j < n; ++j) {
            if (find(groups, j) == 0)result.push_back(j);
        }

        return result;
    }
};