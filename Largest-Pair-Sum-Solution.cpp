######################################################################################  Question  ####################################################################################################################################################
Find the largest pair sum in an array of distinct integers.

Examples :

Input: arr[] = [12, 34, 10, 6, 40]
Output: 74
Explanation: Sum of 34 and 40 is the largest, i.e, 34 + 40 = 74.
Input: arr[] = [10, 20, 30]
Output: 50
Explanation: 20 + 30 = 50.
Expected Time Complexity: O(n)
Expected Auxiliary Space: O(1)

Constraints:
2 ≤ arr.size() ≤ 106
0 ≤ arr[i] ≤ 106


#######################################################################################  Solution  ###################################################################################################################################################

//{ Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    int pairsum(vector<int> &arr) {
       
        int lar1=0,lar2=0;
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
            if(arr[i]>lar1)
            {
                lar2=lar1;
                lar1=arr[i];
            }
            else if(arr[i]>lar2)
            {
                lar2=arr[i];
            }
        }
        return lar1+lar2;
    }
};



//{ Driver Code Starts.
int main() {
    int t;

    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int n = arr.size();
        Solution ob;
        int r = ob.pairsum(arr);
        cout << r << endl;
    }
    return 0;
}
// } Driver Code Ends
