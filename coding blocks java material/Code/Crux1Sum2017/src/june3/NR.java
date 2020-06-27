package june3;

import java.util.Scanner;

public class NR {

	public static void main(String[] args) {
		Scanner scn = new Scanner(System.in);

		System.out.println("Enter number of rows ");
		int n = scn.nextInt();
		
		int row = 1;
		int nsp = n - 1, csp = 1;
		int nst = 1, cst = 1;
		int val = 1;
		
		while(row <= 2 * n - 1){
			// spaces
			csp = 1;
			while (csp <= nsp) {
				System.out.print(" ");
				csp++;
			}
			
			// stars
			if(row <= n){
				val = row;
			} else {
				val = 2 * n - row;
			}
			
			cst = 1;
			while (cst <= nst) {
				System.out.print(val);
				
				if(cst <= nst / 2){
					val++;
				} else {
					val--;
				}
				
				cst++;
			}
			
			// prep
			if(row < n){
				nst += 2;
				nsp--;
			} else {
				nst -= 2;
				nsp++;
			}
			
			System.out.println();
			row++;
		}
	}

}
