#include <iostream>

int main() {
  std::string firstNumber, secondNumber;
  std::cout << "Input conceived number: ";
  std::cin >> firstNumber;
  std::cout << "Input second number: ";
  std::cin >> secondNumber;

  if (firstNumber.length() < 5 && secondNumber.length() < 5 && firstNumber[0] - '0' >= 0 && firstNumber[0] - '0' <= 9
	  && firstNumber[1] - '0' >= 0 && firstNumber[1] - '0' <= 9 && firstNumber[2] - '0' >= 0
	  && firstNumber[2] - '0' <= 9 && firstNumber[3] - '0' >= 0 && firstNumber[3] - '0' <= 9
	  && secondNumber[0] - '0' >= 0 && secondNumber[0] - '0' <= 9 && secondNumber[1] - '0' >= 0
	  && secondNumber[1] - '0' <= 9 && secondNumber[2] - '0' >= 0 && secondNumber[2] - '0' <= 9
	  && secondNumber[3] - '0' >= 0 && secondNumber[3] - '0' <= 9) {
	int cow = 0, bull = 0;
	for (int i = 0; i < firstNumber.length(); i++) {
	  if (firstNumber[i]==secondNumber[i]) {
		bull++;
	  }
	  for (int y = 0; y < secondNumber.length(); y++) {
		if (firstNumber[i]==secondNumber[y] && firstNumber[i]!=secondNumber[i] && secondNumber[y]!=firstNumber[y]) {
		  cow++;
		}
	  }
	}
	std::cout << "Bulls: " << bull << ", cows: " << cow << ".\n" << firstNumber.length() << std::endl
			  << secondNumber.length();
  } else {
	std::cout << "Error! Please, input number in the right format.\n";
  }

  return 0;
}
