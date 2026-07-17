#include<iostream>

struct node{
    int d;
    struct node *next;

};
struct lllist{
    node *head;
    lllist(){
    head=nullptr;
    }

    void insertathead(int d){
    node *nnode=new node;
    nnode->d=d;
    nnode->next=nullptr;
    if(head==nullptr){
        head=nnode;
        return;
    }
    nnode->next=head;
    head=nnode;

    }
    void lprint(){
        node *temp=head;
        if(head==nullptr){
            std::cout<<"Empty List";
            return;
        }
        while(temp!=nullptr){
            std::cout<<temp->d<<" ";
            temp=temp->next;
        }
    }




};




int main(){
    lllist s;
int a=1;
while(a!=0){
    std::cout<<"enter a new value or zero to exit :";
    std::cin>>a;
    if(a!=0){
        s.insertathead(a);
    }
    }
    s.lprint();

}
