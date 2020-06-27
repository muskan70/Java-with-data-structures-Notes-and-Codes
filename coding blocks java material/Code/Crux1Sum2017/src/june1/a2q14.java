package june1;

import java.util.Scanner;

public class a2q14 {

	public static void main(String[] args) {
		Scanner scn = new Scanner(System.in);
		System.out.println("Enter number of rows ");
		int n = scn.nextInt();

		int row = 1, nsp = n - 1, nst = 1;
		int val = 1;
		while (row <= 2 * n - 1) {
			int csp = 1;
			while (csp <= nsp) {
				System.out.print(" ");
				csp++;
			}

			int cst = 1;
			if (row <= n) {
				val = row;
			}

			while (cst <= nst) {
				System.out.print(val);
				if (cst <= nst / 2) {
					val++;
				} else {
					val--;
				}

				cst++;
			}

			if (row < n) {
				nsp--;
				nst += 2;
			} else {
				nsp++;
				nst -= 2;
			}

			System.out.println();
			row++;
		}
	}

}
