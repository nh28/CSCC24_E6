public abstract class Animal{
    private String name;
    private String breed;

    public Animal(String name, String breed) {
        this.name = name;
        this.breed = breed;
    }

    public abstract String sound();

    public String getName(){
        return name;
    }

    public String getBreed() {
        return breed;
    }
}
