#include<iostream>
#include<string>

using namespace std;

string winner(string player1_input, string player2_input)
{
    if (player1_input == "rock" && player2_input=="scissors")
    {
        return "player1";
    }
    else if (player1_input == "rock" && player2_input=="paper")
    {
        return "player2";
    }
    else if (player1_input == "rock" && player2_input=="rock")
    {
        return "none";
    }
    else if (player1_input == "scissors" && player2_input=="paper")
    {
        return "player1";
    }
    else if (player1_input == "scissors" && player2_input=="rock")
    {
        return "player2";
    }
    else if (player1_input == "scissors" && player2_input=="scissors")
    {
        return "none";
    }
    else if (player1_input == "paper" && player2_input=="scissors")
    {
        return "player2";
    }
    else if (player1_input == "paper" && player2_input=="rock")
    {
        return "player1";
    }
    else if (player1_input == "paper" && player2_input=="paper")
    {
        return "none";
    }

}

int main()
{
    int num_games;
    cin >> num_games;
    string *player1;
    string *player2;
    player1 = new string[num_games];
    player2 = new string[num_games];

    for (int i =0;i<num_games;i++)
    {
        cin >> player1[i];
    }


    for (int i =0;i<num_games;i++)
    {
        cin >> player2[i];
    }

    int player1_wins=0;
    int player2_wins=0;

    for (int i =0; i<num_games;i++)
    {
        if (winner(player1[i], player2[i]) == "player1")
        {
            player1_wins+=1;
        }
        else if (winner(player1[i], player2[i]) == "player2")
        {
            player2_wins+=1;
        }
    }
    cout << player1_wins << " " << player2_wins;

    return 0;
}
