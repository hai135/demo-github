#include<iostream>
#include <algorithm>
using namespace std;

int a[100001], b[100001];
int main(){
    int n,count=1;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a,a+n);
    for (int i = 1; i < n; i++)
      if(a[i]==a[i-1])count++;
      else{
        cout<<a[i-1] <<" - "<<count <<"; ";
        count=1;
      }
      cout<<a[n-1]<<" - "<<count<<';';
}

