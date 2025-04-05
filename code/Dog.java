public class Dog extends Animal{

    public Dog(String name, String breed) {
        super(name, breed);
    }

    @Override
    public String sound() {
        return "Woof";
    }
    
}
