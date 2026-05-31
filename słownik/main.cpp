#include <iostream>
#include <list>
#include <string>
#include <vector>
#include <map>

// Implement createMap. It should take a vector and list and
// return a map of merge them as keys from the vector and values from the list

std::map <size_t, std::string> createMap(std::vector<int> vec, std::list<std::string> lista){
    std::map<size_t, std::string> mapa;
    int n;

    if(vec.size() > lista.size()){
        n = vec.size();
    } else if(lista.size() > vec.size()){
        n = lista.size();
    } else{
        n = vec.size();
    }

    auto it = lista.begin();

    for(int i = 1; i <= n; i++){
        if(it == lista.end()){
            return mapa;
        }
        if(vec[i-1] != i){
            vec[i-1] = i;
        }
        mapa[vec[i-1]] = *it;
        ++it;
    }

    return mapa;
}

int main() {
    std::vector<int> vec{1, 2, 3, 4, 5};
    std::list<std::string> list{"One", "Two", "Three", "Four", "Five"};
    auto map = createMap(vec, list);

    for (const auto& pair : map)
        std::cout << pair.first << " | " << pair.second << '\n';

    return 0;
}
