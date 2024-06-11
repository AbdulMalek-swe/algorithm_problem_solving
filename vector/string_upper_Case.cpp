#include <bits/stdc++.h>
using namespace std;
void capitalizeFirstLetter(std::string &str) {
    if (!str.empty()) {
        str[0] = std::toupper(str[0]);
    }
}
int main() {
    vector<string>str = {"abdulkalam","rafik vai"};
    for(string v:str){
        capitalizeFirstLetter(v);
        cout<<v<<endl;
    }
    return 0;
}