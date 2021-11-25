**Requirements**

**Introduction**

The project is titled as The Quiz Game and developed using C language. The Quiz Game is an indoor game which can be played by kids as well as adults. This game is for one player. The player can its general knowledge as well as this game can be used to enhance the knowledge of the player as it have the Highest score saving option.

**Advantages**

• Improved engagement with the players

• Players can improve their knowledge

• Increased productivity with relaxation

• Randomly generated questions makes it more interesting.

**Disadvantages**

• Only one players can play this game

**Cost and Features**

• Complexity

• Random Function values generation

• Finding the sum of the players score individually

**SWOT ANALYSIS**

• **Strengths:** Easy to use application. Random questions

• **Weakness:** Lack of graphical user interface(GUI) more than 1 players cannot play.

• **Opportunities:** This game is in demand GUI can be implemented.

• **Threats:** Best applications are available using different technologies and competition is high.

**4 W&#39;s and 1 H**

**Who** : Every person with electronic devices need games nowadays for refreshment and relaxing. So, anyone can play this game.

**What:** A game which can be used to check or enhance our general knowledge.

**When:** One can play this game whenever he/she is free and want some refreshment but also they want to do some productive work.

**Where** : It can be played by everyone and everywhere irrespective of their age.

**Detail Requirements**

**High Level Requirements**

**ID Description Status HR01** Main Menu Implemented

**HR02** Can be played by 1 player Implemented

**HR03** Random Questioning Implemented

**HR04** Graphical User Interface Future

**Low Level Requirements**

**ID: LR01**

Description: Main menu should consist 4 options asking for

1. New game
2. View highest score
3. Help for the Game
4. Quit

**ID: LR02**

Description: Storing the value of the highest score at the end of game.

## UML Diagrams

![use case diagram](https://user-images.githubusercontent.com/77190311/143044094-99c026dd-da71-4f42-8171-2251edfba35f.png)
![activity diagram](https://user-images.githubusercontent.com/77190311/143044123-0eaf181b-a1ab-4efc-a388-d947d7f0ebd1.png)

# Implementation
## Folder Structure
---
| Folder | Description                                  |
| ------ | -------------------------------------------- |
| inc    | All headers files                            |
| src    | Main source code                             |
| unity  | All unity files                              |
| test   | All source code and data for testing purpose |
| build  | Build output (not included in git)           |
## Manual
### Setup to run Project
- An integrated development environment (Suggesting Visual Studio Code).
- GCC compiler to compile the project.
- "make" to run the Makefile smoothly.
### Steps To run Project
1. First clone the repository from the Github.
2. Open the repository in an IDE (Suggesting Visual Studio Code).
3. The next step is to build the project with the help of make command :
   - make all
4. Next step is to run the project with help of make command :
   - make run
5. If you want to run the test cases then run the following command :
   - make test
6. Clean all executable files by following command :
6. Clean all executable files by the following command :
   - make clean

# Table no: High level test plan

| **Test ID** | **Description**                                              | **Exp I/P**                    | **Exp O/P**   | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|  ------------------------------|---------------|----------------|------------------|
|  H_01       |Check whether after correct answer score is incremented       |  add score after correct answer|score added    |score added     |Requirement based |
|  H_02       |Check whether score is incremented only after correct answer  |  a wrong answer                |score not added|score not added |Requirement based |

## Table no: Low level test plan
| **Test ID** | **Description**                                              | **Exp IN**   | **Exp OUT**               | **Actual Out**    |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------  |-------------              |----------------   |------------------|
|  L_01       |Check whether Highest score is shown correctly                |  show record |Highest score of all time  |Highest score shown|Requirement based |
|  L_02       |Check whether game starts on S key press                      |  s           |Game start                 |Game started       |Requirement based |
|  L_03       |Check whether user name is registered                         |  sukh        |sukh + Score to be stored  |sukh + Score stored|Requirement based |
