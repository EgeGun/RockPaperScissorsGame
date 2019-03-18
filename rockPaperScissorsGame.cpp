#include <iostream>
#include <string>
#include <time.h>
#include <stdlib.h>

class Person
{
public:
  std::string name;
};

int main()
{
  Person person[2];
  std::string playerName , playerAnswer , computerAnswer;
  bool gameOver = false;
  
  srand( time(NULL) );

  std::cout << "Rock Paper Scissors\n" << std::endl;
  
  std::cout << "Enter your name: ";
  std::getline(std::cin , playerName);
  
  person[0].name = playerName;
    
  std::cout << "Choose one: Rock , Paper or Scissors" << std::endl;
  
  while(!gameOver)
    {
      std::cout << "Enter your choice: ";
      std::getline(std::cin , playerAnswer);

      
      const std::string computer[3] = {"Rock" , "Paper" , "Scissors"};
      int randomize = rand() % 3;

      computerAnswer = computer[randomize];

      if(computerAnswer == "Rock" && playerAnswer == "rock")
        {
          std::cout << "Computer choose: " << computerAnswer << " YOU ARE EQUAL. TRY AGAIN!"<< std::endl;
        }

      else if(computerAnswer == "Rock" && playerAnswer == "paper")
        {
          std::cout << "Computer choose: " <<  computerAnswer << ", YOU WIN." << std::endl;
        }
      
      else if(computerAnswer == "Rock" && playerAnswer == "scissors")
        {
          std::cout << "Computer choose: " <<  computerAnswer << ", YOU LOST. TRY AGAIN!" << std::endl;
        }

      else if(computerAnswer == "Paper" && playerAnswer == "rock")
        {
          std::cout << "Computer choose: " <<  computerAnswer << ", YOU LOST. TRY AGAIN!" << std::endl;
        }

      else if(computerAnswer == "Paper" && playerAnswer == "paper")
        {
          std::cout << "Computer choose: " <<  computerAnswer << ", YOU ARE EQUAL. TRY AGAIN!" << std::endl;
        }

      else if(computerAnswer == "Paper" && playerAnswer == "scissors")
        {
          std::cout << "Computer choose: " <<  computerAnswer << "YOU WIN";
        }

      else if(computerAnswer == "Scissors" && playerAnswer == "rock")
        {
          std::cout << "Computer choose: " <<  computerAnswer << ", YOU WIN!" << std::endl;
        }

      else if(computerAnswer == "Scissors" && playerAnswer == "paper")
        {
          std::cout << "Computer choose: " <<  computerAnswer << ", YOU LOST. TRY AGAIN!!" << std::endl;
        }

      else if(computerAnswer == "Scissors" && playerAnswer == "scissors")
        {
          std::cout << "Computer choose: " <<  computerAnswer << ", YOU ARE EQUAL. TRY AGAIN!" << std::endl;
        }

      else
        {
          std::cout << "Unknown choice try again." << std::endl;
        }
    }

  return 0;
}
