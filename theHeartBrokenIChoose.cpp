#include <iostream>
using namespace std;


bool choseAlya = false;
bool choseBella = false;
bool choseClara = false;


void intro();
void chooseGirl();
void endingMenu();

void alyaEnding();
void bellaEnding();
void claraEnding();

int main()
{
    intro();

    chooseGirl();

    endingMenu();

    cout << "\n=====================================\n";
    cout << "        THANK YOU FOR PLAYING!\n";
    cout << "=====================================\n";

    return 0;
}

void intro()
{
    cout << "=====================================\n";
    cout << "      PATAH HATI YANG KUPILIH\n";
            "      THE HEARTBROKEN I CHOOSE\n";
    cout << "=====================================\n\n";

    cout << "You are a young man searching for\n";
    cout << "the person you truly love.\n\n";

    cout << "Three women have changed your life.\n";
    cout << "Tonight, you must choose only one.\n\n";
}

void chooseGirl()
{
    int choice;
    int confirm;

    while(true)
    {
        cout << "\nWho will you confess your love to?\n";
        cout << "1. Alya\n";
        cout << "2. Bella\n";
        cout << "3. Clara\n";
        cout << "Choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:

                cout << "\nYou chose Alya.\n";
                cout << "Are you sure?\n";
                cout << "1. Yes\n";
                cout << "2. Go Back\n";
                cout << "Choice: ";
                cin >> confirm;

                if(confirm == 1)
                {
                    choseAlya = true;
                    return;
                }
                break;

            case 2:

                cout << "\nYou chose Bella.\n";
                cout << "Are you sure?\n";
                cout << "1. Yes\n";
                cout << "2. Go Back\n";
                cout << "Choice: ";
                cin >> confirm;

                if(confirm == 1)
                {
                    choseBella = true;
                    return;
                }
                break;

            case 3:

                cout << "\nYou chose Clara.\n";
                cout << "Are you sure?\n";
                cout << "1. Yes\n";
                cout << "2. Go Back\n";
                cout << "Choice: ";
                cin >> confirm;

                if(confirm == 1)
                {
                    choseClara = true;
                    return;
                }
                break;

            default:
                cout << "\nInvalid choice.\n";
        }
    }
}

void endingMenu()
{
    int answer;

    cout << "\n=====================================\n";
    cout << "Years have passed...\n";
    cout << "=====================================\n";

    cout << "\nWould you like to see your ending?\n";
    cout << "1. Yes\n";
    cout << "2. No\n";
    cout << "Choice: ";
    cin >> answer;

    if(answer == 2)
    {
        cout << "\nYou decided to leave the future unknown.\n";
        return;
    }

    if(choseAlya)
        alyaEnding();

    else if(choseBella)
        bellaEnding();

    else if(choseClara)
        claraEnding();
}

void alyaEnding()
{
    cout << "\n=====================================\n";
    cout << "        ALYA ENDING\n";
    cout << "=====================================\n\n";

    cout << "You confessed your love to Alya.\n";
    cout << "She smiled with tears in her eyes.\n\n";

    cout << "\"I have been waiting for this moment.\"\n\n";

    cout << "Years later...\n";
    cout << "The two of you built a peaceful family,\n";
    cout << "living a simple but happy life.\n\n";

    cout << "Ending Unlocked:\n";
    cout << "\"A Lifetime Together\"\n";
}

void bellaEnding()
{
    cout << "\n=====================================\n";
    cout << "        BELLA ENDING\n";
    cout << "=====================================\n\n";

    cout << "Bella accepted your confession.\n\n";

    cout << "She encouraged you to chase your dreams.\n";
    cout << "Together, both of you traveled the world.\n\n";

    cout << "Every country became another memory\n";
    cout << "of your growing love.\n\n";

    cout << "Ending Unlocked:\n";
    cout << "\"Love Beyond Borders\"\n";
}

void claraEnding()
{
    cout << "\n=====================================\n";
    cout << "        CLARA ENDING\n";
    cout << "=====================================\n\n";

    cout << "Clara quietly held your hand.\n";
    cout << "\"No matter what happens,\n";
    cout << "I'll stay beside you.\"\n\n";

    cout << "Life wasn't always easy,\n";
    cout << "but the two of you faced every challenge\n";
    cout << "together.\n\n";

    cout << "Ending Unlocked:\n";
    cout << "\"Through Every Storm\"\n";
}