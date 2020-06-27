package june7;

public class StringOps {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
//		String s1 = "Hello";
//		String s2 = "Hell";
//		String s3 = "Hello";
//		
//		System.out.println(s1 == s2);
//		printChars("annbcdef");
		
		printSubStrings("abcd");
		System.out.println(IsPalindrome("tnitin"));
		System.out.println(countPalindromicSubStrings("nitin"));
	}
	
	public static void printChars(String str){
		for(int i = 0; i < str.length(); i++){
			System.out.println(str.charAt(i));
			// str.charAt(i) = 'c';
		}
	}
	
	public static void printSubStrings(String str){
		for(int si = 0; si < str.length(); si++){
			for(int ei = si + 1; ei <= str.length(); ei++){
				String sub = str.substring(si, ei);
				System.out.println(sub);
			}
		}
	}

	public static boolean IsPalindrome(String str){
		int left = 0, right = str.length() - 1;
		
		while(left < right){
			if(str.charAt(left) != str.charAt(right)){
				return false;
			}
			
			left++;
			right--;
		}
		
		return true;
	}

	public static int countPalindromicSubStrings(String str){
		int rv = 0;
		
		for(int si = 0; si < str.length(); si++){
			for(int ei = si + 1; ei <= str.length(); ei++){
				String sub = str.substring(si, ei);
				if(IsPalindrome(sub)){
					rv++;
				}
			}
		}
		
		return rv;
	}

}
