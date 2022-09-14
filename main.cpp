#include<iostream>

int getDigits(int number);
int sumEvenDigits(std::string cardNumber);
int sumOddDigits(std::string cardNumber);

int main(){



    std::string cardNumber;
    int result = 0;

    std::cout<<"Enter your credit card #: ";
    std::cin>>cardNumber;

    result = sumEvenDigits(cardNumber) + sumOddDigits(cardNumber);

    if(result%10==0){
        std::cout << "Credit Card number is valid \n";
    }
    else{
        std::cout << "Not a valid number. \n";
    }

    return 0;
}

int getDigits(int number){
    return number % 10 + (number/10 % 10);
}

int sumEvenDigits(std::string cardNumber){
    int sum = 0;
    for(int i = cardNumber.size() - 2; i>=0; i=i-2){
        sum = sum + getDigits((cardNumber[i]-'0')*2);
    }
        return sum;

}
int sumOddDigits(std::string cardNumber){
    int sum = 0;
    for(int i = cardNumber.size() - 1; i>=0; i=i-2){
        sum = sum + cardNumber[i]-'0';
    }
        return sum;

}
