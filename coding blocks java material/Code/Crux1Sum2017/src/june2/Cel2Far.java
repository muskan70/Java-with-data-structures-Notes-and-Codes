package june2;

import java.util.Scanner;

public class Cel2Far {

	public static void main(String[] args) {
		Scanner scn = new Scanner(System.in);

		System.out.println("Min far?");
		int farMin = scn.nextInt();

		System.out.println("Max far?");
		int farMax = scn.nextInt();

		System.out.println("Step?");
		int farStep = scn.nextInt();

		int farTemp = farMin;
		while (farTemp <= farMax) {
			int celTemp = (int) ((5.0 / 9) * (farTemp - 32));
			System.out.println(farTemp + "\t" + celTemp);

			farTemp += farStep;
		}
	}

}
