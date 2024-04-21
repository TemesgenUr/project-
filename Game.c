import random

def get_user_choice():
    choice = input("Enter your choice (rock/paper/scissors): ")
    while choice.lower() not in ['rock', 'paper', 'scissors']:
        choice = input("Invalid choice. Please enter rock, paper, or scissors: ")
    return choice.lower()

def get_computer_choice():
    choices = ['rock', 'paper', 'scissors']
    return random.choice(choices)

def determine_winner(user_choice, computer_choice):
    if user_choice == computer_choice:
        return 'draw'
    elif (user_choice == 'rock' and computer_choice == 'scissors') or \
         (user_choice == 'paper' and computer_choice == 'rock') or \
         (user_choice == 'scissors' and computer_choice == 'paper'):
        return 'user'
    else:
        return 'computer'

def play_game():
    user_wins = 0
    computer_wins = 0
    draws = 0

    while True:
        user_choice = get_user_choice()
        computer_choice = get_computer_choice()

        print("User's choice:", user_choice)
        print("Computer's choice:", computer_choice)

        winner = determine_winner(user_choice, computer_choice)
        if winner == 'draw':
            print("It's a draw!")
            draws += 1
        elif winner == 'user':
            print("You win!")
            user_wins += 1
        else:
            print("Computer wins!")
            computer_wins += 1

        play_again = input("Do you want to play again? (yes/no): ")
        if play_again.lower() != 'yes':
            break

    print("Final statistics:")
    print("User wins:", user_wins)
    print("Computer wins:", computer_wins)
    print("Draws:", draws)

play_game()