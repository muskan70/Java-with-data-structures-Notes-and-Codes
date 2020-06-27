import java.util.Scanner;

public class FIbToN {

	public static void main(String[] args) {
		Scanner scn = new Scanner(System.in);
		System.out.println("Enter number");
		int n = scn.nextInt();
		
		int a = 0;
		int b = 1;
		
		while(a <= n){
			System.out.println(a);
			
			int sum = a+ b;
			a = b;
			b = sum;
		}
	}

}
