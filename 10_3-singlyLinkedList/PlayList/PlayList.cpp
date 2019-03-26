#include <iostream>
#include <string>
#include "PlayList.h"

using namespace std;

PlayList::PlayList(){
    pTail = NULL;
    pList = NULL;
    size = 0;

}

PlayList::~PlayList(){

}

void PlayList::add(const SongEntry *song){
    SongEntry *p = new SongEntry(song->artist, song->title);
    size++;
    if (pList == NULL){
        pList = p;
        pTail = p;
    }else{
        pTail->next = p; // tail is pointed to the new song
        pTail = p; // new song is tail now
    }

}

PlayList::PlayList(const PlayList &owner){
    cout << "Copy constructor Finished \n";
}

void PlayList::info(){
    SongEntry *q = pList;
    while(q != NULL ){
        cout << "Artist: " << q->artist << "   Title:" << q->title << "\n";
        q = q->next;
    }
}

PlayList & PlayList::operator=(const PlayList &owner){
    Clear(); // we have to remove all old items before assigning to new values
    AdAll(owner);
    cout << "operator = is finished \n";
    return *this;
}



void PlayList::AdAll(const PlayList &owner){
    SongEntry *q = owner.pList;
    while(q != NULL ){
        add(q);
        q = q->next;
    }
}


void PlayList::Clear(){
    SongEntry *q = pList;
    SongEntry *pre = pList;
    while(q != NULL){
        pre = q;
        q = q->next;
        delete pre;
    }
}

