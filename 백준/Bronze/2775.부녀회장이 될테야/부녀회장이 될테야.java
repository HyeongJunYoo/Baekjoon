import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        List<Integer> result = new ArrayList<>();
        Scanner scanner = new Scanner(System.in);

        int t = scanner.nextInt();
        int[][] units;

        for(int i = 0; i < t; i ++){
            int k = scanner.nextInt();
            int n = scanner.nextInt();

            units = new int[k][n];

            for(int l = 0; l < k; l++){
                for(int j = 0; j < n; j++){
                    if(l == 0){
                        units[0][j] = j + 1;
                    }else{
                        if(j == 0){
                            units[l][j] = 1;
                        }else{
                            units[l][j] = units[l - 1][j] + units[l][j -1];
                        }
                    }
                }
            }

            int sum = 0;
            for(int a = 0; a < n; a++){
                sum += units[k - 1][a];
            }
            result.add(sum);
        }

        for (int r: result) {
            System.out.println(r);
        }
    }

}
