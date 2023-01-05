main()
{
    int x;
    for(x=0;x<=255;x++){
        if(x%24==0){
            getch();
            systam("cls");
        }printf("\n %d %c",x,x);
    }
}