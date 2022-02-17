import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.List;
import java.util.Scanner;


public class Main {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		
		String size = input.nextLine();
		List<String> words = new ArrayList<String>();
		List<String> result = new ArrayList<String>();
		
		for(int i = 0; i < Integer.parseInt(size); i++) {
			words.add(input.nextLine());
		}
		
		for(String x: words) {
			if(!result.contains(x))
				result.add(x);
		}
		
		Collections.sort(result, new Comparator<String>() {
			@Override
			public int compare(String s1, String s2) {
				int result = s1.length() - s2.length();
				if(result == 0)
					return s1.compareTo(s2);
				return result;
			}
		});
		for(String x: result) {
			System.out.println(x);
		}
	}

}
