class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0 || (x % 10 == 0 && x!= 0 ) )
        {
            return false;
        }

        int reverseNo = 0; //variable to store the reversed number 

        //loop to find the reversed number
        while(x > reverseNo)
        {
            int digit = x % 10; //extracting the last digit
            reverseNo = reverseNo * 10 + digit; //reversing the number
            x /= 10;  //removing the last digit
        }
        return( x == reverseNo || x == reverseNo/10 ); //checking if the number is equal to the reversed number
    }
};

//INPUT: 121
//OUTPUT: true

//INPUT: 123
//OUTPUT: false

//INPUT: 10
//OUTPUT: false