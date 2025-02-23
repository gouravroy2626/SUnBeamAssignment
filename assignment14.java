//Write a java code to check if string is palindrome.

import java.util.Scanner;

public class assignment14 {
    
    public static boolean isPalindrome(String str) {
        int start = 0;
        int end = str.length() - 1;
       
        while (start < end) {
            if (str.charAt(start) != str.charAt(end)) {
                return false; 
            }
            start++;
            end--;
        }
        return true; 
    }

    public static void main(String[] args) {
        
        Scanner scanner = new Scanner(System.in);
      
        System.out.print("Enter a string: ");
        String inputStr = scanner.nextLine();
        
    
        if (isPalindrome(inputStr)) {
            System.out.println("The string is a palindrome.");
        } else {
            System.out.println("The string is not a palindrome.");
        }
        scanner.close();
    }
}
