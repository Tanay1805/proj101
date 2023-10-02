 #include <iostream>
using namespace std;
int main() {
    
    srand(time(0));

    int userChoice;
    int computerChoice;
    int userScore = 0;
    int computerScore = 0;
    int rounds;

    cout << "Welcome to Rock, Paper, Scissors!" <<endl;
    cout << "How many rounds do you want to play? ";
    cin >> rounds;

    for (int round = 1; round <= rounds; ++round) {
        cout << "\nRound " << round <<endl;
        cout << "Enter your choice (1 for Rock, 2 for Paper, 3 for Scissors): ";
        cin >> userChoice;

       
        computerChoice = rand() % 3 + 1;

        
        cout << "You chose: ";
        switch (userChoice) {
            case 1:
                cout << "Rock";
                break;
            case 2:
                cout << "Paper";
                break;
            case 3:
                cout << "Scissors";
                break;
            default:
                cout << "Invalid choice";
                break;
         }

        cout << endl;

        cout << "Computer chose: ";
        switch (computerChoice) {
            case 1:
                cout << "Rock";
                break;
            case 2:
                cout << "Paper";
                break;
            case 3:
                cout << "Scissors";
                break;
        }

        cout << endl;

        
        if (userChoice == computerChoice) {
            cout << "It's a tie!" <<endl;
        } else if ((userChoice == 1 && computerChoice == 3) ||
                   (userChoice == 2 && computerChoice == 1) ||
                   (userChoice == 3 && computerChoice == 2)) {
            cout << "You win this round!" <<endl;
            userScore++;
        } else {
            cout << "Computer wins this round!" <<endl;
            computerScore++;
        }
    }

    
    cout << "\nGame over! Final score:" << endl;
    cout << "You: " << userScore << " Computer: " << computerScore <<endl;

    if (userScore > computerScore) {
        cout << "You win the game!" << endl;
    } else if (computerScore > userScore) {
        cout << "Computer wins the game!" << endl;
    } else {
        cout << "It's a tie game!" << endl;
    }

    return 0;
}
