import java.util.ArrayList;
import java.util.List;


public class Inheritence {
    public static void main(String[] args) {
        Dog indigo = new Dog("Indigo","labradoodle");
        Cat louis = new Cat("Louis", "tuxedo cat");
        Cat jellybean = new Cat("Jellybean", "tabby cat");
        List<Animal> animals = new ArrayList<>();
        animals.add(indigo);
        animals.add(louis);
        animals.add(jellybean);
        List<Cat> cats = new ArrayList<>();
        cats.add(louis);
        cats.add(jellybean);
        
        animalSounds(animals);
        // animalSounds(cats); does not work because List<Cat> /= List<Animal> 
        animalSounds1(animals);
        animalSounds1(cats);
    }

    public static void animalSounds(List<Animal> animals) {
        for(int i = 0; i < animals.size(); i++) {
            Animal a = animals.get(i);
            System.out.println(a.getName() + ", who is a " + a.getBreed() + ", makes the sound " + a.sound());
        }
    }

    /*
    Not valid syntax in Java
    public static <T> void animalSounds1(List<T extends Animal> animals) {
        for(int i = 0; i < animals.size(); i++) {
            System.out.println(animals.get(i).sound());
        }
    }*/

    public static void animalSounds1(List<? extends Animal> animals) {
        for(int i = 0; i < animals.size(); i++) {
            Animal a = animals.get(i);
            System.out.println(a.getName() + ", who is a " + a.getBreed() + ", makes the sound " + a.sound());
        }
    }
}
