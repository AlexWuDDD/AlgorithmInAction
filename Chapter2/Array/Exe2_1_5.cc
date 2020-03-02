#ifndef EXE2_1_5_H
#define EXE2_2_5_H

#include <cmath>
#include <vector>
using std::vector;

/*
Median of Two Sorted Arrays
There are two sorted arrays A and B of size m and n respectively. Find the midian of the two sorted
arrays. The overall run time complexity should be O(log(m+n))
*/

class Solution
{
public:
    double findMedianSortedArrays(const vector<int>& A, const vector<int>& B)
    {
        const int m = A.size();
        const int n = B.size();
        int total = m + n;
        if(total & 0x1){
            return find_kth(A.begin(), m, B.begin(), n, total/2+1);
        }
        else{
            return (find_kth(A.begin(), m, B.begin(), n, total/2) + 
                    find_kth(A.begin(), m, B.begin(), n , total/2+1))/2.0;
        }

    }

private:
    static int find_kth(std::vector<int>::const_iterator A, int m, 
        std::vector<int>::const_iterator B, int n, int k){
            //always assume that m is equal or smaller than n
            if(m > n) return find_kth(B, n, A, m, k);
            if(m == 0) return (*(B+k-1));
            if(k == 1) return std::min(*A, *B);

            //divide k into two parts
            int ia = std::min(k/2, m), ib = k - ia;
            if(*(A + ia - 1) < * (B + ib -1)){
                return find_kth(A+ia, m-ia, B, n, k - ia);
            }
            else if(*(A+ia-1) > * (B+ ib - 1)){
                return find_kth(A, m, B+ib, n-ib, k - ib);
            }
            else{
                return A[ia-1];
            }

        }    
};





#endif