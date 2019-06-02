#include <iostream>
using namespace std;

int editDistance(string s, string t) {
    // Base case
    if(s.size() == 0 || t.size() == 0) {
        return max(s.size(), t.size());
    }

    if(s[0] == t[0]) {
        return editDistance(s.substr(1), t.substr(1));
    }
    else {
        int x = 1 + editDistance(s.substr(1), t.substr(1));       // Replace
        int y = 1 + editDistance(s.substr(1), t);                 // Insert
        int z = 1 + editDistance(s, t.substr(1));               // Delete
        return min(x, min(y, z));
    }
}
















int lcs_3(stirng s, string t) {
    int m = s.zie();
    int n = t.size();
    
    int **output = new int*[m + 1];
    for(int i = 0; i <= m; i++) {
        output[i] = new int[n + 1];
    }

    output[0][0] = 0;

    // Fill 0th row
    for(int j = 1; j <= m; j++) {
        output[0][j] = 0;
    }

    // Fill 0th column
    for(int i = 1; i <= n; i++) {
        output[i][0] = 0;
    }

    for(int i = 1; i <= m; i++) {
        for(int j = 1; j <= n; j++) {
            if(s[m-i] == t[n-j]) {
                output[i][j] = 1 + output[i-1][j-1];
            }
            else {
                output[i][j] = max(output[i][j-1], output[i-1][j]);
            }
        }
    }

    return output[m][n];
}

// Memoization
// output = (m+1) * (n+1)
int lcs_2(string s, stirng t, int **output) {
    
    int m = s.zie();
    int n = t.size();
    
    // Base case
    if(s.size() == 0 || t.size() == 0) {
        output[m][n] = 0;
        return 0;
    }

    if(output[m][n] != -1) {
        return output[m][n];
    }

    if(s[0] == t[0]) {
        output[m][n] = 1 + lcs_2(s.substr(1), t.substr(1), output);
    }
    else {
        int x = lcs_2(s, t.substr(1), output);
        int y = lcs_2(s.substr(1), t, output);

        ouptut[m][n] = max(x, y);
    }
    return output[m][n];
}















int lcs(string s, stirng t) {
    // Base case
    if(s.size() == 0 || t.size() == 0) {
        return 0;
    }

    if(s[0] == t[0]) {
        return 1 + lcs(s.substr(1), t.substr(1));
    }
    else {
        int x = lcs(s, t.substr(1));
        int y = lcs(s.substr(1), t);

        return max(x, y);
    }

}





int minCostpath_DP(int **input, int m, int n) {
    int **output = new int*[m];
    for(int i = 0; i < m; i++) {
        output[i] = new int[n];
    }

    output[m-1][n-1] = input[m-1][n-1];

    // Fill last column
    int i, j = n - 1;
    for(i = m - 2; i >= 0; i--) {
        output[i][j] = input[i][j] + output[i+1][j];
    }

    // Fill last row
    i = m - 1;
    for(j = n - 2; j >= 0; j--) {
        output[i][j] = input[i][j] + output[i][j+1];
    }

    // Fill remaining cells
    for(int i = m - 2; i >= 0; i--) {
        for(int j = n - 2;  j >= 0; j--) {
            int x = output[i+1][j];
            int y = output[i][j+1];
            int z = output[i+1][j+1];
            output[i][j] = input[i][j] + min(x, min(y, z));
        }
    }

    // Return the ans
    return output[0][0];
}

// Memoization
int minCostpath(int **input, int m, int n, int **output, int i = 0, int j = 0) {
    if(i >= m || j >= n) {
        return INT_MAX;
    }

    if(i == m - 1 && j == n - 1) {
        return input[i][j];
    }

    // Check if ans already exists
    if(output[i][j] != -1) {
        return output[i][j];
    }

    // Calculate ans
    int x = minCostpath(input, m, n, output, i + 1, j);
    int y = minCostpath(input, m, n, output, i, j + 1);
    int z = minCostpath(input, m, n, output, i + 1, j + 1);

    // Save ans
    output[i][j] =  min(x, min(y, z)) + input[i][j];
    
    return output[i][j];
}

int minCostpath(int **input, int m, int n) {
    int **output = new int*[m];
    for(int i = 0; i < m; i++) {
        output[i] = new int[n];
        for(int j = 0; j < n; j++) {
            output[i][j] = -1;
        }
    }

    return minCostpath(intput, m, n, output);
    
}



























int countBTs_DP(int h) {
    int *output = new int[h + 1];

    int mod = 1000000000 + 7;
    output[0] = 1;
    output[1] = 1;
    for(int i = 2; i <= h; i++) {
        //output[i] = output[i-1] * output[i-1] + 2 * output[i-1] * ourput[i-2];
    
        int x = output[i-1];
        int y = output[i - 2];

        int a = (1l * x * x) % mod;
        int b = (1l * 2 * x * y) % mod;
        output[i] = (a + b) % mod;
    }

    return output[h];
}



int countBTs(int h) {
    // Base case
    if(h <= 1) {
        return 1;
    }

    int x = countBTs(h - 1);
    int y = countBTs(h - 2);

    int ans = x*x + 2*x*y;

    return ans;
}

int main() {

}
