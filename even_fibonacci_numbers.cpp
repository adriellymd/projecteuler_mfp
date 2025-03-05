#include <bits/stdc++.h>
using namespace std;
 
// fibonacci(n) = fibonacci(n-1) + fibonacci(n-2) 
// fibonacci(0) = 0
// fibonacci(1) = 1 
// fibonacci(2) = fibonacci(1) + fibonacci(0)
// fibonacci(2) = 1 + 0 = 1

int main(){

    int n = 4e6;
    int ans = 0;
    int previous = 1, current = 2, next;

    while(current <= n){
        if(current%2 == 0) 
            ans+=current;

        next = previous + current;
        previous = current;
        current = next;
    }

    cout << ans << endl;

    return 0;    
}