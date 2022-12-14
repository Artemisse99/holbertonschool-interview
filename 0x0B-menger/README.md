# 0x0B. Menger sponge
## Details
 By: Alexandre Gautier, Software Engineer at Holberton School Weight: 1Ongoing second chance project - startedOct 17, 2022 12:00 AM, must end byOct 24, 2022 12:00 AM An auto review will be launched at the deadline#### In a nutshell…
* Auto QA review:          0.0/10 mandatory      
* Altogether:         0.0%* Mandatory: 0.0%
* Optional: no optional tasks

 ![](https://holbertonintranet.s3.amazonaws.com/uploads/medias/2018/6/970692c4e47bd0546db8.jpg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOU5BHMTQX4%2F20221022%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20221022T024207Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=ecb93d34b975bc177f99b01fef8dc434d48e4cee95e25094788abde694ffb06c) 

## Requirements
### General
* Allowed editors:  ` vi ` ,  ` vim ` ,  ` emacs ` 
* All your files will be compiled on Ubuntu 14.04 LTS
* Your programs and functions will be compiled with  ` gcc 4.8.4 `  using the flags  ` -Wall `  ` -Werror `  ` -Wextra `  and  ` -pedantic ` 
* All your files should end with a new line
* Your code should use the  ` Betty `  style. It will be checked using [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl) 
 and [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl) 

* You are not allowed to use global variables
* No more than 5 functions per file
* In the following examples, the  ` main.c `  files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own  ` main.c `  files at compilation. Our  ` main.c `  files might be different from the one shown in the examples
* The prototypes of all your functions should be included in your header file called  ` menger.h ` 
* Don’t forget to push your header file
* All your header files should be include guarded
## Tasks
### 0. 2D Menger sponge
          mandatory         Progress vs Score           Score: 0.00% (Checks completed: 0.00%)         Task Body Write a function that draws a 2D Menger Sponge
* Prototype:  ` void menger(int level); ` 
* Where  ` level `  is the level of the Menger Sponge to draw
* If  ` level `  is lower than  ` 0 ` , your function must do nothing
* You’re allowed to use the  ` math `  library. Your program will be compiled using the  ` ld `  flag  ` -lm ` 
Format:
* First, read [Menger sponge](https://intranet.hbtn.io/rltoken/A8kvZblJqwPuQpMjO7ktfA) 

* Here, we will only draw a 2D version of the Menger sponge, but the principle is the same
* A level  ` N `  sponge is a 3x3 square of level  ` N-1 `  sponges, except for the center one, which is left empty
* A level 0 sponge is represented by the  ` # `  character
* Examples:* A level 0 sponge is a simple 1x1 square
* A level 1 sponge is a 3x3 square of level 0 sponges, except for the center one, which is left empty
* A level 2 sponge is a 3x3 square of level 1 sponges, except for the center one, which is left empty
* …

* TIP: The size of a level  ` N `  Menger sponge is calculated as follows:  ` 3^N ` 
```bash
alex@~/0x0B-menger$ cat 0-main.c 
#include <stdio.h>
#include <stdlib.h>

#include "menger.h"

/**
 * main - Entry point
 *
 * @ac: Arguments counter
 * @av: Arguments vector
 *
 * Return: EXIT_SUCCESS or EXIT_FAILURE
 */
int main(int ac, char **av)
{
    int level;

    if (ac < 2)
    {
        fprintf(stderr, "Usage: %s level\n", av[0]);
        return (EXIT_FAILURE);
    }

    level = atoi(av[1]);
    menger(level);

    return (EXIT_SUCCESS);
}
alex@~/0x0B-menger$ gcc -Wall -Wextra -Werror -pedantic -o 0-menger 0-menger.c 0-main.c -lm
alex@~/0x0B-menger$ ./0-menger 0
#
alex@~/0x0B-menger$ ./0-menger 1
###
# #
###
alex@~/0x0B-menger$ ./0-menger 2
#########
# ## ## #
#########
###   ###
# #   # #
###   ###
#########
# ## ## #
#########
alex@~/0x0B-menger$ ./0-menger 3
###########################
# ## ## ## ## ## ## ## ## #
###########################
###   ######   ######   ###
# #   # ## #   # ## #   # #
###   ######   ######   ###
###########################
# ## ## ## ## ## ## ## ## #
###########################
#########         #########
# ## ## #         # ## ## #
#########         #########
###   ###         ###   ###
# #   # #         # #   # #
###   ###         ###   ###
#########         #########
# ## ## #         # ## ## #
#########         #########
###########################
# ## ## ## ## ## ## ## ## #
###########################
###   ######   ######   ###
# #   # ## #   # ## #   # #
###   ######   ######   ###
###########################
# ## ## ## ## ## ## ## ## #
###########################
alex@~/0x0B-menger$ ./0-menger 4
#################################################################################
# ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## #
#################################################################################
###   ######   ######   ######   ######   ######   ######   ######   ######   ###
# #   # ## #   # ## #   # ## #   # ## #   # ## #   # ## #   # ## #   # ## #   # #
###   ######   ######   ######   ######   ######   ######   ######   ######   ###
#################################################################################
# ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## #
#################################################################################
#########         ##################         ##################         #########
# ## ## #         # ## ## ## ## ## #         # ## ## ## ## ## #         # ## ## #
#########         ##################         ##################         #########
###   ###         ###   ######   ###         ###   ######   ###         ###   ###
# #   # #         # #   # ## #   # #         # #   # ## #   # #         # #   # #
###   ###         ###   ######   ###         ###   ######   ###         ###   ###
#########         ##################         ##################         #########
# ## ## #         # ## ## ## ## ## #         # ## ## ## ## ## #         # ## ## #
#########         ##################         ##################         #########
#################################################################################
# ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## #
#################################################################################
###   ######   ######   ######   ######   ######   ######   ######   ######   ###
# #   # ## #   # ## #   # ## #   # ## #   # ## #   # ## #   # ## #   # ## #   # #
###   ######   ######   ######   ######   ######   ######   ######   ######   ###
#################################################################################
# ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## #
#################################################################################
###########################                           ###########################
# ## ## ## ## ## ## ## ## #                           # ## ## ## ## ## ## ## ## #
###########################                           ###########################
###   ######   ######   ###                           ###   ######   ######   ###
# #   # ## #   # ## #   # #                           # #   # ## #   # ## #   # #
###   ######   ######   ###                           ###   ######   ######   ###
###########################                           ###########################
# ## ## ## ## ## ## ## ## #                           # ## ## ## ## ## ## ## ## #
###########################                           ###########################
#########         #########                           #########         #########
# ## ## #         # ## ## #                           # ## ## #         # ## ## #
#########         #########                           #########         #########
###   ###         ###   ###                           ###   ###         ###   ###
# #   # #         # #   # #                           # #   # #         # #   # #
###   ###         ###   ###                           ###   ###         ###   ###
#########         #########                           #########         #########
# ## ## #         # ## ## #                           # ## ## #         # ## ## #
#########         #########                           #########         #########
###########################                           ###########################
# ## ## ## ## ## ## ## ## #                           # ## ## ## ## ## ## ## ## #
###########################                           ###########################
###   ######   ######   ###                           ###   ######   ######   ###
# #   # ## #   # ## #   # #                           # #   # ## #   # ## #   # #
###   ######   ######   ###                           ###   ######   ######   ###
###########################                           ###########################
# ## ## ## ## ## ## ## ## #                           # ## ## ## ## ## ## ## ## #
###########################                           ###########################
#################################################################################
# ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## #
#################################################################################
###   ######   ######   ######   ######   ######   ######   ######   ######   ###
# #   # ## #   # ## #   # ## #   # ## #   # ## #   # ## #   # ## #   # ## #   # #
###   ######   ######   ######   ######   ######   ######   ######   ######   ###
#################################################################################
# ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## #
#################################################################################
#########         ##################         ##################         #########
# ## ## #         # ## ## ## ## ## #         # ## ## ## ## ## #         # ## ## #
#########         ##################         ##################         #########
###   ###         ###   ######   ###         ###   ######   ###         ###   ###
# #   # #         # #   # ## #   # #         # #   # ## #   # #         # #   # #
###   ###         ###   ######   ###         ###   ######   ###         ###   ###
#########         ##################         ##################         #########
# ## ## #         # ## ## ## ## ## #         # ## ## ## ## ## #         # ## ## #
#########         ##################         ##################         #########
#################################################################################
# ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## #
#################################################################################
###   ######   ######   ######   ######   ######   ######   ######   ######   ###
# #   # ## #   # ## #   # ## #   # ## #   # ## #   # ## #   # ## #   # ## #   # #
###   ######   ######   ######   ######   ######   ######   ######   ######   ###
#################################################################################
# ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## #
#################################################################################
alex@~/0x0B-menger$ ./0-menger -1
alex@~/0x0B-menger$

```
 Task URLs  Github information Repo:
* GitHub repository:  ` holbertonschool-interview ` 
* Directory:  ` 0x0B-menger ` 
* File:  ` 0-menger.c, menger.h ` 
 Self-paced manual review  Panel footer - Controls 
