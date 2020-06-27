import java.util.Scanner;

public class Q15 {

	public static void main(String[] args) {
		Scanner scn = new Scanner(System.in);

		System.out.println("Enter number of rows ");
		int n = scn.nextInt();

		int row = 1;
		int nn = 1, ns = 2 * n - 3;

		while (row <= n) {
			// nums
			int cn = 1;
			int val = 1;
			while (cn <= nn) {
				System.out.print(val);
				val++;
				cn = cn + 1;
			}

			// spaces
			int cs = 1;
			while (cs <= ns) {
				System.out.print(" ");
				cs = cs + 1;
			}

			// nums
			cn = 1;
			if (row < n) {
				val = row;
				while (cn <= nn) {
					System.out.print(val);
					val--;
					cn = cn + 1;
				}
			} else {
				val = row - 1;
				while (cn < nn) {
					System.out.print(val);
					val--;
					cn = cn + 1;
				}
			}

			// prep
			ns -= 2;
			nn += 1;

			row = row + 1;
			System.out.println();
		}
	}

}
