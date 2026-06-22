[Play "Kill the Beetle" on Scratch!](https://scratch.mit.edu/projects/1331953921)

Overview
"Kill the Beetle" is a 2D arcade-style game where the player controls a hunter to defeat falling enemies. The primary objective is to get the highest score possible before 20 beetles drop from the top of the screen. 


Controls:
Movement: Use the Left and Right arrow keys to move the hunter.
Action: Press the Spacebar or up arrow to swing your sword and attack.
Start: Press SPACE to begin the round from the main menu.


What I Learned
By building this project, I applied several fundamental programming concepts and computational thinking skills:


Variables to Track State: I created and managed variables like `Score` and `Beetle dropped` to track the player's progress and determine when the game round should end.

Events & Broadcasting: I utilized Scratch's broadcasting system to communicate between different sprites. For example, using `broadcast start round` and `broadcast update sword` allowed the Menu, Hunter, Sword, and Beetle sprites to trigger actions at the exact right moments.

Complex Conditionals (Boolean Logic): I implemented advanced collision detection using `if` blocks and the `and` operator. To register a successful hit, the game checks if the Beetle is touching the Sword *and* if the Sword's costume is actively set to `attacking`.

Abstraction with Custom Blocks: To keep my code organized and DRY (Don't Repeat Yourself), I defined custom blocks (functions) like `Teleport`, `Reset`, and `Sword Control`. This allowed me to reuse complex logic without cluttering my workspace.

Infinite Loops: I used `forever` loops to continuously run game mechanics in the background, such as moving the beetle down the Y-axis and constantly checking if the 20-beetle limit had been reached to end the game.
