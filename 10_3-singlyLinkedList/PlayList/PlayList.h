#include <iostream>
#include <string>

using namespace std;

struct SongEntry{
    string artist;
    string title;
    SongEntry *next;
    SongEntry(string atrist, string title){
        this->artist = artist;
        this->title = title;
        this->next = NULL;
    }
};


class PlayList{
    public: 
        PlayList();
        ~PlayList();
        void add(const SongEntry *song);
        void AdAll(const PlayList &owner);
        PlayList(const PlayList & owner);
        PlayList & operator=(const PlayList &owner);
        void info();
        void Clear();
    private:
        SongEntry *pList;
        int size;
        SongEntry *pTail;

}; 

