package L8;

public class Recursion {

	public static void funA(int x) {
		x += 10;
	}
	
	public static int factorial(int n) {
		// Base case
		if(n <= 1) {
			return 1;
		}
		// Recursive call
		int x = factorial(n - 1);
		
		// Small calculation
		int ans = n * x;
		
		return ans;
	}
	
	public static void print(int n) {
		if(n <= 0) {
			return;
		}
		
		print(n - 1);
		
		System.out.println(n);
	}
	
	public static int fibonacci(int n) {
		// Base case
		if(n == 0) {
			return 0;
		}
		if(n == 1) {
			return 1;
		}
		
		// Recursive call
		int a = fibonacci(n - 1);
		int b = fibonacci(n - 2);
		
		// Small calculation
		return a + b;
	}
	
	public static void main(String[] args) {
		print(5);
//		System.out.println(factorial(4));
		/*int x = 10;
		funA(x);
		System.out.println(x);*/
	}
}
