package june15;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;

public class A6Q9 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Integer[] arr = { 10, 2, 3, 4, 5, 7, 8 };
		printQuartet(arr, 23);
	}

	public static int lastIndex(int[] arr, int vidx, int data) {
		if (vidx == arr.length) {
			return -1;
		}

		int foundAfterYou = lastIndex(arr, vidx + 1, data);

		if (foundAfterYou == -1) {
			if (arr[vidx] == data) {
				return vidx;
			} else {
				return -1;
			}
		} else {
			return foundAfterYou;
		}
	}

	public static void printQuartet(Integer[] arr, int tar) {
		Pair[] allPairs = new Pair[(arr.length * (arr.length - 1)) / 2];
		int idx = 0;
		for (int i = 0; i < arr.length; i++) {
			for (int j = i + 1; j < arr.length; j++) {
				allPairs[idx] = new Pair(arr[i] + arr[j], i, j);
				idx++;
			}
		}

		Arrays.sort(allPairs);
		HashMap<FinalPair, Boolean> map = new HashMap<>();
		
		for (int i = 0; i < allPairs.length; i++) {
			int nt = tar - allPairs[i].sum;

			int cidx = Arrays.binarySearch(allPairs, new Pair(nt, 0, 0));
			if (cidx >= 0 && 
				(allPairs[i].i != allPairs[cidx].i) && 
				(allPairs[i].i != allPairs[cidx].j) && 
				(allPairs[i].j != allPairs[cidx].i) && 
				(allPairs[i].j != allPairs[cidx].j)) {
				FinalPair fp = new FinalPair(arr[allPairs[i].i], arr[allPairs[i].j], 
											 arr[allPairs[cidx].i], arr[allPairs[cidx].j]);
				map.put(fp, true);
			}
		}
		
		System.out.println(map.keySet());
	}

	private static class FinalPair {
		Integer[] arr;
		String hashed = "";

		public FinalPair(int n1, int n2, int n3, int n4){
			this.arr = new Integer[4];
			this.arr[0] = n1;
			this.arr[1] = n2;
			this.arr[2] = n3;
			this.arr[3] = n4;
			
			Arrays.sort(this.arr);
			for(int val: arr){
				hashed += val + " ";
			}
		}
		
		public int hashCode() {
			return hashed.hashCode();
		}
		
		public boolean equals(Object other){
			FinalPair op = (FinalPair)other;
			return hashed.equals(op.hashed);
		}
		
		public String toString() {
			return hashed + "\n";
		}
	}

	private static class Pair implements Comparable<Pair> {
		Integer sum;
		Integer i;
		Integer j;

		Pair(Integer sum, Integer i, Integer j) {
			this.sum = sum;
			this.i = i;
			this.j = j;
		}

		@Override
		public int compareTo(Pair o) {
			// TODO Auto-generated method stub
			return this.sum - o.sum;
		}

		public String toString() {
			return "[" + i + "-" + j + "]";
		}

	}
}
