#include<iostream>

int rec(int n);

int main(){

  int n=0;
  std::cout<<"insert index: ";
  std::cin>>n;

  int res = rec(n);
  std::cout<<res<<std::endl;
}

int rec (int n){
  if (n==0 || n==1) return 1;
  return rec(n-1) + rec (n-2);
}
