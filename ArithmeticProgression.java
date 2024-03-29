import java.util.*;
import java.util.regex.*;
import java.text.*;
import java.math.*;


public class ArithmeticProgression
{
	public double minCommonDifference(int a0, int[] seq)
	{
		//seq = a0+i*d
		long long d1 = 0;
		long long d2 = 1;
		for(int i=0;i<seq.size();i++)
		{
		  if(d1*(i+1) < d2*(seq[i]-a0))
		  {
		  d1 = seq[i]-a0;
		  d2 = i+1;
		  }
		}
		
		for(int i = 0; i < seq.size(); ++i)
    if(seq[i] != a0 + (i + 1) * d1 / d2)
      return -1;
  return d1 / double(d2);
		
		
		
	}
	
	// BEGIN KAWIGIEDIT TESTING
	// Generated by KawigiEdit 2.1.8 (beta) modified by pivanof
	private static boolean KawigiEdit_RunTest(int testNum, int p0, int[] p1, boolean hasAnswer, double p2) {
		System.out.print("Test " + testNum + ": [" + p0 + "," + "{");
		for (int i = 0; p1.length > i; ++i) {
			if (i > 0) {
				System.out.print(",");
			}
			System.out.print(p1[i]);
		}
		System.out.print("}");
		System.out.println("]");
		ArithmeticProgression obj;
		double answer;
		obj = new ArithmeticProgression();
		long startTime = System.currentTimeMillis();
		answer = obj.minCommonDifference(p0, p1);
		long endTime = System.currentTimeMillis();
		boolean res;
		res = true;
		System.out.println("Time: " + (endTime - startTime) / 1000.0 + " seconds");
		if (hasAnswer) {
			System.out.println("Desired answer:");
			System.out.println("\t" + p2);
		}
		System.out.println("Your answer:");
		System.out.println("\t" + answer);
		if (hasAnswer) {
			res = answer == answer && Math.abs(p2 - answer) <= 1e-9 * Math.max(1.0, Math.abs(p2));
		}
		if (!res) {
			System.out.println("DOESN'T MATCH!!!!");
		} else if ((endTime - startTime) / 1000.0 >= 2) {
			System.out.println("FAIL the timeout");
			res = false;
		} else if (hasAnswer) {
			System.out.println("Match :-)");
		} else {
			System.out.println("OK, but is it right?");
		}
		System.out.println("");
		return res;
	}
	public static void main(String[] args) {
		boolean all_right;
		all_right = true;
		
		int p0;
		int[] p1;
		double p2;
		
		// ----- test 0 -----
		p0 = 0;
		p1 = new int[]{6,13,20,27};
		p2 = 6.75D;
		all_right = KawigiEdit_RunTest(0, p0, p1, true, p2) && all_right;
		// ------------------
		
		// ----- test 1 -----
		p0 = 1;
		p1 = new int[]{2,3,4,5,6};
		p2 = 1.0D;
		all_right = KawigiEdit_RunTest(1, p0, p1, true, p2) && all_right;
		// ------------------
		
		// ----- test 2 -----
		p0 = 3;
		p1 = new int[]{};
		p2 = 0.0D;
		all_right = KawigiEdit_RunTest(2, p0, p1, true, p2) && all_right;
		// ------------------
		
		// ----- test 3 -----
		p0 = 3;
		p1 = new int[]{3,3,3,3,4};
		p2 = 0.2D;
		all_right = KawigiEdit_RunTest(3, p0, p1, true, p2) && all_right;
		// ------------------
		
		// ----- test 4 -----
		p0 = 1;
		p1 = new int[]{-3};
		p2 = -1.0D;
		all_right = KawigiEdit_RunTest(4, p0, p1, true, p2) && all_right;
		// ------------------
		
		// ----- test 5 -----
		p0 = 0;
		p1 = new int[]{6,14};
		p2 = -1.0D;
		all_right = KawigiEdit_RunTest(5, p0, p1, true, p2) && all_right;
		// ------------------
		
		if (all_right) {
			System.out.println("You're a stud (at least on the example cases)!");
		} else {
			System.out.println("Some of the test cases had errors.");
		}
	}
	// END KAWIGIEDIT TESTING
}
//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!
