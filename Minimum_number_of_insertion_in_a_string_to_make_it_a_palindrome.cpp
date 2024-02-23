// Minimum number of insertion in a string to make it a palindrome
// leetocode problem link- https://leetcode.com/problems/minimum-insertion-steps-to-make-a-string-palindrome/
// gfg -https://www.geeksforgeeks.org/problems/form-a-palindrome1455/1


// CODE:
int countMin(string a){
     string b(a.rbegin(),a.rend());
        int m=a.length();
        int t[m+1][m+1];
        for(int i=0;i<m+1;i++){
            for(int j=0;j<m+1;j++){
                if(i==0 || j==0){
                    t[i][j]=0;
                }
                else if(a[i-1]==b[j-1]){
                    t[i][j]=1+t[i-1][j-1];
                }
                else{
                    t[i][j]=max(t[i][j-1],t[i-1][j]);
                }
            }
        }
        int insertions=m-t[m][m];
        return insertions;
    }
