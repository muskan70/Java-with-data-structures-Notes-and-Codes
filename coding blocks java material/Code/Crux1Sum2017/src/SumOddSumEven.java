import java.util.Scanner;

public class SumOddSumEven {

	public static void main(String[] args) {
		Scanner scn = new Scanner(System.in);
		System.out.println("Enter number");
		int n = scn.nextInt();
		int so = 0;
		int se = 0;

		while (n != 0) {
			int rem = n % 10;

			if (rem % 2 == 0) {
				se += rem;
			} else {
				so += rem;
			}

			n = n / 10;
		}

		System.out.println(so + " " + se);
	}

}
