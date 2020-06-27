import java.util.Scanner;

public class Primes2ton {

	public static void main(String[] args) {
		Scanner scn = new Scanner(System.in);
		System.out.println("Enter number");
		int n = scn.nextInt();
		
		int n2test = 2;
		while(n2test <= n){
			// check if the number is prime and prnt i
			boolean yesthenumberisprime = true;
			
			int div = 2;
			while(div < n2test){
				if(n2test % div == 0){
					yesthenumberisprime = false;
					break;
				} 
				
				div = div + 1;
			}
			
			if(yesthenumberisprime == true){
				System.out.println(n2test);
			}
			
			
			
			n2test = n2test + 1;
		}
	}

}
