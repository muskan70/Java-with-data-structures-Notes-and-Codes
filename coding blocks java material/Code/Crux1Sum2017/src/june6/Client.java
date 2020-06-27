package june6;

public class Client {

	public static void main(String[] args) {
		int[][] arr = null;

		// rectangular array
		arr = new int[3][4];

		System.out.println(arr);
		for (int i = 0; i < arr.length; i++) {
			System.out.println(arr[i]);
		}

		// rows
		System.out.println(arr.length);

		// columns
		System.out.println(arr[0].length);

		arr = new int[3][];
		for (int i = 0; i < arr.length; i++) {
			System.out.println(arr[i]);
		}

		arr[0] = new int[2];
		arr[1] = new int[3];
		arr[2] = new int[4];

	}

}
