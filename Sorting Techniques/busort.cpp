#include<iostream>


int main(){
    int k;
    int a[]={6,4,8,3,9,2,5,1,7};
    int v=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<v-1;i++){
        for(int j=0;j<v-i;j++){
            if(a[j]>a[j+1]){
                k=a[j];
                a[j]=a[j+1];
                a[j+1]=k;
            }
        }
    }
    for(int i=0;i<v;i++){
        std::cout<<a[i]<<" ";
    }

}
