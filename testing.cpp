#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>

using namespace std;



void generateCombinations() {
    ofstream arch("note.txt", ios::out);
    vector<string> syllables2 = {"aZ", "iV", "EP"}, s2, s3;
    vector<string> syllables3 = {"PdK", "cj9", "JFy"};
    s2 = syllables2;
    
    vector<vector<string>> results;

    // Generar todas las permutaciones posibles de los sílabos de 3 caracteres
    do {
        do {
            vector<string> combination = {syllables2[0], syllables3[0], syllables2[1], syllables3[1], syllables2[2], syllables3[2]};
            arch << "CC";
            int i = 0;
            for(auto it:combination){
                if(i%2==0)cout<<'-';
                arch<<it;
                i++;
            }
            arch<<endl;
        } while (next_permutation(syllables2.begin(), syllables2.end()));
        syllables2 = s2;
    } while (next_permutation(syllables3.begin(), syllables3.end()));

    
}

int main() {
    generateCombinations();
    return 0;
}