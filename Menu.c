void menu(){
    //please enter the choice
    printf("Please enter the choice \n");
    printf("1:: Add record\n");
    printf("2:: Search record\n");
    printf("3:: Modifier record\n");
    printf("4:: Delete record\n");
    printf("5:: Calculed fees\n");
    printf("6:: Exit\n");
    // Enter  choice
    int choice;
    printf("Enter you choice: ");
    scanf("%d", &choice);
    switch(choice){
    case 1:
        printf("1:: Add record\n");
        addDat();
        break;
    case 2:
        printf("2:: Search record\n");
        searchDat();
        break;
    case 3:
        printf("3:: Modifier record\n");
        modifyDat();
        break;
    case 4:
        printf("4:: Delete record\n");
        deleteDat();
        break;
    case 5:
        printf("5:: Calculed fees\n");
        calculFees();
        break;
    case 6:
        printf("6:: Exit\n");
        Exit();
     default:
            printf(" Invalid choice\n");
            break;
    }
}
