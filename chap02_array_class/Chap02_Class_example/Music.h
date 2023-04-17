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
		musicList.push_back(newMusic); // newmusic ����Ʈ���ٰ� �ϳ��ϳ� pushback���� �־��ذ�
		cout << title << "by" << artist << "added to" << serviceName << endl; // ����� �߰��Ǿ����� Ȯ�ο�
	}
	// title�� musiclist���� �˻��Ͽ� ��ȯ
	Music* searchByTitle(string title) { // *���־�� �ٷ� ��ȯ�� ���ټ��ִ�.
		for (int i = 0; i < musicList.size(); i++) {
			if (musicList[i].getTitle() == title) {
				return &musicList[i];  // &�� � ������ �ּڰ��� ��Ÿ����.
			}
		}
		return NULL; // ���� ���� if���� �������� ������ �ƹ��͵� �ƴѰ��� ��ȯ�ؾ� �ϱ� �����̴�.


	}

	// artist�� musiList���� �˻��Ͽ� ��ȯ
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