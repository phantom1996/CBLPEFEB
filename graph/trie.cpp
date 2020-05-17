#include <iostream>
#include <map>

using namespace std;

class node{
public:
    char data;
    map<char,node*> h;

    bool is_Terminal;

    node(char c){
        data=c;
        is_Terminal=false;
    }
};

class Trie{

    node* root;

public:

    Trie(){
        root=new node('\0');
    }

    void AddWord(char *word){
        node* temp=root;
        for(int i=0;word[i]!='\0';i++){
            char ch=word[i];

            if(temp->h.count(ch)==0){
                //present nahi h
                node* child=new node(ch);
                temp->h[ch]=child;

                temp=child;
            }
            else{
                temp=temp->h[ch];
            }

        }
        temp->is_Terminal=true;

    }



    bool search(char *word){
        node* temp=root;

        for(int i=0;word[i]!='\0';i++){
            char ch=word[i];
            if(temp->h.count(ch)==1){
                temp=temp->h[ch];
            }
            else{
                return false;
            }
        }
        return temp->is_Terminal;
    }
};
int main()
{
    Trie T;
    T.AddWord("abc");
    T.AddWord("not");
    T.AddWord("nott");

    if(T.search("no")){
        cout<<"Word Found";
    }
    else{
        cout<<"Not found";
    }


    return 0;
}
