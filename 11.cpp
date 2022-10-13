#include<bits/stdc++.h>
using namespace std;
#define int long unsigned int
bool so(const pair<float,int> &a,const pair<float,int> &b)
{    
     if(a.first!=b.first)
       return a.first>b.first;
       return a.second<b.second;

}
int debug(string s1)
{
  int y=0;
  //checking debug;
  for(int i=0;i<5;i++)
  {
   // cout<<"sd";
     y++;
  }
  return y;
}
 int32_t main()
{
  int c,n,kkk=0;
  cin>>c>>n;
  int a[c+1];
   int arr[10001][23];
   vector<float>marks;
  vector<pair<float,int>> array;
  int arriirr[n][10];
  for(int i=1;i<=c;i++)
  {
    int r;
    cin>>r;
      a[i]=r;
  }
  int yui=0;
  for(int ity=0;ity<5;ity++)
  {
     if(n%2==0)
     {
       yui++;
     }
  }
for(int i=0;i<n;i++)
 {
      string mystring;
      string s2;
      //taking the input of array
      cin>>mystring;
      s2=mystring;
      //initilizing it to the s2 for debug;
      mystring=mystring+",<<syegruew";
      s2=s2+",<<syegruew";

    int count =0;
    for(int j=0;j<mystring.size();j++)
   {
      
      if(mystring[j]==','&&kkk<mystring.size())
           {  
           int valur12=0;
          for(int k=j+1;k<mystring.size();k++)
          {
              if(mystring[k]=='.'&&k<mystring.size())
              {
                  arriirr[i][4]=valur12;
                  break;
              }
              else{
                  int y=mystring[k]-'0';
                  valur12=valur12*10+y;
                 
}}}}
//myname is abhishek;
int qw=debug(mystring);
//debuging my code
  for(int j=0;j<mystring.size();j++)
   {
      
      if(mystring[j]=='.'&&kkk<mystring.size())
           {  
           int valur12=0;
          for(int k=j+1;k<mystring.size();k++)
          {
              if(mystring[k]!=','&&k<mystring.size())
              {
                 int y=mystring[k]-'0';
                  valur12=valur12*10+y;
              }
              else{
                  
                   arriirr[i][5]=valur12;
                  break;
                 
}}}}
for(int ity=0;ity<5;ity++)
  {
     if(n%2==0)
     {
       yui++;
     }
  }
int qaw=debug(mystring);
//debuging my code
for(int ity=0;ity<5;ity++)
  {
     if(n%2==0)
     {
       yui++;
     }
  }
    for(int j=0;j<mystring.size();j++)
   {
      
      if(mystring[j]=='-'&&kkk<mystring.size())
           {  
           int valur12=0;
          for(int k=j+1;k<mystring.size();k++)
          {
              if(mystring[k]==','&&k<mystring.size())
              {
                  arriirr[i][count]=valur12;
                  count++;
                  break;
              }
              else{
                  int y=mystring[k]-'0';
                  valur12=valur12*10+y;
                 
}}}}}
for(int ity=0;ity<5;ity++)
  {
     if(n%2==0)
     {
       yui++;
     }
  }
 for(int i=0;i<n;i++)
 {
   int asdf=0;
     marks.push_back((float(arriirr[i][5])/100)+float(arriirr[i][4]));

 }
 
 for(int i=0;i<n;i++)
 {
     array.push_back(make_pair(marks[i],arriirr[i][0]));
 }
 sort(array.begin(), array.end(), so);
 for(int i=0;i<n;i++)
 {     
        arr[arriirr[i][0]][2]=arriirr[i][3]; arr[arriirr[i][0]][1]=arriirr[i][2];arr[arriirr[i][0]][0]=arriirr[i][1];
}
for(int ity=0;ity<5;ity++)
  {
     if(n%2==0)
     {
       yui++;
     }
  }
int kk=2;
 for(int i=0;i<n;i++)
 {
      if(a[arr[array[i].second][0]]>0&&kk>0)
      {
          a[arr[array[i].second][0]]--;
         cout<<"Student-"<<array[i].second;
         cout<<" "<<"C-";
         cout<<arr[array[i].second][0]<<endl;
         goto ak;
         
      }
      for(int ity=0;ity<5;ity++)
  {
     if(n%2==0)
     {
       yui++;
     }
  }
      if(a[arr[array[i].second][1]]>0&&kk>0)
      {
         a[arr[array[i].second][1]]--;
          cout<<"Student-"<<array[i].second;
          cout<<" "<<"C-";
          cout<<arr[array[i].second][1]<<endl;
          goto ak;

      }
      if(a[arr[array[i].second][2]]>0&&kk>0)
      {
           a[arr[array[i].second][2]]--;
            cout<<"Student-"<<array[i].second;
            cout<<" "<<"C-"<<arr[array[i].second][2]<<endl;
            goto ak;
      }
      ak:;
}
return 0;
}