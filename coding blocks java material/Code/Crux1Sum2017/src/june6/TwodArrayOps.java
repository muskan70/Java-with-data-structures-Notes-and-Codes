package june6;

import java.util.Scanner;

public class TwodArrayOps {
	public 	static Scanner scn = new Scanner(System.in);

	public static void main(String[] args) {
//		int[][] arr = takeInput();
//		display(arr);
		
		int[][] arr = { {11, 12, 13, 14}, {21, 22, 23, 24}, {31, 32, 33, 34}, {41, 42, 43, 44} };
		display(arr);
		spiralDisplay2(arr);
		
//		int[][] one = { {10, 100}, {20, 200}, {30, 300}};
//		int[][] two = { {10, 100, 100}, {20, 200, 2000}};
//		int[][] arr = multiply(one, two);
		
//		display(arr);
		
//		int[][] arr = { {0, 0, 1, 0}, {1, 0, 0, 0}, {0, 0, 0, 0}, {1, 0, 1, 0} };
//		exitPoint(arr);
	}

	public static int[][] takeInput() {
		System.out.println("Rows?");
		int rows = scn.nextInt();
		
		int[][] arr = new int[rows][];
		for(int row = 0; row < arr.length; row++){
			System.out.println("Columns?");
			int cols = scn.nextInt();
			
			arr[row] = new int[cols];
			for(int col = 0; col < arr[row].length; col++){
				System.out.println("Cell [" + row + ", " + col + "]?");
				arr[row][col] = scn.nextInt();
			}
		}
		
		return arr;
	}

	public static void display(int[][] arr) {
		if(arr == null){
			System.out.println(arr);
			return;
		}
		
		for (int row = 0; row < arr.length; row++) {
			for (int col = 0; col < arr[row].length; col++) {
				System.out.print(arr[row][col] + "\t");
			}
			System.out.println();
		}
	}

	public static void wavedisplay(int[][] arr) {
		for(int col = 0; col < arr[0].length; col++){
			if(col % 2 == 0){
				for(int row = 0; row < arr.length; row++){
					System.out.println(arr[row][col]);
				}
			} else {
				for(int row = arr.length - 1; row >= 0; row--){
					System.out.println(arr[row][col]);
				}
			}
		}
	}

	public static int[][] multiply(int[][] one, int[][] two){
		int r1 = one.length;
		int c1 = one[0].length;
		int r2 = two.length;
		int c2 = two[0].length;
		
		if(c1 != r2){
			return null;
		}
		
		int cd = r2;
		int[][] rv = new int[r1][c2];
		
		for (int row = 0; row < rv.length; row++) {
			for (int col = 0; col < rv[row].length; col++) {
				int sum = 0;
				
				for(int i = 0; i < cd; i++){
					sum = sum + one[row][i] * two[i][col];
				}
				
				rv[row][col] = sum;
			}
		}
		
		return rv;
	}

	public static void spiralDisplay(int[][] arr){
		int colmin = 0;
		int colmax = arr[0].length - 1;
		int rowmin = 0;
		int rowmax = arr.length - 1;
		int nel = arr.length * arr[0].length;
		int counter = 1;
		
		while(counter <= nel){
			// colmin (rowmin to rowmax)
			for(int row = rowmin; counter <= nel && row <= rowmax; row++){
				System.out.print(arr[row][colmin] + "\t");
				counter++;
			}
			colmin++;
			
			// rowmax (colmin to colmax)
			for(int col = colmin; counter <= nel && col <= colmax; col++){
				System.out.print(arr[rowmax][col] + "\t");
				counter++;
			}
			rowmax--;
			
			// colmax (rowmax to rowmin)
			for(int row = rowmax; counter <= nel && row >= rowmin; row--){
				System.out.print(arr[row][colmax] + "\t");
				counter++;
			}
			colmax--;
			
			// rowmin (colmax to colmin)
			for(int col = colmax; counter <= nel && col >= colmin; col--){
				System.out.print(arr[rowmin][col] + "\t");
				counter++;
			}
			rowmin++;
		}
	}

	public static void exitPoint(int[][] arr){
		int dir = 0; // 0 is for east, 1 is for south, 2 is for west and 3 is for north
		int row = 0, col = 0;
		
		while(true){
			dir = (dir + arr[row][col]) % 4;
			
			if(dir == 0){
				col++;
				if(col == arr[0].length){
					System.out.println(row + " " + (arr[0].length - 1));
					break;
				}
			} else if(dir == 1){
				row++;
				if(row == arr.length){
					System.out.println(arr.length - 1 + " " + col);
					break;
				}
			} else if(dir == 2){
				col--;
				if(col == -1){
					System.out.println(row + " " + 0);
					break;
				}
			} else {
				row--;
				if(row == -1){
					System.out.println(0 + " " + col);
					break;
				} 
			}
		}
		
		
	}

	public static void spiralDisplay2(int[][] arr){
		int rowMin = 0;
		int rowMax = arr.length - 1;
		int colMin = 0;
		int colMax = arr[0].length - 1;
		
		int row = rowMin, col = colMin;
		int dir = 0; // (0 for south, 1 for east, 2 for north, 3 for west)
		int count = 1;
		int nel = arr.length * arr[0].length;
		
		while(count <= nel){
			System.out.println(arr[row][col]);
			count++;
			
			if(dir == 0){
				row++;
				if(row == rowMax){
					dir++;
				}
			} else if(dir == 1){
				col++;
				if(col == colMax){
					dir++;
				}
			} else if(dir == 2){
				row--;
				if(row == rowMin){
					dir++;
				}
			} else {
				col--;
				if(col == colMin){
					dir = 0;
					
					rowMin++;
					colMin++;
					rowMax--;
					colMax--;
					
					row = rowMin;
					col = colMin;
				}
			}
		}
	}
}
