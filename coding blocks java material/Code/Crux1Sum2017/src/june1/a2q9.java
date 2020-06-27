package june1;

import java.util.Scanner;

public class a2q9 {

	public static void main(String[] args) {
		Scanner scn = new Scanner(System.in);
		System.out.println("Enter number of rows ");
		int n = scn.nextInt();
		int col = 0;
		int val = 1;
		
		int row = 0;
		while(row < n){
			col = 0;
			val = 1;
			
			while(col <= row){
				System.out.print(val + "\t");
				
				int nv = (val * (row - col)) / (col + 1);
				val = nv;
				
				col++;
			}
					
			System.out.println();
			row++;
		}
	}

}
