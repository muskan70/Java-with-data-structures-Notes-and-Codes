package june15;

public class A6Q11 {

	public static void main(String[] args) {
//		int[] arr = {9, 7, 3, 3, 7, 9};
//		System.out.println(IsPalindrome(arr, 0, arr.length - 1));
//		int[] arr = {4, 2, 0, 1, 3};
//		invert(arr, 0);
//		for(int val: arr){
//			System.out.println(val);
//		}
		
//		printAsterik("hellasdblleh", "");
//		System.out.println(printStringSomeLogic("abbgggcca"));
		replaceHiWithByeNoHit("ihi", "");
	}
	
	public static boolean IsPalindrome(int[] arr, int lidx, int ridx){
		if(lidx >= ridx){
			return true;
		}
		
		if(arr[lidx] != arr[ridx]){
			return false;
		}
		
		boolean issapalin = IsPalindrome(arr, lidx + 1, ridx - 1);
		return issapalin;
	}

	public static void invert(int[] arr, int vidx){
		if(vidx == arr.length){
			return;
		}
		
		int temp = arr[vidx];
		invert(arr, vidx + 1);
		arr[temp] = vidx;
	}

	public static void printAsterik(String quest, String ans){
		if(quest.length() == 1){
			System.out.println(ans + quest);
			return;
		}
		
		char ch0 = quest.charAt(0);
		char ch1 = quest.charAt(1);
		String ros = quest.substring(1);
		
		if(ch0 == ch1){
			printAsterik(ros, ans);
		} else {
			printAsterik(ros, ans + ch0);
		}
	}

	public static String printStringSomeLogic(String quest){
		if(quest.length() == 1){
			return quest;
		}
		
		char ch0 = quest.charAt(0);
		char ch1 = quest.charAt(1);
		String ros1 = quest.substring(1);
		String ros2 = quest.substring(2);
		
		if(ch0 == ch1){
			String rr = printStringSomeLogic(ros2);
			return rr;
		} else {
			String rr = printStringSomeLogic(ros1);
			
			if(rr.length() > 0 && rr.charAt(0) == ch0){
				return rr.substring(1);
			} else {
				return ch0 + rr;
			}
		}
	}

	public static void replaceHiWithByeNoHit(String quest, String ans){
		if(quest.length() == 0){
			System.out.println(ans);
			return;
		} else if(quest.length() == 1){
			System.out.println(ans + quest);
			return;
		}
		
		String ch0 = quest.substring(0, 1);
		String ch01 = quest.substring(0, 2);
		
		if(ch01.equals("hi")){
			String ros1 = quest.substring(1);
			String ros2 = quest.substring(2);
			if(quest.length() >= 3){
				String ch012 = quest.substring(0, 3);
				if(!ch012.equals("hit")){
					replaceHiWithByeNoHit(ros2, ans + "bye");
				} else {
					replaceHiWithByeNoHit(ros1, ans + ch0);
				}
			} else {
				replaceHiWithByeNoHit(ros2, ans + "bye");
			}
		} else {
			String ros1 = quest.substring(1);
			replaceHiWithByeNoHit(ros1, ans + ch0);
		}
		
	}
}
