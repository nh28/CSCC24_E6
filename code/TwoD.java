import java.util.List;

public class TwoD<T>
{
    public List<T> x;
    public List<T> y;
    TwoD(List<T> val1, List<T> val2)
    {
        x = val1;
        y = val2;
    }
    public void swap()
    {
        List<T> temp = x;
        x = y;
        y = temp;
    }
    public void replacex(List<T> newx){
        x = newx;
    }
}