package june3;

import java.util.Scanner;

public class Pascal {

	public static void main(String[] args) {
		Scanner scn = new Scanner(System.in);

		System.out.println("Enter number of rows ");
		int n = scn.nextInt();
		
		int row = 0;
		while(row < n){
			int col = 0;
			int val = 1;
			while(col <= row){
				System.out.print(val + "\t");
				
				val = (val * (row - col)) / (col + 1);
				
				col++;
			}
			
			
			System.out.println();
			row++;
		}
	}

}
