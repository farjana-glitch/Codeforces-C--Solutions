#include<iostream>
using namespace std;
int main(){
long long n,m,a;
cin>>n>>m>>a;
long long stones_n =(n+a-1)/a;
long long stones_m =(m+a-1)/a;
long long total_stones = stones_n * stones_m;
cout<< total_stones<< endl;
return 0;
}
