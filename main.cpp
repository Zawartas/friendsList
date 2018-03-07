#include <iostream>
#include <list>
#include <string>
#include <map>

using namespace std;

class FriendList{
public:
    map<string, list<string> > friends;
    list<string> getFriendList(string name){
        return friends.at(name);
    }
    void addFriendOf(string name, string friendname){
        friends[name].push_back(friendname);
        friends[friendname].push_back(name);
    }
};

int main (){

FriendList lista;

lista.friends["Janek"];
lista.friends["Stasiek"];
lista.friends["Ala"];
lista.friends["Monika"];
lista.friends["Lonely_guy"];

lista.addFriendOf("Janek", "Stasiek");
lista.addFriendOf("Janek", "Ala");
lista.addFriendOf("Ala", "Monika");

for (auto &it: lista.getFriendList("Ala"))
    cout << it << " ";

    cout << endl;
for (auto &it: lista.getFriendList("Lonely_guy"))
    cout << it << " ";

    cout << endl;
for (auto &it: lista.getFriendList("Johnny"))
    cout << it << " ";

return 0;
}
