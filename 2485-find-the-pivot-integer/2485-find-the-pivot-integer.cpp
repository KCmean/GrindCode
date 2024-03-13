#include <cmath>

class Solution {
public:
    int pivotInteger(int n) {
        if(n == 1 ){
            return 1;
        }

        int sum = (n+1)*n/2;

        int pivot = (int) sqrt(sum);

        return pivot * pivot == sum ? pivot : -1;
        
    }
};