/*
2.4.
 Extend your Playlist class to include a member function addSong(songTitle) that adds the song 
 title to an array property called songs. Demonstrate by adding three song titles and
  displaying the updated songs list.<br><br><em><strong>Hint:</strong> Initialize songs
   as an empty array inside the constructor.</em>
*/

#include <iostream>
#include <vector>
#include<string>
using namespace std;

class Playlist {
private:
     vector<string> songs;

public:
    Playlist() {
        songs = {};
    } void addSong(string songTitle) {
        songs.push_back(songTitle);
    }
void displaySongs() {
        cout << "playlist songs:"<<endl;
        for (int i=0;i<songs.size();i++) {
            cout<<i+1<<"."<<songs[i]<<endl;
        }
    }
};
int main() {
    Playlist myPlaylist;
   myPlaylist.addSong("shape of you");
    myPlaylist.addSong("believer");
    myPlaylist.addSong("perfect");
    myPlaylist.displaySongs();
    return 0;
}
