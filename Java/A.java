import java.util.Scanner;

public class A {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the number of rows: ");
        int n = scanner.nextInt();

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                if (n % 2 == 0) {
                    if (i == 1 || j == 1 || i == n / 2 + 1 || ((j == n) && (i < n / 2 + 1))) {
                        System.out.print("A");
                    } else {
                        System.out.print(" ");
                    }
                } else {
                    if (i == 1 || j == 1 || j == n + 1 || i == (n + 1) / 2) {
                        System.out.print("A");
                    } else {
                        System.out.print(" ");
                    }
                }
            }
            System.out.println();
        }
        scanner.close();
    }
}
