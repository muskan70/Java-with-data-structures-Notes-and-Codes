package june7;

import java.util.Scanner;

public class StringBuilderDemos {

	public static void main(String[] args) {
//		Scanner scn = new Scanner(System.in);
//		String str = scn.nextLine();
//		
//		StringBuilder sb = new StringBuilder(str);
//		System.out.println(sb);
//		
//		System.out.println(sb.length());
//		
//		System.out.println(sb.charAt(2));
//		
//		sb.setCharAt(2, 't');
//		System.out.println(sb);
//		
//		sb.append('e');
//		System.out.println(sb);
//		
//		sb.insert(3, 'f');
//		System.out.println(sb);
//		
//		sb.deleteCharAt(3);
//		System.out.println(sb);
//		
//		System.out.println(sb.toString());
		
		System.out.println(quest3("fca"));
	}

	
	public static String toggle(String str){
		StringBuilder sb = new StringBuilder();
		
		for(int i = 0; i < str.length(); i++){
			char ch = str.charAt(i);
			
			if(ch >= 'a' && ch <= 'z'){
				char nch = (char)(ch - 'a' + 'A');
				sb.append(nch);
			} else if(ch >= 'A' && ch <= 'Z'){
				char nch = (char)(ch - 'A' + 'a');
				sb.append(nch);
			}
		}
		
		return sb.toString();
	}
	
	public static String quest2(String str){
		StringBuilder sb = new StringBuilder();
		
		for(int i = 0; i < str.length(); i++){
			char ch = str.charAt(i);
			
			if(i % 2 == 0){
				char nch = (char)(ch - 1);
				sb.append(nch);
			} else {
				char nch = (char)(ch + 1);
				sb.append(nch);
			}
		}
		
		return sb.toString();
	}
	
	public static String quest3(String str){
		StringBuilder sb = new StringBuilder();
		
		sb.append(str.charAt(0));
		for(int i = 1; i < str.length(); i++){
			int diff = str.charAt(i) - str.charAt(i - 1);
			sb.append(diff);
			sb.append(str.charAt(i));
		}
		
		return sb.toString();
	}
}
