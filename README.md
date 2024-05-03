# Design Pattern - Adapter pattern

## Description

![dp-adapter](https://github.com/jiji-thecat/dp-adapter/assets/104809324/2f8e0b62-2de9-4ea2-a5a7-43ed2c4eb375)

The Adapter pattern is a design pattern used to make two incompatible interfaces compatible. It allows objects with incompatible interfaces to work together. For example, let's consider a scenario where we have a `Cat` class with a method `makeSound()` that returns "meow", and a `Dolphin` class with a method `ultrasound()` that returns some kind of sound. Although the `Dolphin` class doesn't have an `animalSound()` method, the `ultrasound()` method can be seen as producing a sound from an animal's perspective. Users expect that when they call the `animalSound()` method, they get some kind of value from both classes. By using the Adapter pattern, we can achieve this compatibility.

To implement this pattern, we define an interface called `AdapterInterface` with the `animalSound()` method as a virtual function. Then, we implement a `DolphinAdapter` class which inherits both the `Dolphin` class and the `AdapterInterface`. Since the `DolphinAdapter` class implements the `AdapterInterface`, it must provide an implementation for the `animalSound()` method. Here, we can call the `ultrasound()` method. Now, users can call the `animalSound()` method on both classes and receive the expected sound - either the cat's meow or the dolphin's ultrasound.

### Class diagram

![class diagram](https://github.com/jiji-thecat/dp-adapter/assets/104809324/dc985fef-ec13-4690-abdc-3c3131703d86)

For the scenario described above:

- Adapter: `DolphinAdapter` class.
- Adaptee: `Dolphin` class.
- Target: `AdapterInterface`.

## How to Install and Run

Import this project as a QT project.

## How to Use This App

![dp-adapter](https://github.com/jiji-thecat/dp-adapter/assets/104809324/2f8e0b62-2de9-4ea2-a5a7-43ed2c4eb375)

This application features interactions between a human and an alien. The alien does not speak human language initially, but if the user clicks the `Get close with Alien` button at the bottom, the alien will reply in human language. In the code, I've implemented the `Alien` class using the Adapter pattern, triggered when the `Get close with Alien` button is pressed.

## License

**MIT License**

Copyright © 2024 jiji

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation, the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

\*\*THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
