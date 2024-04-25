#include<stdio.h>
main(){
	int language, recharge_type, internet_recharge, top_up_recharge, special_recharge;
	printf("PRESS 1 FOR ENGLISH\n");
    printf("PRESS 2 FOR HINDI\n");
    printf("PRESS 3 FOR GUJARATI\n");
    printf("ENTER YOUR CHOICE: ");
    scanf("%d", &language);
    
    switch (language) {
        case 1:
            printf("PRESS 1 FOR Internet RECHARGE\n");
            printf("PRESS 2 FOR Top-up RECHARGE\n");
            printf("PRESS 3 FOR Special RECHARGE\n");
            
            printf("ENTER YOUR CHOICE:");
            scanf("%d", &recharge_type);

            switch (recharge_type) {
                case 1:
                    printf("YOU HAVE SUCCESSFULLY DONE INTERNET RECHARGE.\n");
                    break;
                case 2:
                    printf("YOU HAVE SUCCESSFULLY DONE TOP-UP RECHARGE.\n");
                    break;
                case 3:
                    printf("YOU HAVE SUCCESSFULLY DONE SPECIAL RECHARGE.\n");
                    break;
                default:
                    printf("INVALID COICE.\n");
            }
            break;

        case 2:
            printf("INTERNET RECHARGE KE LIYE 1 DABAIYE\n");
            printf("TOP-UP RECHARGE KE LIYE 2 DABAIYE\n");
            printf("SPECIAL RECHARGE KE LIYE 3 DABAIYE\n");
            printf("ENTER YOUR COICE: ");
            scanf("%d", &recharge_type);

            switch (recharge_type) {
                case 1:
                    printf("APNE SAFALTAPURVAK INTERNET RECHARGE KAR LIYA HE.\n");
                    break;
                case 2:
                    printf("APNE SAFALTAPURVAK TOP-UP RECHARGE KAR LIYA HE.\n");
                    break;
                case 3:
                    printf("APNE SAFALTAPURVAK SPECIAL RECHARGE KAR LIYA HE.\n");
                    break;
                default:
                    printf("INVALID CHOICE.\n");
            }
            break;

        case 3:
            printf("INTERNATE RECHARGE MATE 1 DABAVO\n");
            printf("Top-up RECHARGE MATE 2 DABAVO\n");
            printf("SPECIAL RECHARGE MATE 3 DABAVO\n");
            printf("ENTER YOUR CHOICE: ");
            scanf("%d", &recharge_type);

            switch (recharge_type) {
                case 1:
                    printf("TAME SAFALTAPURVAK INTERNET RECHARGE KARYU CHHE.\n");
                    break;
                case 2:
                    printf("TAME SAFALTAPURVAK TOP-UP RECHARGE KARYU CHHE.\n");
                    break;
                case 3:
                    printf("TAME SAFALTAPURVAK SPECIAL RECHARGE KARYU CHHE.\n");
                    break;
                default:
                    printf("INVALID CHOICE.\n");
            }
            break;

        default:
            printf("INVALID CHOICE.\n");
    }

}

