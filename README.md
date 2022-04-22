# C++ - modules

C++ - modules серия задач для изучения различных аспектов языка C++ и ООП.

## Ссылки на другие модули

0. [CPP module 00](https://github.com/vrivka/cpp_00)
1. [CPP module 01](https://github.com/vrivka/cpp_01)
2. [CPP module 02](https://github.com/vrivka/cpp_02)
3. [CPP module 03](https://github.com/vrivka/cpp_03)
4. CPP module 04
5. [CPP module 05](https://github.com/vrivka/cpp_05)
6. [CPP module 06](https://github.com/vrivka/cpp_06)
7. [CPP module 07](https://github.com/vrivka/cpp_07)
8. [CPP module 08](https://github.com/vrivka/cpp_08)

# C++ - Module 04

## Описание модуля

Этот модуль разработан, чтобы помочь понять полиморфизм подтипов, абстрактные классы и интерфейсы в C++.

## Задачи

### Exercise 00: Polymorphism

Начнем с реализации простого базового класса под названием `Animal`. Он имеет один `private` атрибут:
- `type` - `std::string`;

Реализовать класс `Dog`, который наследуется от `Animal`, и класс Cat, также наследуемый от `Animal`.

Эти два производных класса должны установить свое поле `type` в зависимости от их имени. Затем `type` собаки будет инициализирован как `"Dog"`, а тип кошки будет инициализирован как `"Cat"`. Тип класса `Animal` можно оставить пустым или установить любое значение на выбор.

Каждое животное должно иметь возможность использовать функцию-член `makeSound()`.

Он напечатает соответствующий животному звук.

Также реализуем класс `WrongCat`, наследуемый от класса `WrongAnimal`. Если заменить `Animal` и `Cat` на "неправильных", `WrongCat` должен выдать звук `WrongAnimal`.

Конструкторы и деструкторы каждого класса должны отображать определенные сообщения.

### Exercise 01: I don’t want to set the world on fire

Требуется реализовать класс `Brain`. Он содержит массив из `100` `std::string`, называемых `ideas`.

Таким образом, у `Dog` и `Cat` будет собственный `private` атрибут `Brain*`.

После построения `Dog` и `Cat` создадут свой `Brain`, используя `new Brain()`.

При уничтожении `Dog` и `Cat` удалят свой `Brain`.

В `main` функции нужно создать и заполнить массив объектов `Animal`. Половина из них будет объектами `Dog`, а другая половина — объектами `Cat`. В конце выполнения программы нужно выполнить цикл по этому массиву и удалить каждое животное. Нужно удалить непосредственно `Dog` и `Cat` как `Animal`.

Не должно быть утечек памяти.

Копия `Dog` и `Cat` должны быть глубокими копиями!

Конструкторы и деструкторы каждого класса должны отображать определенные сообщения.

### Exercise 02: Abstract class

Создание объектов `Animal` не имеет смысла. Это правда, они не издают ни звука!

Чтобы избежать возможных ошибок, класс `Animal` по умолчанию не должен создавать экземпляры. Нужно исправить класс `Animal`, чтобы никто не мог создать его экземпляр. Все остальное должно работать как прежде.

### Exercise 03: Interface & recap

Интерфейсов не существует в C++98 (даже в C++20). Однако чистые абстрактные классы обычно называют интерфейсами. Таким образом, в этом последнем упражнении попробуем реализовать интерфейсы.

Требуется завершить определение следующего класса `AMateria` и реализовать необходимые функции-члены.

```C++
class AMateria
{
    protected:
        [...]
    public:
        AMateria(std::string const & type);
        [...]
        std::string const & getType() const; //Returns the materia type
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};
```

И также производные классы материалов `Ice` и `Cure`. Установить их `type` в нижнем регистре соответственно именам их кассов («ice» для `Ice`, «cure» для `Cure`). Их функция-член `clone()` вернет новый экземпляр того же типа.

Функция члена `use(ICharacter&)` будет отображать:
- `Ice`: `* shoots an ice bolt at <name> *`
- `Cure`: `* heals <name>’s wounds *`

`<name>` — это имя Персонажа, переданное в качестве параметра.

Также написать конкретный класс `Character`, который будет реализовывать следующий интерфейс:

```C++
class ICharacter
{
    public:
        virtual ~ICharacter() {}
        virtual std::string const & getName() const = 0;
        virtual void equip(AMateria* m) = 0;
        virtual void unequip(int idx) = 0;
        virtual void use(int idx, ICharacter& target) = 0;
};
```

В инвентаре Персонажа 4 слота, что означает максимум 4 Материи. Инвентарь пуст при создании. Материя экипируется в первый свободный слот. То есть в таком порядке: от слота 0 до слота 3. В случае, если попытаться добавить Материю в полный инвентарь, или использовать/снять несуществующую Материю, ничего не делать. Функция-член `unequip()` НЕ ДОЛЖНА удалять Материю!

Функция-член `use(int, ICharacter&)` должна будет использовать Материю в слоте `[idx]` и передать целевой параметр функции `AMateria::use`.

У Персонажа должен быть конструктор, принимающий его имя в качестве параметра. Любая копия (использующая конструктор копирования или оператор присваивания) персонажа должна быть глубокой. Во время копирования, Материи Персонажа должны быть удалены, прежде чем новые будут добавлены в его инвентарь. Разумеется, Материи должны быть удалены при уничтожении Персонажа.

Написать конкретный класс `MateriaSource`, который будет реализовывать следующий интерфейс:

```C++
class IMateriaSource
{
    public:
        virtual ~IMateriaSource() {}
        virtual void learnMateria(AMateria*) = 0;
        virtual AMateria* createMateria(std::string const & type) = 0;
};
```

- `learnMateria(AMateria*)`
  Копирует Материю, переданную в качестве параметра, и сохраняет ее в памяти, чтобы ее можно было клонировать позже. Как и Персонаж, Источник Материи может знать не более 4 Материй. Они необязательно уникальны.
- `createMateria(std::string const &)`
  Возвращает новую Материю. Последний является копией Материи, ранее изученной Материей-Источником, тип которой равен типу, переданному в качестве параметра. Возвращает `null`, если тип неизвестен.

В двух словах, `MateriaSource` должен уметь изучать «шаблоны» Материй, чтобы создавать их по мере необходимости. Затем сгенерировать новую Материю, используя только строку, идентифицирующую ее тип.

###### Навигация по модулям
[<<<<](https://github.com/vrivka/cpp_03)
[00](https://github.com/vrivka/cpp_00) |
[01](https://github.com/vrivka/cpp_01) |
[02](https://github.com/vrivka/cpp_02) |
[03](https://github.com/vrivka/cpp_03) |
04 |
[05](https://github.com/vrivka/cpp_05) |
[06](https://github.com/vrivka/cpp_06) |
[07](https://github.com/vrivka/cpp_07) |
[08](https://github.com/vrivka/cpp_08) |
[>>>>](https://github.com/vrivka/cpp_05)