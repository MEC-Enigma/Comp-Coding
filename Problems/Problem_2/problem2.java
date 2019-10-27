import java.util.Scanner;


class Main{
	static double rec(double n){
		if(n == 1 || n == 2){
			return n-1;
		}
		else{
			return (Math.pow(rec(n-1), (n-1)) + Math.pow(rec(n-2), (n-2)));
		}
	}


    public static void main(String args[]){
    	Scanner myObj = new Scanner(System.in);
    	System.out.println("Enter n");
	
    	double n = myObj.nextDouble();
    	System.out.println(n);
    	System.out.println(rec(n));
	
    }
}