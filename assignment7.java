/*Write a java program to accept a number from user using command line
argument and display its table. */

import java.util.Scanner;

public class assignment7 {
    public static void main(String[] args) {
        int num = 0;

        if (args.length > 0) {
            try {
                num = Integer.parseInt(args[0]);
            } catch (NumberFormatException e) {
                System.out.println("Invalid input in command-line argument. Please provide a valid integer.");
                return;
            }
        } else {
            Scanner scanner = new Scanner(System.in);
            System.out.print("Enter a number: ");
            num = scanner.nextInt();
        }
        System.out.println("Multiplication Table for " + num + ":");
        for (int i = 1; i <= 10; i++) {
            System.out.println(num + " * " + i + " = " + (num * i));
        }
    }
}


