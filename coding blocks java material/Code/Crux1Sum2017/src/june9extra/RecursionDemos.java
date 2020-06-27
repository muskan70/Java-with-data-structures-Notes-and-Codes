package june9extra;

public class RecursionDemos {

	public static void main(String[] args) {
		System.out.println(find(new int[] {22, 1, 19, 15, 44}, 67));
	}

	public static boolean find(int[] arr, int data) {
		if(arr.length == 0){
			return false;
		}
		
		if (arr[0] == data) {
			return true;
		}

		int[] sa = new int[arr.length - 1];
		for (int i = 0; i < sa.length; i++) {
			sa[i] = arr[i + 1];
		}
		
		boolean finsa = find(sa, data);
		return finsa;
	}

	public static boolean findBtr(int[] arr, int idx, int data) {
		if(idx == arr.length){
			return false;
		}
		
		if(arr[idx] == data){
			return true;
		}
		
		boolean finsa = findBtr(arr, idx + 1, data);
		return finsa;
	}
	
	public static boolean isSorted(int[] arr, int idx) {
		if(idx == arr.length - 1){
			return true;
		}
		
		if(arr[idx] > arr[idx + 1]){
			return false;
		}
		
		boolean issasorted = isSorted(arr, idx + 1);
		return issasorted;
	}
}
