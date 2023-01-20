// Leetcode Problem:  204. Count Primes
Link: https://leetcode.com/problems/count-primes/?fbclid=IwAR3mQBHRI_eNSm2dW4aTQYDw4LtjIkNYZEqqK9vQyvfSx9rAFGu2th5c2x4

Solution  :

int countPrimes(int n) {
        int count=0;
     vector<bool> prime(n+1,1);
     
     prime[0]=prime[1]=false;
     for(int i = 2; i < n; i++)
     {
        if (prime[i] == true){count++;

            for(int j = 2*i;j<=n;j +=i){
                prime[j]=false;
            }
         }
       
     }
     return count;
    }
