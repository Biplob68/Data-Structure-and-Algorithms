#include<bits/stdc++.h>

using namespace std;

int sum_digit(int n){

    if(n<10) return n;
   
    return (n%10) + sum_digit(n/10);

}

int main()
{

    int n;
    cin >> n;
    cout << "Sum of the digit " << ": " << sum_digit(n) << endl;
}
