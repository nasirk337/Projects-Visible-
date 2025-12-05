#ifndef BIBLEPROJECT_H
#define BIBLEPROJECT_H

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>
#include <vector>
#include <ctime>
#include <chrono>
#include <thread>
#include "curl/curl.h"
#include <stdio.h>

using namespace std;

// class declarations.
class Bible;
class Christian;

// GLOBAL CONSTANTS.
const int GODS_NUMBER = 7;

class Bible{

   public:

   friend class Christian;

   Bible();
   Bible(string version, int bibAge);
   Bible(const Bible& rhs);
   Bible& operator=(Bible& rhs);
   ~Bible();
   string GetVersion(); 
   void SetVersion(string name);
   bool checkVersion(string name);
   int GetAge(); 
   void SetAge(int age);

   private:
   string bibleVersion;
   int bibleAge;
};

class Christian{

   public:
   
   Christian();
   Christian(string name, string favBook);
   ~Christian();
   Christian(Christian& rhs);
   Christian& operator=(const Christian& rhs);
   void increaseVerses();
   void increaseQuizzes();
   string GetName();
   void SetName(string name);
   string GetFavBook();
   void SetFavBook(string name);
   void showVersions();
   void soulWinningScript();
   void bibleQuiz(int numQuestions);
   void addVerse(string book, string chapter, string verse);
   void randomizeBookVerse();
   void displayUser();
   

   private:

   vector<string> favorVerses;
   vector<double> quizScores;
   string favoriteBook;
   Bible * BibleChoice;
   string m_name;

};

#endif
