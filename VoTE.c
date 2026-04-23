// OnlIne VoTinG SySTem :  c-lngT

#include<stdio.h>
#include<strings.h>

struct candidate {
    char name[100];
    int votes;
};

int main(){
    struct candidate c[3] = {{"Arnav",0}, {"Nihal",0}, {"Nitish",0}};
    int totalVoters = 0;
    int voted = 0;
    int choice;


    printf("---+---+---+---+---+---+---\n");
    printf("---OnlINE VoTinG SySTEM---\n");
    printf("---+---+---+---+---+---+---\n\n");


    printf("Enter ToTal NUmBer oF vOTers: ");
    scanf("%d",&totalVoters);

    while(1) {
    printf("\n---Menu OPTion---\n");
    printf("1. VoTe for ARNAV\n");
    printf("2. VoTe for Nihal\n");
    printf("3. VoTe for NiTiSH\n");
    printf("4. Show REsuLT --\n");
    printf("5. EXIT \n");
    printf("Enter YoUr ChoIce: ");
    scanf("%d",&choice);


    switch(choice){
        case 1:
        case 2:
        case 3:
              if(voted < totalVoters){
                c[choice-1].votes++;
                voted++;
                printf("-- VoTe cast successfully ! --\n");

              } else {
                printf("All vOters have already voted! \n");
              }
              break;

              case 4:
              printf("\n --- ResUlT ---\n");
              for(int i = 0; i< 3; i++){
                printf("%s : %d votes\n",c[i].name,c[i].votes);
              }

              int max = c[0].votes;
              int winner = 0;
              for(int i = 1; i < 3;i++){
                if(c[i].votes > max) {
                    max = c[i].votes;
                    winner = i;
                }
              }
              printf("Winner: %s\n\n", c[winner].name);
              break;


        case 5: 
            printf("Exiting ProgRam >>>\n");
            return 0;

        default:
            printf("InValiD ChoiCE! TRY again.\n ");
    }

    
    }
    return 0;

}