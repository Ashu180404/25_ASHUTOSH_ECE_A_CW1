import java.util.Scanner;

public class ArrayOperations {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int num, a, num1, num2, num3, inp;
        int[] arr;

        System.out.println("Enter the size of the array:");
        a = scanner.nextInt();
        arr = new int[a];

        System.out.println("Input the entries of array.");
        for (int i = 0; i < a; i++) {
            arr[i] = scanner.nextInt();
        }

        System.out.println("MENU:\nPress 1 for linear searching\nPress 2 to update string (multiply elements at even indices by 2 and add 5 to the element at odd indices)\nPress 3 to insert an element at a particular position (by creating new memory)\nPress 4 for sorting\nPress 5 to exit.");
        num = scanner.nextInt();

        while (num != 5) {
            switch (num) {
                case 1:
                    System.out.println("Enter the element whose position you want to know:");
                    inp = scanner.nextInt();
                    for (int i = 0; i < a; i++) {
                        if (arr[i] == inp) {
                            System.out.println("Element found at position " + i);
                        }
                    }
                    break;
                case 2:
                    for (int i = 0; i < a; i++) {
                        if (i % 2 == 0) {
                            arr[i] *= 2;
                        } else {
                            arr[i] += 5;
                        }
                    }
                    break;
                case 3:
                    System.out.println("Enter the position:");
                    num2 = scanner.nextInt();
                    System.out.println("Enter the value:");
                    inp = scanner.nextInt();
                    if (num2 < 0 || num2 > a) {
                        System.out.println("Enter valid position");
                    } else {
                        int[] newArr = new int[a + 1];
                        for (int i = 0; i < num2; i++) {
                            newArr[i] = arr[i];
                        }
                        newArr[num2] = inp;
                        for (int i = num2; i < a; i++) {
                            newArr[i + 1] = arr[i];
                        }
                        arr = newArr;
                        a++;
                        System.out.println("Element inserted successfully.");
                    }
                    break;
                case 4:
                    // Sorting using Bubble Sort
                    for (int i = 0; i < a - 1; i++) {
                        for (int j = 0; j < a - i - 1; j++) {
                            if (arr[j] > arr[j + 1]) {
                                int temp = arr[j];
                                arr[j] = arr[j + 1];
                                arr[j + 1] = temp;
                            }
                        }
                    }
                    System.out.println("Array sorted successfully.");
                    break;
                default:
                    System.out.println("Invalid choice. Please try again.");
                    break;
            }

            System.out.print("Updated Array: ");
            for (int i = 0; i < a; i++) {
                System.out.print(arr[i] + " ");
            }
            System.out.println();

            System.out.println("MENU:\nPress 1 for linear searching\nPress 2 to update string (multiply elements at even indices by 2 and add 5 to the element at odd indices)\nPress 3 to insert an element at a particular position (by creating new memory)\nPress 4 for sorting\nPress 5 to exit.");
            num = scanner.nextInt();
        }

        scanner.close();
    }
}
