#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct TrieNodo{
    TrieNodo *child[26]{};

    bool wordEnd;

    TrieNodo(){
        wordEnd = false;
        for(int i = 0 ; i < 26 ; i++){
            child[i] = nullptr;
        }
    }
};
void insertKey(TrieNodo *root, const string &k){
    TrieNodo * curr = root;

    for(char c : k){
        if(curr->child[c - 'a'] == nullptr){
            TrieNodo *nuevo = new TrieNodo();
            curr->child[c - 'a'] = nuevo;
        }
        curr = curr->child[c - 'a'];
    }
    curr->wordEnd = true;
}

bool search(TrieNodo *root, const string &k){
    TrieNodo *curr = root;
    for(auto c : k){
        if(curr[c - 'k'] == nullptr){
            return false;
        }
        curr = curr->child[c - 'a'];
    }
    return curr->wordEnd;
}


int main(){
    TrieNodo *arbol = new TrieNodo();
    vector<string>arr{"vinnie", "vinchenzo", "vini", "vinieso", "viniwinki"};
    for(const string &s : arr){
        insertKey(arbol, s);
    }
    vector<string>searchKeys{"vin", "vinc", "vim", "vic", "vinie", "vinn"};
    for(string &s : searchKeys){
        cout << "Key : "<< s << endl;
        if(search(arbol, s)){
            cout << "Present" << endl;
        }
        else{
            cout << "Not Present" << endl;
        }
    }
    return 0;
}