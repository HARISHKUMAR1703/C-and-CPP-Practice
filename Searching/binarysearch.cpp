#include<iostream>

int main(){
     int a[20]={0};
    int v;
    int f;
    std::cout<<"enter number of elements :";
    std::cin>>v;
    for(int i=0;i<v;i++){
        std::cout<<"enter sorted data :";
        std::cin>>a[i];
    }
    std::cout<<"enter the element to be searched :";
    std::cin>> f;
    int l,h;
    l=0;h=v-1;
    int m;
while(l<=h){
     m=(l+h)/2;
    if(a[m]==f){
        std::cout<<"element found at index : "<<m;
        return 0;
    }
    if(a[m]>f){
        h=m-1;
    }
    else{
        l=m+1;
    }
}
std::cout<<"element not found";

}