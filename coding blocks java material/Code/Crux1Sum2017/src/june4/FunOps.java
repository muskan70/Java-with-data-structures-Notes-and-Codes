package june4;

public class FunOps {

	public static void main(String[] args) {
		// boolean result = IsPrime(11);
		// System.out.println(result);
//		printArmstrong(100, 999);
		
//		System.out.println(Power(3, 5));
//		System.out.println(Log(243, 3));
		
//		System.out.println(GCD(36, 60));
//		System.out.println(LCM(36, 60));
		
		// Part 1
		byte by = 10;
		short sh = 10;
		int in = 10;
		long lo = 10;
		
//		by = sh;
//		by = in;
//		by = lo;
		
		sh = by;
//		sh = in;
//		sh = lo;
		
		in = by;
		in = sh;
//		in = lo;
		
		lo = by;
		lo = sh;
		lo = in;
		
		// Part 2
		by = 10;
		by = 127;
//		by = 128;
		by = (byte)128;
		System.out.println(by);
		
		// Part 3
		in = 1000000000;
		in = (int)20000000000L;
		System.out.println(in);
		
		// Part 4
//		float fl = 5.5;
		float fl = 5.5f;
		double db = 5.5;
		
//		fl = db;
		db = fl;
		
		// Part 5
//		in = fl;
		in = (int)fl;
		fl = in;
		
		// Part 6
		boolean bl = true;
		bl = false;
//		bl = 0;
//		bl = 1;
		
//		if(in){
//			System.out.println("hi");
//		}
//		else {
//			System.out.println("bye");
//		}
		
		if(in > 0){
			System.out.println("hi");
		}
		else {
			System.out.println("bye");
		}
		
		if(bl){
			System.out.println("hi");
		}
		else {
			System.out.println("bye");
		}
		
		// Part 7
		char ch = 'a';
		ch = 97;
		ch = (char)65536;
		
		in = ch;
//		ch = in;
		ch = (char)in;
		
		in = ch + 2;
//		ch = ch + 2;
		ch = (char)(ch + 2);
		
		// Part 8
		System.out.println(10 + 20 + "Hello" + 10 + 20);
		System.out.println(2 + ' ' + 5);
		System.out.println(2 + " " + 5);
		System.out.println("Hello" + '\t' + "World");
		System.out.println("Hello" + "\t" + "World");
	}
 
	public static void printPrimes(int n1, int n2) {
		for (int i = n1; i <= n2; i++) {
			boolean result = IsPrime(i);
			if (result) {
				System.out.println(i);
			}
		}
	}

	public static boolean IsPrime(int num) {
		boolean rv = true;

		int div = 2;
		while (div < num) {
			if (num % div == 0) {
				rv = false;
				break;
			}

			div++;
		}

		return rv;
	}

	public static void printArmstrong(int n1, int n2) {
		int i = n1;
		while (i <= n2) {
			boolean result = IsArmstrong(i);
			if (result) {
				System.out.println(i);
			}
			i++;
		}
	}

	public static boolean IsArmstrong(int num) {
		boolean rv = true;

		int temp = num, sum = 0;
		while (temp != 0) {
			int rem = temp % 10;
			temp = temp / 10;

			sum = sum + (rem * rem * rem);
		}

		if (sum != num) {
			rv = false;
		}

		return rv;
	}

	public static int Power(int x, int n){
		int rv = 1;
		
		int counter = 1;
		while(counter <= n){
			rv = rv * x;
			counter++;
		}
		
		return rv;
	}
	
	public static int Log(int x, int n){
		int rv = 1;
		
		int counter = 1;
		int presult = Power(n, counter);
		while(presult != x){
			counter++;
			presult = Power(n, counter);
		}
		
		rv = counter;
		
		return rv;
	}

	public static int GCD(int n1, int n2){
		while(n1 % n2 != 0){
			int rem = n1 % n2;
			n1 = n2;
			n2 = rem;
		}
		
		return n2;
	}
	
	public static int LCM(int n1, int n2){
		int rv = 1;
		
		int gcd = GCD(n1, n2);
		rv = (n1 * n2) / gcd;
		
		return rv;
	}
}
