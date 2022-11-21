#include<bits/stdc++.h>
using namespace std;

int main()
{
  int money , cost_per_ch , wrapper , wrapper_per_ch, chocolatesM , chocolatesW, total_chocolates ;

  cout<<"What is the cost per chocolate:\n";
  cin>>cost_per_ch;

  cout<<"Amount of money you have:\n";
  cin>>money;

  chocolatesM = floor(money / cost_per_ch);

  cout<<"Chocolates you can buy:\n"<<chocolatesM<<endl;


  wrapper = chocolatesM;

  cout<<"Wrappers you need per chocolate:\n";
  cin>>wrapper_per_ch;

  chocolatesW = chocolatesM / wrapper_per_ch;

  cout<<"Chocolates you can get for "<<wrapper_per_ch<<" wrapper(s) are "<<chocolatesW<<endl;
  total_chocolates = chocolatesM + chocolatesW;

  cout<<"You'll be getting "<< total_chocolates <<" chocolates!"<<endl;
  return 0;

}
