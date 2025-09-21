#include <bits/stdc++.h>
using namespace std;

class MovieRentingSystem {
    // store -> movie -> price
    unordered_map<int, unordered_map<int, int>> price;

    // available[movie] = set of {price, store}
    unordered_map<int, set<pair<int,int>>> available;

    // rented = set of {price, store, movie}
    set<tuple<int,int,int>> rented;

public:
    MovieRentingSystem(int n, vector<vector<int>>& entries) {
        for (auto &e : entries) {
            int store = e[0], movie = e[1], p = e[2];
            price[store][movie] = p;
            available[movie].insert({p, store});
        }
    }

    vector<int> search(int movie) {
        vector<int> res;
        auto it = available.find(movie);
        if (it == available.end()) return res;

        int cnt = 0;
        for (auto [p, s] : it->second) {
            res.push_back(s);
            if (++cnt == 5) break;
        }
        return res;
    }

    void rent(int store, int movie) {
        int p = price[store][movie];
        available[movie].erase({p, store});
        rented.insert({p, store, movie});
    }

    void drop(int store, int movie) {
        int p = price[store][movie];
        rented.erase({p, store, movie});
        available[movie].insert({p, store});
    }

    vector<vector<int>> report() {
        vector<vector<int>> res;
        int cnt = 0;
        for (auto [p, s, m] : rented) {
            res.push_back({s, m});
            if (++cnt == 5) break;
        }
        return res;
    }
};
