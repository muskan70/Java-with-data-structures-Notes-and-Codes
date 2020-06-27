import java.util.Scanner;

public class HollowRhombus {

	public static void main(String[] args) {
		Scanner scn = new Scanner(System.in);
		
		System.out.println("Enter number of rows ");
		int n = scn.nextInt();
		
		int row = 1;
		int nstars = n / 2;
		int nspaces = 1;
		int cstars = 1;
		int cspaces = 1;
		
		while(row <= n){
			// stars
			cstars = 1;
			while(cstars <= nstars){
				System.out.print("*");
				cstars = cstars + 1;
			}
			
			// spaces
			cspaces = 1;
			while(cspaces <= nspaces){
				System.out.print(" ");
				cspaces = cspaces + 1;
			}
			
			// stars
			cstars = 1;
			while(cstars <= nstars){
				System.out.print("*");
				cstars = cstars + 1;
			}
			
			if(row <= n / 2){
				nstars = nstars - 1;
				nspaces = nspaces + 2;
			} else {
				nstars = nstars + 1;
				nspaces = nspaces - 2;
			}
			
			System.out.println();
			row = row + 1;
		}
	}

}
