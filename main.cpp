#include<iostream>

using namespace std;

 int SerchTarget( int num[],int target,int n)
 {
     int middle,left = 0;
     int right = n - 1;
     while(left <= right)
     {
         middle = left + (right - left)/2;
         if(num[middle] > target)
         {
             right = middle - 1;
         }
         else if(num[middle] < target)
         {
             left = middle + 1;
         }
         else
         {
             num[middle] == target;
             return middle;
         }
     }
     return right + 1;
 }

 int main()
 {
     int a[5],b,i,n = 6;
     int right;
     cout << "The vector is:" << endl;
     for(i = 0;i < 6;i++)
     {
       cin >> a[i];
     }
     cout << "The  target value is:" << endl;
     cin >> b;
     right = SerchTarget(a,b,n);
     cout  << right << endl;
 }
