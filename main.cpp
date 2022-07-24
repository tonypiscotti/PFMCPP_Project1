#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates camelCase


//  1)
//  Noun: ball
//  action 1: The ball bounces
ball.bounce();
//  action 2: The ball rolls
ball.roll();
//  action 3: The ball spins counter clockwise
ball.spinCounterClockwise();

//  2)
//  Noun: gate
//  action 1: The gate opens
gate.open();
//  action 2: The gate closes
gate.close();
//  action 3: The gate locks
gate.lock();

//  3)
//  Noun: radio
//  action 1: The radio starts up
radio.startUp();
//  action 2: The radio shuts down
radio.shutDown();
//  action 3: The radio plays sound
radio.playSound();

//  4)
//  Noun: person
//  action 1: This person hums
person.hum();
//  action 2: This person laughs
person.laugh();
//  action 3: This person walks backwards
person.walkBackwards();

//  5)
//  Noun: airplane
//  action 1: The airplane ascends
airplane.ascend();
//  action 2: The airplane descends
airplane.descend();
//  action 3: The airplane deploys its landing gear
airplane.deployLandingGear();

//  6)
//  Noun: scene
//  action 1: The scene starts
scene.start();
//  action 2: The scene pauses 
scene.pause();
//  action 3: The scene stops
scene.stop();

//  7)
//  Noun: cat
//  action 1: The cat meows
cat.meow();
//  action 2: The cat scratches
cat.scratch();
//  action 3: The cat eats
cat.eat();

//  8)
//  Noun: phone
//  action 1: The phone rings
phone.ring();
//  action 2: The phone plays a dial tone
phone.playDialTone();
//  action 3: The phone disconnects
phone.disconnect();

//  9)
//  Noun: news
//  action 1: The news article displays a headline
news.displayHeadline();
//  action 2: The news article display a sub-headline
news.displaySubheadline();
//  action 3: The news article dislplays main body content
news.displayBodyContent();

//  10)
//  Noun: employee
//  action 1: The employee clocks in
employee.clockIn();
//  action 2: The employee takes a break
employee.takeBreak();
//  action 3: The employee clocks out
employee.clockOut();



#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
