#include<iostream>



int main(){
    int a[]={3,6,8,2,5,1,7,4,9};
    int k=sizeof(a)/sizeof(a[0]);
   int v;
   int j;
   for(int i=1;i<k;i++){
    v=a[i];
    j=i-1;
    while(j>=0&&a[j]>v){
        a[j+1]=a[j];
        j--;
    }
    a[j+1]=v;
   }
    for(int i=0;i<k;i++){
        printf("%d ",a[i]);
    }

}
