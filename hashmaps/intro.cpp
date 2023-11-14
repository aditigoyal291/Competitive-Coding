// intro to hashmaps

#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

int main()
{
    // creation
    unordered_map<string, int> m;
    // insertion
    pair<string, int> p = make_pair("adiit", 3);
    m.insert(p);
    pair<string, int> pair2("love", 2);
    m.insert(pair2);
    m["mera"] = 1;

    // search
    cout << m["mera"] << endl;
    cout << m.at("adiit") << endl;
    cout << m.at("hello") << endl;

    m.erase("adiit");

    return 0;
}