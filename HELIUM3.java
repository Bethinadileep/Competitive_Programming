/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) 
	{
		// your code goes here
		Scanner obj = new Scanner(System.in);
		int t = obj.nextInt();
		int a,b,x,y;
		while(t != 0) {
		    a = obj.nextInt();
		    b = obj.nextInt();
		    x = obj.nextInt();
		    y = obj.nextInt();
		    if((x*y) >= (a*b)){
		        System.out.println("Yes");
		    }
		    else{
		        System.out.println("No");
		    }
		    t--;
		}
	}
}
