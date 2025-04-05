import java.util.Arrays;
import java.util.List;

public class GenericsFunctions{
    public static void main(String[] args) {
        List<String> string1 = Arrays.asList(new String[] { "aaa", "bbb", "ccc", "ddd" });
        List<Integer> int1 = Arrays.asList(new Integer[] { 1, 2, 3 });
        List<Integer> int2 = Arrays.asList(new Integer[] { 1, 2, 3, 4, 5 });

        System.out.println("Is the size of {1, 2, 3} bigger than {1, 2, 3, 4, 5}? " + demoGenerics(int1, int2));
        System.out.println("Is the size of {1, 2, 3, 4, 5} bigger than {\\\"aaa\\\", \\\"bbb\\\", \\\"ccc\\\", \\\"ddd\\\"}? " + demoGenerics(int2, string1));
    }


    public static <T, U> String demoGenerics(List<T> lst1, List<U> lst2) {
        if (lst1.size() > lst2.size()) {
            return "yes";
        } else {
            return "no";
        }
    }

    
}



