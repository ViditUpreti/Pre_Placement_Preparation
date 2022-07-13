/******************************************************************************
https://learn.onlinegdb.com/
Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int a1 =0 ,a2=0;
        while(a1<m){
            if(nums1[a1]>nums2[a2]){
                int t=nums1[a1];
                nums1[a1]=nums2[a2];
                nums2[a2]=t;
                while(a2<n && nums2[a2]>nums2[a2+1]){
                    nums2[a2]=nums2[a2+1];
                    a2++;
                }
                nums2[a2]=t;
                a2=0;
            }
            a1++; 
        }
    }
int main()
{
    vector<int>a(5);
    vector<int >b(4);
    for(int i =0;i<5;i++){
        cin>>a[i];
    }
    for(int i =0;i<4;i++){
        cin>>b[i];
    }
    merge(a,5,b,4);
    for(int i =0;i<5;i++){
        cout<<a[i]<<" ";
    }
    for(int i =0;i<4;i++){
        cout<<b[i]<<" ";
    }
}
