package june11extra;

public class RecursionDemos {

	public static void main(String[] args) {
		// int[] arr = {11, 2, 18, 25, 23 };
		// selectionSort(arr, 0, 1);
		// for(int val: arr){
		// System.out.println(val);
		// }
//		System.out.println(toggleCase("aBCdeG"));
		System.out.println(sumDig("1234"));
	}

	public static void selectionSort(int[] arr, int si, int cmpIdx) {
		if (si == arr.length) {
			return;
		}

		if (cmpIdx == arr.length) {
			selectionSort(arr, si + 1, si + 2);
			return;
		}

		if (arr[si] > arr[cmpIdx]) {
			int temp = arr[si];
			arr[si] = arr[cmpIdx];
			arr[cmpIdx] = temp;
		}

		selectionSort(arr, si, cmpIdx + 1);
	}

	public static String toggleCase(String str) {
		StringBuilder sb = new StringBuilder();

		for (int i = 0; i < str.length(); i++) {
			char ch = str.charAt(i);

			if (ch >= 'a' && ch <= 'z') {
				sb.append((char) (ch - 'a' + 'A'));
			} else if (ch >= 'A' && ch <= 'Z') {
				sb.append((char) (ch - 'A' + 'a'));
			}
		}

		return sb.toString();
	}

	public static int sumDig(String str) {
		if (str.length() == 0) {
			return 0;
		}

		char ch = str.charAt(0);
		String ros = str.substring(1);
		
		int rr = sumDig(ros);
		int mr = rr + ch - '0';
		
		return mr;

	}
}
