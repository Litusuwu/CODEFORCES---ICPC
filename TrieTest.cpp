#include <bits/stdc++.h>
using namespace std;

class TrieNode{

public:
    bool finPalabra;
    TrieNode *child[26];
    
    TrieNode(){
        finPalabra = false;
        for(int i = 0 ; i < 26 ; i ++){
            child[i] = nullptr;
        }    
    }    
};
class Trie{

private:
    TrieNode *raiz; 
public:
    Trie(){
        raiz = new TrieNode();
    }
    void insertar(string &s){
        TrieNode *p;
        p = raiz;
        for(auto c : s){
            if(p->child[c-'a'] == nullptr){
                p->child[c-'a'] = new TrieNode();
            }
            p = p->child[c - 'a'];
        }
        p->finPalabra = true;
    }
    bool search(string &s){
        TrieNode *p;
        p = raiz;
        for(auto c : s){
            if(p->child[c-'a'] == nullptr){
                return false;
            }
            p = p->child[c - 'a'];
        }
        return p->finPalabra;
    }
};


int main(){
    

    return 0;
}

