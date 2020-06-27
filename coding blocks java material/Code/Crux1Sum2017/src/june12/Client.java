package june12;

public class Client {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int[] one = {9, 9, 9, 9};
		int[] two = {9, 9, 9, 9, 9};
		sum(one, two);
		
	}
	
	public static int[] sum(int[] one, int[] two){
		int[] sum = new int[one.length > two.length? one.length + 1: two.length + 1];
		
		int i = one.length - 1;
		int j = two.length - 1;
		int k = sum.length - 1;
		int carry = 0;
				
		while(k >= 0){
			int s = carry;
			
			if(i >= 0){
				s += one[i];
			}
			
			if(j >= 0){
				s += two[j];
			}
			
			sum[k] = s % 10;
			carry = s / 10;
			
			i--;
			j--;
			k--;
		}
		
		
		for(int idx = 0; idx < sum.length; idx++ ){
			if(sum[idx] == 0 && idx == 0){
				continue;
			}
			System.out.println(sum[idx]);
		}
		
		return sum;
	}

}
