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

        List<Integer> ints = new ArrayList<>();
        ints.add(1);
        ints.add(2);
        ints.add(3);
        
        // animalSoundsBad(animals);
        // animalSoundsBad(cats); does not work because List<Cat> /= List<Animal> 
        animalSounds(animals);
        animalSounds(cats);
        // animalSounds(ints); does not work because integers are not a subclass of Animals
    }

    /*
    Does not allow us to pass List<Cat>
    public static void animalSoundsBad(List<Animal> animals) {
        for(int i = 0; i < animals.size(); i++) {
            Animal a = animals.get(i);
            System.out.println(a.getName() + ", who is a " + a.getBreed() + ", makes the sound " + a.sound());
        }
    }
    */

    /*
    Not valid syntax in Java
    public static <T> void animalSounds1(List<T extends Animal> animals) {
        for(int i = 0; i < animals.size(); i++) {
            System.out.println(animals.get(i).sound());
        }
    }*/

    public static void animalSounds(List<? extends Animal> animals) {
        for(int i = 0; i < animals.size(); i++) {
            Animal a = animals.get(i);
            System.out.println(a.getName() + ", who is a " + a.getBreed() + ", makes the sound " + a.sound());
        }
    }
}
