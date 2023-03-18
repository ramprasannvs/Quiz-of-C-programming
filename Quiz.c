#include<stdio.h>
#include<stdlib.h>
int main(){
    int i;
    int ans1,ans2,ans3,ans4,ans5,ans6,ans7,ans8,ans9,ans10,ans11,ans12,ans13,ans14,ans15;
    
    int ans16,ans17,ans18,ans19,ans20;
    printf("----------------------Project---------------------------\n");

    printf("--Welcome to the Quiz Game in C--\n");

    printf("-----Total 20 Quiz Question------\n");

    printf("__ Press 1 to start the Quiz Game __\n");
    printf("--Press 0 to Quit the Quiz Game--\n");

    scanf("%d",&i);

    printf("--Lets Play--\n");

    if(i==1){

        printf("Start the Game:\n");

    }
    else if(i==0){

        printf("The Game is End\n");

    }else{
        printf("Invalid\n");

    }
    if(i==1){
        printf("Press 7 to exit the Game\n");
        printf("A).Who is the father of C language?\n");
        printf("1). Steve Jobs\n");
        printf("2). James Gosling\n");
        printf("3). Dennis Ritchie\n");
        printf("4). Rasmus Lerdorf\n");



        printf("Enter your Answer:");
        scanf("%d",&ans1);

        if(ans1==3){
            printf("Correct Answer \n\n");

        }
        else if(ans1==7){
            printf("End the Game\n");
            exit(0);
        }else if(ans1==5||ans1==6||ans1==8||ans1==9||ans1==10){
             
             printf("Invalid number \n\n");
        }
        else{
            printf("Wrong Answer\n");
            printf("Better the Next Time\n\n");

        }
        printf("Press 7 to exit the Game\n");
        printf("B).Which of the following cannot be a variable name in C?\n");
        printf("1). volatile\n");
        printf("2). true\n");
        printf("3). friend\n");
        printf("4). export\n");

        printf("Enter the answer:");
        scanf("%d",&ans2);
        printf("\n\n");

        if(ans2==1){
            printf("Correct Answer \n\n");

        }
         else if(ans2==7){
            printf("End the Game\n");
            exit(0);
        }else if(ans2==5||ans2==6||ans2==8||ans2==9||ans2==10){
             
             printf("Invalid number \n\n");
        }
        
        else{
            printf("Wrong Answer\n");
            printf("Better the Next Time\n\n");

        }
        printf("Press 7 to exit the Game\n");
        printf("C).What is short int in C programming?\n");
        printf("1). The basic data type of C\n");
        printf("2). Qualifier\n");
        printf("3). Short is the qualifier and int is the basic data type\n");
        printf("4). All of the mentioned\n");
        printf("Enter the answer:");
        scanf("%d",&ans3);
        printf("\n\n");

        if(ans3==3){
            printf("Correct Answer \n");

        }
         else if(ans3==7){
            printf("End the Game\n");
            exit(0);
        }else if(ans3==5||ans3==6||ans3==8||ans3==9||ans3==10){
             
             printf("Invalid number \n\n");
        }
        else{
            printf("Wrong Answer\n");
            printf("Better the Next Time\n\n");

        }
        printf("Press 7 to exit the Game\n");
        printf("D).Which keyword is used to prevent any changes in the variable within a C program?\n");
        printf("1). immutable\n");
        printf("2). mutable\n");
        printf("3). const\n");
        printf("4). volatile\n");
        printf("Enter the answer:");
        scanf("%d",&ans4);
        printf("\n\n");


        if(ans4==3){
            printf("Correct Answer \n\n");


        }
         else if(ans3==7){
            printf("End the Game\n");
            exit(0);
        }else if(ans4==5||ans4==6||ans4==8||ans4==9||ans4==10){
             
             printf("Invalid number \n\n");
        }
        else{
            printf("Wrong Answer\n");
            printf("Better the Next Time\n\n");

        }
        printf("Press 7 to exit the Game\n");
        printf("E).Which of the following typecasting is accepted by C language?\n");
        printf("1). Widening conversions\n");
        printf("2). Narrowing conversions\n");
        printf("3). Widening & Narrowing conversions\n");
        printf("4). None of the mentioned\n");
        printf("Enter the answer:");
        scanf("%d",&ans5);
        printf("\n\n");


        if(ans5==3){
            printf("Correct Answer \n\n");


        }
         else if(ans5==7){
            printf("End the Game\n");
            exit(0);
        }else if(ans5==5||ans5==6||ans5==8||ans5==9||ans1==10){
             
             printf("Invalid number \n\n");
        }
        else{
            printf("Wrong Answer\n");
            printf("Better the Next Time\n\n");

        }
        printf("Press 7 to exit the Game\n");
        printf("F).What is an example of iteration in C?\n");
        printf("1). for\n");
        printf("2). while\n");
        printf("3). do-while\n");
        printf("4). all of the mentioned\n");
        printf("Enter the answer:");
        scanf("%d",&ans6);
        printf("\n\n");


        if(ans6=4){
            printf("Correct Answer \n\n");


        }
         else if(ans6==7){
            printf("End the Game\n");
            exit(0);
        }
        else if(ans6==5||ans6==6||ans6==8||ans6==9||ans6==10){
             
             printf("Invalid number \n\n");
        }else{
            printf("Wrong Answer\n");
            printf("Better the Next Time\n\n");

        }
        printf("Press 7 to exit the Game\n");
        printf("G).Functions can return enumeration constants in C?\n");
        printf("1). true\n");
        printf("2). false\n");
        printf("3). depends on the compiler\n");
        printf("4). depends on the standard\n");
        printf("Enter the answer:");
        scanf("%d",&ans7);
        printf("\n\n");


        if(ans7=1){
            printf("Correct Answer \n\n");


        }
         else if(ans7==7){
            printf("End the Game\n");
            exit(0);
        }
        else if(ans7==5||ans7==6||ans7==8||ans7==9||ans7==10){
             
             printf("Invalid number \n\n");
        }else{
            printf("Wrong Answer\n");
            printf("Better the Next Time\n\n");

        }
        printf("Press 7 to exit the Game\n");
        printf("H).What is #include <stdio.h>?\n");
        printf("1). Preprocessor directive\n");
        printf("2). Inclusion directive\n");
        printf("3). File inclusion directive\n");
        printf("4). None of the mentioned\n");
        printf("Enter the answer:");
        scanf("%d",&ans8);
        printf("\n\n");


        if(ans8=1){
            printf("Correct Answer \n\n");


        }
         else if(ans8==7){
            printf("End the Game\n");
            exit(0);
        }
        else if(ans8==5||ans8==6||ans8==8||ans8==9||ans8==10){
             
             printf("Invalid number \n\n");
        }else{
            printf("Wrong Answer\n");
            printf("Better the Next Time\n\n");

        }
        printf("Press 7 to exit the Game\n");
        printf("I).Which of the following are C preprocessors?\n");
        printf("1). #ifdef\n");
        printf("2). #define\n");
        printf("3). #endif\n");
        printf("4). all of the mentioned \n");
        printf("Enter the answer:");
        scanf("%d",&ans9);
        printf("\n\n");


        if(ans9=4){
            printf("Correct Answer \n\n");


        }
         else if(ans9==7){
            printf("End the Game\n");
            exit(0);
        }
        else if(ans9==5||ans9==6||ans9==8||ans9==9||ans9==10){
             
             printf("Invalid number \n\n");
        }else{
            printf("Wrong Answer\n");
            printf("Better the Next Time\n\n");

        }
        printf("Press 7 to exit the Game\n");
        printf("J).The C-preprocessors are specified with _________ symbol.\n");
        printf("1). #\n");
        printf("2). $\n");
        printf("3). ” ”\n");
        printf("4). &\n");
        printf("Enter the answer:");
        scanf("%d",&ans10);
        printf("\n\n");


        if(ans10=1){
            printf("Correct Answer \n\n");


        }
         else if(ans10==7){
            printf("End the Game\n");
            exit(0);
        }
        else if(ans10==5||ans10==6||ans10==8||ans10==9||ans9==10){
             
             printf("Invalid number \n\n");
        }else{
            printf("Wrong Answer\n");
            printf("Better the Next Time\n\n");

        }

        
        printf("Press 7 to exit the Game\n");
        printf("K).Which of the following is not possible statically in C language?\n");
        printf("1). Jagged Array\n");
        printf("2) .Rectangular Array\n");
        printf("3). Cuboidal Array\n");
        printf("4). Multidimensional Array\n");
        printf("Enter the answer:");
        scanf("%d",&ans11);
        printf("\n\n");


        if(ans11=1){
            printf("Correct Answer \n\n");


        }
         else if(ans11==7){
            printf("End the Game\n");
            exit(0);
        }
        else if(ans11==5||ans11==6||ans11==8||ans11==9||ans11==10){
             
             printf("Invalid number \n\n");
        }else{
            printf("Wrong Answer\n");
            printf("Better the Next Time\n\n");

        }

        printf("Press 7 to exit the Game\n");
        printf("L).Which of the following return-type cannot be used for a function in C?\n");
        printf("1). char *\n");
        printf("2). struct\n");
        printf("3). void\n");
        printf("4). none of the mentioned\n");
        printf("Enter the answer:");
        scanf("%d",&ans12);
        printf("\n\n");


        if(ans12=4){
            printf("Correct Answer \n\n");


        }
         else if(ans12==7){
            printf("End the Game\n");
            exit(0);
        }
        else if(ans12==5||ans12==6||ans12==8||ans12==9||ans12==10){
             
             printf("Invalid number \n\n");
        }else{
            printf("Wrong Answer\n");
            printf("Better the Next Time\n\n");

        }
        printf("Press 7 to exit the Game\n");
        printf("M).The standard header _______ is used for variable list arguments (…) in C.\n");
        printf("1). <stdio.h >\n");
        printf("2). <stdlib.h>\n");
        printf("3). <math.h>\n");
        printf("4). <stdarg.h>\n");
        printf("Enter the answer:");
        scanf("%d",&ans13);
        printf("\n\n");


        if(ans13=4){
            printf("Correct Answer \n\n");


        }
         else if(ans13==7){
            printf("End the Game\n");
            exit(0);
        }
        else if(ans13==5||ans13==6||ans13==8||ans13==9||ans12==10){
             
             printf("Invalid number \n\n");
        }else{
            printf("Wrong Answer\n");
            printf("Better the Next Time\n\n");

        }
        printf("Press 7 to exit the Game\n");
        printf("N).In C language, FILE is of which data type?\n");
        printf("1). int\n");
        printf("2). char *\n");
        printf("3). struct\n");
        printf("4). None of the mentioned\n");
        printf("Enter the answer:");
        scanf("%d",&ans14);
        printf("\n\n");


        if(ans14=3){
            printf("Correct Answer \n\n");


        }
         else if(ans14==7){
            printf("End the Game\n");
            exit(0);
        }
        else if(ans14==5||ans14==6||ans14==8||ans14==9||ans12==10){
             
             printf("Invalid number \n\n");
        }else{
            printf("Wrong Answer\n");
            printf("Better the Next Time\n\n");

        }

        printf("Press 7 to exit the Game\n");
        printf("O).What is the sizeof(char) in a 32-bit C compiler?\n");
        printf("1). 1 bit\n");
        printf("2). 2 bits\n");
        printf("3). 1 Byte\n");
        printf("4). 2 Bytes\n");
        printf("Enter the answer:");
        scanf("%d",&ans15);
        printf("\n\n");


        if(ans15=3){
            printf("Correct Answer \n\n");


        }
         else if(ans15==7){
            printf("End the Game\n");
            exit(0);
        }
        else if(ans15==5||ans15==6||ans15==8||ans15==9||ans12==10){
             
             printf("Invalid number \n\n");
        }else{
            printf("Wrong Answer\n");
            printf("Better the Next Time\n\n");

        }
        printf("Press 7 to exit the Game\n");
        printf("P).Which of the following is not a logical operator?\n");
        printf("1). &&\n");
        printf("2). ! \n");
        printf("3). || \n");
        printf("4). | \n");
        printf("Enter the answer:");
        scanf("%d",&ans16);
        printf("\n\n");


        if(ans16=4){
            printf("Correct Answer \n\n");


        }
         else if(ans16==7){
            printf("End the Game\n");
            exit(0);
        }
        else if(ans16==5||ans16==6||ans16==8||ans16==9||ans16==10){
             
             printf("Invalid number \n\n");
        }else{
            printf("Wrong Answer\n");
            printf("Better the Next Time\n\n");

        }
        printf("Press 7 to exit the Game\n");
        printf("Q).Which of the following is not a storage class specifier in C?\n");
        printf("1). auto\n");
        printf("2). register\n");
        printf("3). static\n");
        printf("4). volatile\n");
        printf("Enter the answer:");
        scanf("%d",&ans17);
        printf("\n\n");


        if(ans17=4){
            printf("Correct Answer \n\n");


        }
         else if(ans17==7){
            printf("End the Game\n");
            exit(0);
        }
        else if(ans17==5||ans17==6||ans17==8||ans17==9||ans17==10){
             
             printf("Invalid number \n\n");
        }else{
            printf("Wrong Answer\n");
            printf("Better the Next Time\n\n");

        }
        printf("Press 7 to exit the Game\n");
        printf("R).Which file is generated after pre-processing of a C program?\n");
        printf("1). .p\n");
        printf("2). .i\n");
        printf("3). .o \n");
        printf("4). .m\n");
        printf("Enter the answer:");
        scanf("%d",&ans18);
        printf("\n\n");


        if(ans18=2){
            printf("Correct Answer \n\n");


        }
         else if(ans18==7){
            printf("End the Game\n");
            exit(0);
        }
        else if(ans18==5||ans18==6||ans18==8||ans18==9||ans18==10){
             
             printf("Invalid number \n\n");
        }else{
            printf("Wrong Answer\n");
            printf("Better the Next Time\n\n");

        }
        printf("Press 7 to exit the Game\n");
        printf("S).What will be the output of this program?\n");
        printf("1). Wrong statement\n");
        printf("2). It will keep on printing javatpoint\n");
        printf("3). It will Print javatpoint once \n");
        printf("4). None of the these\n");
        printf("Enter the answer:");
        scanf("%d",&ans19);
        printf("\n\n");


        if(ans19=2){
            printf("Correct Answer \n\n");


        }
         else if(ans19==7){
            printf("End the Game\n");
            exit(0);
        }
        else if(ans19==5||ans19==6||ans19==8||ans19==9||ans19==10){
             
             printf("Invalid number \n\n");
        }else{
            printf("Wrong Answer\n");
            printf("Better the Next Time\n\n");

        }
         printf("Press 7 to exit the Game\n");
        printf("T).What is a lint?\n");
        printf("1). C compiler \n");
        printf("2). Interactive debugger\n");
        printf("3). Analyzing tool\n");
        printf("4). C interpreter\n");
        printf("Enter the answer:");
        scanf("%d",&ans20);
        printf("\n\n");


        if(ans20=3){
            printf("Correct Answer \n\n");


        }
         else if(ans20==7){
            printf("End the Game\n");
            exit(0);
        }
        else if(ans20==5||ans20==6||ans20==8||ans20==9||ans20==10){
             
             printf("Invalid number \n\n");
        }else{
            printf("Wrong Answer\n");
            printf("Better the Next Time\n\n");

        }
        printf("------\n");
        printf("|\n");
        printf("|\n");
        printf("|_____ND THE QUIZ GAME\n");
        printf("|\n");
        printf("|\n");
        printf("------\n");


    }






}