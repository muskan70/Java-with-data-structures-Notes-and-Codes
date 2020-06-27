package june2;

import java.util.Scanner;

public class Asgn3Q18 {

	public static void main(String[] args) {
		Scanner scn = new Scanner(System.in);
		
		char ch = scn.next().charAt(0);
		
		if(ch >= 'A' && ch <= 'Z'){
			System.out.println("U");
		}
		else if(ch >= 'a' && ch <= 'z'){
			System.out.println("L");
		} 
		else {
			System.out.println("I");
		}

	}

}
