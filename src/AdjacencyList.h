#pragma once

#include <string>
#include <map>

using namespace std;

class AdjacencyList {
    private:
    //Think about what member variables you need to initialize
        static map<int, string> item;
        static map<string, AdjacencyList> data;
        string website;
        int inDegrees;
        int outDegrees;
        float powerRank;
        AdjacencyList(string page){};

    public:
    //Think about what helper functions you will need in the algorithm
    AdjacencyList() = default;
    ~AdjacencyList() = default;
    string PageRank(int n);

    static void addItem(string& str){

        for(auto& iter : item){
            if(str == iter.second) {
                return;
            }
        }
        int id;
        if(item.empty())
            id = 0;
        else
            id = item.rbegin()->first + 1;

        item.insert({id, str});

        //AdjacencyList* list = new AdjacencyList(str);
    };

    void addOut(string& str){

    }
    void addIn(string& str){

    }


};

// This class and method are optional.
