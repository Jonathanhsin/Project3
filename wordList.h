//
// Project by Jack Fenton
// Northeastern University Department of Computer and Electrical Engineering
// EECE2560 Introduction to Engineering Algorithms
// Project begun on 2020-05-27.
//

#ifndef PROJECT3_WORDLIST_H
#define PROJECT3_WORDLIST_H

//(a) stores the word list in a vector
//(b) a function to read the words from the wordlist file
//(c) an overloaded output operator to print the word list
//(d) functions that sort the words using
//											1) insertionSort,
//											2) quickSort, and
//											3) mergeSort
//(e) a function to handle word lookups using binary search
//

class wordList
{
private:
vector<string> words;

public:
vector<string> fileread(string filename) {
		fstream file;
		string word;
		file.open(filename.c_str());
		while (file >> word) {
			words.push_back(word);
		}
		return words;
	}

	void fileprint() {
		for (int i = 0; i < words.size(); i++) {
			cout << words[i] << endl;
		}
	}

};


#endif //PROJECT3_WORDLIST_H
