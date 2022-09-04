#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main() {
  string word1;
  string word2;
  string word3;

  cout << "Type three words with space or newline between" << endl;
  cin >> word1;
  cin >> word2;
  cin >> word3;

  string sentence = word1 + " " + word2 + " " + word3 + ".";
  cout << sentence << endl;

  cout << "word1 length: " << word1.length() << endl;
  cout << "word2 length: " << word2.length() << endl;
  cout << "word3 length: " << word3.length() << endl;
  cout << "sentence length: " << sentence.length() << endl;

  string sentence2 = sentence;

  if (sentence2.length() > 11) {
    sentence2[9] = 'x';
    sentence2[10] = 'x';
    sentence2[11] = 'x';
    cout << "sentence2: " << sentence2 << endl;
  }

  if (sentence.length() > 4) {
    string sentence_start = sentence.substr(0, 5);
    cout << "sentence_start: " << sentence_start << endl;
  }

  if (sentence.contains("hello")) {
    cout << "contains hello" << endl;
  } else {
    cout << "does not contain hello" << endl;
  }

  int occurrences = 0;
  string::size_type pos = 0;
  string target = "er";
  while ((pos = sentence.find(target, pos)) != string::npos) {
    ++occurrences;
    pos += target.length();
  }
  cout << "er appeared " << occurrences << " times in the sentence" << endl;
}
