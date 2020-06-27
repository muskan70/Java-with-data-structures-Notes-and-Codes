import java.util.Scanner;

public class IsPrime {

	public static void main(String[] args) {
		Scanner scn = new Scanner(System.in);
		
		System.out.println("Enter number");
		
		int n = scn.nextInt();
		int div = 2;
		
		while(div * div <= n){
			if(n % div == 0){
				System.out.println("no");
				return;
			} 
			
			div = div + 1;
		}
		
		System.out.println("yes");
	}

}
