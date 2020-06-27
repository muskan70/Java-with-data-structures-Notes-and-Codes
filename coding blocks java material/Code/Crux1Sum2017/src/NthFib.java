import java.util.Scanner;

public class NthFib {

	public static void main(String[] args) {
		Scanner scn = new Scanner(System.in);

		System.out.println("Enter number");

		int n = scn.nextInt();
		
		int a = 0;
		int b = 1;
		int counter = 2;
		
		while(counter <= n){
			int sum  = a + b;
			a = b;
			b = sum;
			
			counter = counter + 1;
		}
		
		System.out.println(b);
	}

}
