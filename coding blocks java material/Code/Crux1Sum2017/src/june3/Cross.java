package june3;

import java.util.Scanner;

public class Cross {

	public static void main(String[] args) {
		Scanner scn = new Scanner(System.in);

		System.out.println("Enter number of rows ");
		int n = scn.nextInt();

		int nisp = 0;
		int nbsp = n - 2;
		int cisp = 1;
		int cbsp = 1;
		int row = 1;

		while (row <= n) {
			// i spaces
			cisp = 1;
			while (cisp <= nisp) {
				System.out.print(" ");
				cisp++;
			}

			// star
			System.out.print("*");

			// b spaces
			cbsp = 1;
			while (cbsp <= nbsp) {
				System.out.print(" ");
				cbsp++;
			}

			// star
			if (row != n / 2 + 1) {
				System.out.print("*");
			}

			// prep
			if (row <= n / 2) {
				nisp++;
				nbsp -= 2;
			} else {
				nisp--;
				nbsp += 2;
			}

			row++;
			System.out.println();
		}
	}

}
