import java.util.Scanner;

public class CrossRhombus {

	public static void main(String[] args) {
		Scanner scn = new Scanner(System.in);

		System.out.println("Enter number of rows ");
		int n = scn.nextInt();

		int nis = 0;
		int nbs = n - 2;

		int row = 1;
		while (row <= n) {
			// init spaces
			int cis = 1;
			while (cis <= nis) {
				System.out.print(" ");
				cis = cis + 1;
			}

			// *
			System.out.print("*");

			// between spaces
			int cbs = 1;
			while (cbs <= nbs) {
				System.out.print(" ");
				cbs = cbs + 1;
			}

			// *
			if (row != n / 2 + 1) {
				System.out.print("*");
			}

			// next row prep
			if(row <= n / 2){
				nis = nis + 1;
				nbs = nbs - 2;
			} else {
				nis = nis - 1;
				nbs = nbs + 2;
			}

			row = row + 1;
			System.out.println();
		}
	}

}
