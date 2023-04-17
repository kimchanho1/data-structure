#pragma once
#include <iostream>
#include<string>
#include<vector>


using namespace std;

class Music {
private:
	string title;
	string artist;
	string album;
	int year;

public:
	Music(string title, string artist, string album, int year) {
		this->title = title;
		this->artist = artist;
		this->album = album;
		this->year = year;
	}
	string getTitle() {
		return title;
	}
	string getArtist() {
		return artist;
	}
	string getAlbum() {
		return album;
	}
	int getYear() {
		return year;
	}
};

class MusicStreamingService {
private:
	string serviceName;
	vector<Music> musicList;

public:
	void addMusic(string title, string artist, string album, int year) {
		Music newMusic(title, artist, album, year);
		musicList.push_back(newMusic); // newmusic 리스트에다가 하나하나 pushback으로 넣어준것
		cout << title << "by" << artist << "added to" << serviceName << endl; // 제대로 추가되었는지 확인용
	}
	// title로 musiclist에서 검색하여 반환
	Music* searchByTitle(string title) { // *가있어야 바로 반환을 해줄수있다.
		for (int i = 0; i < musicList.size(); i++) {
			if (musicList[i].getTitle() == title) {
				return &musicList[i];  // &는 어떤 변수의 주솟값을 나타낸다.
			}
		}
		return NULL; // 만약 위의 if문이 성립하지 않으면 아무것도 아닌것을 반환해야 하기 때문이다.


	}

	// artist로 musiList에서 검색하여 반환
	vector<Music*> searchByArtist(string artist) {  // 
		vector<Music*> result;
		for (int i = 0; i < musicList.size(); i++) {
			if (musicList[i].getArtist() == artist) {
				return.push_back(&musicList[i]);  //
			}
		}
		return result;
	}

};