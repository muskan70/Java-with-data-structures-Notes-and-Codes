package june5;

public class Asgn3Q16 {

	public static void main(String[] args) {
//		double d = 3.2;
//		double var = 0.1;
//		d = d + var;
//		System.out.println(d);
//		
		
//		System.out.println(Math.round(4.3580000000000005 * 1000) / 1000.0);
		
		int n = 26;
		int p = 3;
		
		double sqrt = 0;
		double inc = 1;
		
		int imult = 1;
		double dmult = 1.0;
		
		int counter = 0;
		while(counter <= p){
			while (sqrt * sqrt <= n) {
//				System.out.println(Math.round(sqrt * imult) / dmult);
				sqrt = sqrt + inc;
			}
			
			sqrt = sqrt - inc;
			inc = inc / 10;
			imult = imult * 10;
			dmult = dmult * 10.0;
			
			counter++;
		}
		
//		imult /= 10;
//		dmult /= 10.0;
//		System.out.println(Math.round(sqrt * imult) / dmult);
	}

}
