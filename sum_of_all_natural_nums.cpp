#include <iostream>
using namespace std; 
int calSum(int, int);

int main()
{
    int index = 0;
    int x = 4; // 1 < x < n , constraints : 0 <= n <= 10^7
    cout << "sum: " << calSum(x, index) << endl;
    return 0;
}

int calSum(int x, int i) {
    static int sum;
    if (i <= 1) i = 1; // 0 case 
    int n = i;
    sum = (n * (n + 1)) / 2;
    if (i >= x) 
        return sum;
    i++;
    calSum(x, i);
    return sum; 
}