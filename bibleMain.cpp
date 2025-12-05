#include "bibleProject.h"

void bibleProgramRun();
void randomizedDraw();
void randBibleDraw();
void randCrownDraw();
void randSunMoonDraw();
void randMessage1();
void randMessage2();
void randMessage3();
void randMessage4();
void myTestimony();

int main(){

   srand(time(0));

   time_t present_time = time(nullptr);

   bool programEnd = false;
   bibleProgramRun();

   cout << "Present Time: " << ctime(&present_time) << endl;

   string storeName = "";
   cout << "Type in a name to begin please and thank you." << endl;
   cin >> storeName;

   this_thread::sleep_for(chrono::seconds(2));
   cout << "Pleasure to meet you, " << storeName << " God Bless you and your family." << endl;

   Christian userGame(storeName, "");

   do{
      cout << "These are your options to choose from..." << endl;

      this_thread::sleep_for(chrono::seconds(1));
      cout << "1. Show the versions of The Bible to choose from (API)." << endl;

      this_thread::sleep_for(chrono::seconds(1));
      cout << "2. Read my testimony of my certainty of God's existence and love for both of us." << endl;

      this_thread::sleep_for(chrono::seconds(1));
      cout << "3. A script that will change your life." << endl;

      this_thread::sleep_for(chrono::seconds(1));
      cout << "4. Play a Bible Quiz using an API with as many questions as you want." << endl;

      this_thread::sleep_for(chrono::seconds(1));
      cout << "5. Add a favorite verse to storage with a special API call." << endl;

      this_thread::sleep_for(chrono::seconds(1));
      cout << "6. Set a new favorite book of The Bible." << endl;

      this_thread::sleep_for(chrono::seconds(1));
      cout << "7. Display your Statistics." << endl;

      this_thread::sleep_for(chrono::seconds(1));
      cout << "8. Read a randomized Bible verse through an API call." << endl;
      
      cout << "9. To exit the project, with a prayer and a blessing for you." << endl;
      cout << endl;

      cout << "What is your choice for this program?" << endl;
      cout << "Present Time: " << ctime(&present_time) << endl;

      int numChoice = 0;
      cin >> numChoice;

      switch(numChoice){

         case 1:
         
         userGame.showVersions();
         break;

         case 2:
         
         myTestimony();
         break;

         case 3:
         
         userGame.soulWinningScript();
         break;

         case 4:
         
         //userGame.bibleQuiz();
         break;

         case 5:
         
         //userGame.addVerse();
         break;

         case 6:
         
         // Likely display the previous favorite book but accept a new one.
         //userGame.SetFavBook(name);
         break;

         case 7:
         
         userGame.displayUser();
         break;

         case 8:

         userGame.randomizeBookVerse();
         break;

         case 9:

         programEnd = true;
         cout << "Thank you for playing, " 
            << "May the Grace of The Lord Jesus Christ and God His Father, " 
            << "with The communion of The Holy Spirit remain with you. Amen!" << endl;
         break;

         default:

         cout << "Please input a valid number input... God Bless you though of course" << endl;
         randomizedDraw();

         break;
      }

   }while(programEnd != true);

   return 0;
}

void bibleProgramRun(){

   cout << "WELCOME TO THE BIBLE PROJECT OF @2025" << endl;
   cout << "          ____________________           " << endl;
   cout << "         |                    |          " << endl;
   cout << "         |                    |          " << endl;
   cout << "         |                    |          " << endl;
   cout << "         |                    |          " << endl;
   cout << "         |                    |          " << endl;
   cout << "         |                    |          " << endl;
   cout << "         |                    |          " << endl;
   cout << "         |                    |          " << endl;
   cout << "         |                    |          " << endl;
   cout << "         |                    |          " << endl;
   cout << " ________|                    |_________ " << endl;
   cout << "|                                       |" << endl;
   cout << "|              JOHN 3:16                |" << endl;
   cout << "|                                       |" << endl;
   cout << "|                                       |" << endl;
   cout << "|_________                     _________|" << endl;
   cout << "         |                    |          " << endl;
   cout << "         |                    |          " << endl;
   cout << "         |                    |          " << endl;
   cout << "         |                    |          " << endl;
   cout << "         |                    |          " << endl;
   cout << "         |                    |          " << endl;
   cout << "         |                    |          " << endl;
   cout << "         |                    |          " << endl;
   cout << "         |                    |          " << endl;
   cout << "         |____________________|          " << endl;
   cout << endl;
}

void randomizedDraw(){

   int randomChoice = (rand() % GODS_NUMBER) + 1;

   // Randomizes which choice will be displayed.
   switch(randomChoice){

      case 1:

      randBibleDraw();
      break;

      case 2:
      
      randCrownDraw();
      break;

      case 3:
      
      randSunMoonDraw();
      break;

      case 4:
      
      randMessage1();
      break;

      case 5:
      
      randMessage2();
      break;

      case 6:
      
      randMessage3();
      break;

      case 7:
      
      randMessage4();
      break;    
   }
}

void randBibleDraw(){

   cout << "          _______________________           " << endl;
   cout << "         |                       |          " << endl;
   cout << "         |                       |          " << endl;
   cout << "         |                       |          " << endl;
   cout << "         |                       |          " << endl;
   cout << "         |         ESV           |          " << endl;
   cout << "         |         EDITION       |          " << endl;
   cout << "         |                       |          " << endl;
   cout << "         |         THE           |          " << endl;
   cout << "         |         HOLY          |          " << endl;
   cout << "         |         BIBLE         |          " << endl;
   cout << "         |                       |          " << endl;
   cout << "         |                       |          " << endl;
   cout << "         |                       |          " << endl;
   cout << "         |_______________________|          " << endl;

}

void randCrownDraw(){


}

void randSunMoonDraw(){


}

void randMessage1(){

   cout << " ______________________________________________" << endl;
   cout << "|                                              |" << endl;
   cout << "|                                              |" << endl;
   cout << "| What is hope except assurance of the unknown?| " << endl;
   cout << "|                                              |" << endl;
   cout << "|                                              |" << endl;
   cout << "| Now faith is the assurance of things hoped   |" << endl;
   cout << "| for, the conviction of things not seen.      |" << endl;
   cout << "|                                              |" << endl;
   cout << "| Hebrews 11:1                                 |" << endl;
   cout << "|                                              |" << endl;
   cout << "|                                              |" << endl;
   cout << "|______________________________________________|" << endl;
}

void randMessage2(){

   cout << " ______________________________________________" << endl;
   cout << "|                                              |" << endl;
   cout << "|                                              |" << endl;
   cout << "| Why hasn't The Day of The Lord come yet?     | " << endl;
   cout << "| Or rather why hasn't The Lord Jesus returned?|" << endl;
   cout << "|                                              |" << endl;
   cout << "|The Lord is not slow to fulfill his promise as|" << endl;
   cout << "|some count slowness, but is patient toward    |" << endl;
   cout << "|you, not wishing that any should perish, but  |" << endl;
   cout << "|that all should reach repentence.             |" << endl;
   cout << "|2 Peter 3:9                                   |" << endl;
   cout << "|                                              |" << endl;
   cout << "|______________________________________________|" << endl;
}

void randMessage3(){

   cout << " ______________________________________________" << endl;
   cout << "|                                              |" << endl;
   cout << "|                                              |" << endl;
   cout << "|But you beloved, building yourselves up in    | " << endl;
   cout << "|your most holy faith and praying in The Holy  |" << endl;
   cout << "|Spirit,                                       |" << endl;
   cout << "|                                              |" << endl;
   cout << "|keep yourselves in the love of God, waiting   |" << endl;
   cout << "|for the mercy of our Lord Jesus Christ that   |" << endl;
   cout << "|leads to eternal life.                        |" << endl;
   cout << "|Jude 1:20-21                                  |" << endl;
   cout << "|                                              |" << endl;
   cout << "|______________________________________________|" << endl;
}

void randMessage4(){

   cout << " ______________________________________________" << endl;
   cout << "|                                              |" << endl;
   cout << "|                                              |" << endl;
   cout << "|No temptation has overtaken you that is not   | " << endl;
   cout << "|common to man. God is faithful, and he will   |" << endl;
   cout << "|not let you be tempted beyond your ability,   |" << endl;
   cout << "|but with the temptation he will also provide  |" << endl;
   cout << "|the way of escape, that you may be able to    |" << endl;
   cout << "|endure it.                                    |" << endl;
   cout << "|                                              |" << endl;
   cout << "| 10 corinthians 10:13                         |" << endl;
   cout << "|                                              |" << endl;
   cout << "|______________________________________________|" << endl;
}

void myTestimony(){

   cout << " To begin, I was just like everyone around me. " << endl;
   
   this_thread::sleep_for(chrono::seconds(3));
   cout << " Even though I had been to multiple church services and Jehovah Witness meetings; ";
   cout << "I never grasped the idea of a creator who indeed was watching over me." << endl;
   cout << endl;
   
   this_thread::sleep_for(chrono::seconds(7));
   cout << " Especially not The Creator of The Whole Universe seeking a direct relationship with me. " << endl;
   cout << " Who I also learned had been long involved in saving my life far more than I could ever imagined" << endl;
   cout << " The same God who regularly comforted me as little toddler and as I grew into being a kid." << endl;
   cout << endl;

   this_thread::sleep_for(chrono::seconds(9));
   cout << " Now I am not going to exactly go over my life from start to finish, but He has been with me the whole time." << endl;
   cout << " Even in the midst of the regretable decisions and actions I made as a minor through Middle School and High School." << endl;
   cout << " It came to a point in the middle of my time as a 2nd year through middle school, " << endl;
   cout << " I felt separated among the peers I once had expressed myself explicitly too. It was The LORD calling me back to Him. " << endl;
   cout << endl;
   
   this_thread::sleep_for(chrono::seconds(8));

   cout << " Thankfully for me, this feeling stayed with me through High School among my fall to lust, hatred, lying, and unforgiveness." << endl;
   cout << " All of those sins were eating me up on the inside and I did not know who to run to for help." << endl;
   cout << " Yet after Covid-19 and various injuries I suffered, I would begin to seek a higher power to call to. " << endl;
   cout << endl;
   
   this_thread::sleep_for(chrono::seconds(7));

   cout << " In AUG 2023, I would gain an experience that changed my life like never before. " << endl;
   cout << " I would physically feel The Presence of God and The Holy Spirit coming to me. " << endl;
   cout << " That exact day was the lowest I had ever been, mylife had come to end by High School and I was entering college." << endl;
   cout << " Yet, He came to me and eased me during my cries to Him, which was the exact day I appropriately surrendered and gained faith. " << endl;
   cout << endl;

   this_thread::sleep_for(chrono::seconds(9));

   cout << " Since that day of being saved by The Lord and Savior Jesus Christ and His Father. " << endl;
   cout << " My life was been wild, but changed for the better, I have a peace that He indeed is working all things for my good." << endl;
   cout << " He has continued to protect my life and pull me out of dangerous situations from my carelessness as a kid." << endl;
   cout << " I pray that you come to experience The Only True and Living God who indeed loves you and offers you salvation." << endl;
   cout << " This salvation of His remains free, with repentence being a saving grace of His so that we can truly make up for our past mistakes.";
   cout << endl;
   cout << " He indeed has a wonderful plan for you, in the same way He has made this known to me too. He can do the same for you too.";
   cout << endl;

   cout << endl;

}
