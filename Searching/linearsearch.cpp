#include<iostream>
 int main(){
    int a[20]={0};
    int v;
    int j;
    int f;
    std::cout<<"enter number of elements :";
    std::cin>>v;
    for(int i=0;i<v;i++){
        std::cout<<"enter data :";
        std::cin>>j;
        a[i]=j;
    }
    std::cout<<"enter the element to be searched :";
    std::cin>> f;
for(int i=0;i<(sizeof(a)/sizeof(a[0]));i++){
    if(a[i]==f){
        std::cout<<"the element found at :"<<i<<" index"<<std::endl;
        return 0;
    }
   
}

std::cout<<"element not found";

 }