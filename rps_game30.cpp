#include <iostream>
#include <ctime>

char get_user_choice();
char get_computer_choice();
void show_choice(char choice);
void choose_winner(char player, char computer);

int main(){

    char player;
    char computer;

    player = get_user_choice();
    std::cout << "You choice: ";
    show_choice(player);

    computer = get_computer_choice();
    std::cout << "Computer's choice: ";
    show_choice(computer);

    choose_winner(player, computer);

    return 0;
}
char get_user_choice(){
    char player;

    do{
        std::cout << "*****************************" << '\n';
        std::cout << "ROCK - PAPER - SCISSORS GAME" << '\n';
        std::cout << "*****************************" << '\n';
        std::cout << " 'r' for rock" << '\n';
        std::cout << " 'p' for paper" << '\n';
        std::cout << " 's' for scissors" << '\n';
        std::cout << "ROCK - PAPER - SCISSORS GAME" << '\n';
        std::cout << "*****************************" << '\n';
        std::cin >> player;     
    }while(player != 'r' && player != 's' && player != 'p');

    return player;
}

char get_computer_choice(){

    srand(time(0));
    int num = rand() % 3 + 1;

    switch(num){
        case 1:
            return 'r';
        case 2:
            return 'p';
        case 3:
            return 's';
    }
    return 0;

}

void show_choice(char choice){
    switch(choice){
        case 'r':
            std::cout << "Rock\n";
            break;
        case 'p':
            std::cout << "Paper\n";
            break;
        case 's':
            std::cout << "Scissors\n";
            break;
    }

}

void choose_winner(char player, char computer){

    switch(player){
        case 'r':
            if(computer == 'r'){
                std::cout << "IT IS A TIE." << '\n';
            }
            else if(computer == 'p'){
                std::cout << "YOU WON THE GAME, SKYNET future evaded" << '\n';
            }
            else{
                std::cout << "You lost against the computer..." << '\n';
            }
            break;
        case 'p':
            if(computer == 'p'){
                std::cout << "IT IS A TIE." << '\n';
            }
            else if(computer == 's'){
                std::cout << "YOU WON THE GAME, SKYNET future evaded" << '\n';
            }
            else{
                std::cout << "You lost against the computer..." << '\n';
            }
            break;
        case 's':
            if(computer == 's'){
                std::cout << "IT IS A TIE." << '\n';
            }
            else if(computer == 'p'){
                std::cout << "YOU WON THE GAME, SKYNET future evaded" << '\n';
            }
            else{
                std::cout << "You lost against the computer..." << '\n';
            }
            break;
    }
}