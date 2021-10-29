#include <stdio.h>

int main(void) {
    //declaring variables
    char pluralNoun[10];
    char pluralNoun2[10];
    char verb[10];
    char noun[10];
    char ingVerb[10];
    char pluralNoun3[10];
    char noun2[10];
    char pluralNoun4[10];

    //asking for input
    printf("Enter a plural noun: ");
    //reading the input and storing in variable
    scanf("%s", &pluralNoun);

    printf("Enter plural noun: ");
    scanf("%s", &pluralNoun2);

    printf("Enter verb: ");
    scanf("%s", &verb);

    printf("Enter noun: ");
    scanf("%s", &noun);

    printf("Enter a verb ending in \"ing\": ");
    scanf("%s", &ingVerb);

    printf("Enter plural noun: ");
    scanf("%s", &pluralNoun3);

    printf("Enter noun: ");
    scanf("%s", &noun2);

    printf("Enter plural noun: ");
    scanf("%s", &pluralNoun4);

    //now perform a function
    printf("At the Arcade!\n"
           "When I go to the arcade with my %s there are lots of games to play.\n"
           "I spend lots of time there with my friends. In \"Xmen\" you can be \n"
           "different %s. The point of the game is to %s every robot. You also \n"
           "need to save people, and then you can go to the next level. In\n"
           "\"Star Wars\" you are Luke Skywalker and you try to destroy every %s.\n"
           "In a car or motorcycle racing game you need to beat every computerized\n"
           "vehicle that you are %s against. There are a whole lot of other cool\n"
           "games. When you play some games you win %s for certain scores. Once\n"
           "you're done, you can cash in your tickets to get a big %s. You can\n"
           "also save your %s for another time. When I went to this arcade I\n"
           "didn't believe how much fun it would be. You might annoy your parents\n"
           "by asking them over and over if you can go back to there. So far I\n"
           "have had a lot of fun every time I've been to this great arcade!\n",
           pluralNoun, pluralNoun2, verb, noun, ingVerb, pluralNoun3, noun2, pluralNoun4);
    return 0;
}
