package june5;

import java.util.Arrays;
import java.util.Scanner;

public class ArrayOps {
	public static Scanner scn = new Scanner(System.in);

	public static void main(String[] args) {
		int[] arr = takeInput();
//		display(arr);
//		System.out.println(max(arr));
//		System.out.println(linearSearch(arr, 55));
//		System.out.println(linearSearch(arr, 213890123));
		
//		display(arr);
//		reverse(arr);
//		display(arr);
		
//		display(arr);
//		int[] inv = inverse(arr);
//		display(inv);
		
//		display(arr);
//		int[] rot = rotate(arr, -382);
//		display(rot);
		
//		System.out.println(binarySearch(arr, 75));
		
		display(arr);
		insertionSort(arr);
		display(arr);
	}

	public static void reverse(int[] arr) {
		int li = 0, ri = arr.length - 1;
		
		while(li < ri){
			int temp = arr[li];
			arr[li] = arr[ri];
			arr[ri] = temp;
			
			li++;
			ri--;
		}
	}

	public static int[] takeInput() {
		System.out.println("Size of arr?");
		int n = scn.nextInt();

		int[] rv = new int[n];
		for (int i = 0; i < rv.length; i++) {
			System.out.println("Enter value of " + i + "th element");
			rv[i] = scn.nextInt();
		}

		return rv;
	}

	public static void display(int[] arr) {
		for (int val : arr) {
			System.out.print(val + " ");
		}
		System.out.println("END");
	}

	public static int max(int[] arr) {
		int max = arr[0];

		for (int i = 1; i < arr.length; i++) {
			if (arr[i] > max) {
				max = arr[i];
			}
		}

		return max;
	}

	public static int linearSearch(int[] arr, int data) {
		for (int i = 0; i < arr.length; i++) {
			if (arr[i] == data) {
				return i;
			}
		}

		return -1;
	}

	public static int[] inverse(int[] arr){
		int[] inv = new int[arr.length];
		
		for(int i = 0; i < arr.length; i++){
			inv[arr[i]] = i;
		}
		
		return inv;
	}
	
	public static int[] rotate(int[] arr, int k){
		int[] rot = new int[arr.length];
		
		k = k % arr.length;
		
		if(k < 0){
			k = k + arr.length;
		}
		
		int rotidx = 0;
		for(int i = arr.length - k; i < arr.length; i++){
			rot[rotidx] = arr[i];
			rotidx++;
		}
		
		for(int i = 0; i <= arr.length - 1 - k; i++){
			rot[rotidx] = arr[i];
			rotidx++;
		}
		
		return rot;
	}

	public static int binarySearch(int[] arr, int data) {
		int left = 0, right = arr.length - 1;
		
		while(left <= right){
			int mid = (left + right) / 2;
			
			if(data > arr[mid]){
				left = mid + 1;
			} else if(data < arr[mid]){
				right = mid - 1;
			} else {
				return mid;
			}
		}
		
		return -1;
	}
	
	public static void bubbleSort(int[] arr){
		int counter = 1;
		
		while(counter <= arr.length - 1){
			for(int i = 0; i < arr.length - counter; i++){
				if(arr[i] > arr[i + 1]){
					int temp = arr[i];
					arr[i] = arr[i + 1];
					arr[i + 1] = temp;
				}
			}
			
			counter++;
		}
	}
	
	public static void selectionSort(int[] arr){
		int counter = 1;
		
		while(counter <= arr.length - 1){
			for(int i = counter; i < arr.length; i++){
				if(arr[counter - 1] > arr[i]){
					int temp = arr[counter - 1];
					arr[counter - 1] = arr[i];
					arr[i] = temp;
				}
			}
			
			counter++;
		}
	}
	
	public static void insertionSort(int[] arr){
		int counter = 1;
		
		while(counter <= arr.length - 1){
			for(int i = counter; i > 0; i--){
				if(arr[i - 1] > arr[i]){
					int temp = arr[i - 1];
					arr[i - 1] = arr[i];
					arr[i] = temp;
				} else {
					break;
				}
			}
			
			counter++;
		}
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
}
