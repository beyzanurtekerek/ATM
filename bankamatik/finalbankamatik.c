#include <stdio.h>
#include <stdlib.h>

void hataver(){
    printf("Gecersiz sayi girisi!");
}
void atla(){
    printf("\n---------------------------------\n");
}
int main(){
  
  FILE *filep = fopen("bankamatik.txt","a");
  int i=0,k=0,para=50000,secim1,secim2,miktar,eski;
  int a[4] = {90,220,20,50};
  char adsoyad[30];

    puts("Isminiz: ");
    gets(adsoyad);
    fprintf(filep,"\nAd-soyad: %s\n",adsoyad);
    fprintf(filep,"Islemler:\n");
         
  for(i; i<2; i++){
      printf("\n 1-Bakiye goruntuleme\n 2-Para cekme\n 3-Para yatirma\n 4-Fatura odeme\n 5-Cikis yap\n");
      printf("Islem yapmak istediginiz secenegi giriniz:");
      scanf("%d", &secim1);
      
      switch(secim1){
        case 1 :
            atla();
            printf("\nBakiyeniz: %d TL\n", para);
            fprintf(filep,"\nBakiye: %d TL\n", para);
            atla();
            i=0;
            break;
        case 2 :
            printf("Cekilecek miktari giriniz: ");
            scanf("%d", &miktar);
            eski = para;
            para -= miktar;
            atla();
            printf("\nEski bakiyeniz: %d TL\n", eski);
            printf("Cektiginiz para: %d TL\n", miktar);
            printf("Guncel bakiye: %d TL\n", para);
            fprintf(filep,"\nEski bakiye: %d TL\n", eski);
            fprintf(filep,"Cekilen para: %d TL\n", miktar);
            fprintf(filep,"Guncel bakiye: %d TL\n", para);
            atla();
            i=0;
            break;
        case 3 : 
            printf("Yatirilacak miktari giriniz: ");
            scanf("%d", &miktar);
            eski = para;
            para += miktar;
            atla();
            printf("\nEski bakiyeniz: %d TL\n", eski);
            printf("Yatirdiginiz para: %d TL\n", miktar);
            printf("Guncel bakiye: %d TL\n", para);
            fprintf(filep,"\nEski bakiye: %d TL\n", eski);
            fprintf(filep,"Yatirilan para: %d TL\n", miktar);
            fprintf(filep,"Guncel bakiye: %d TL\n", para);
            atla();
            i=0;
            break;
        case 4 : 
            for(k; k<5; k++){
                printf("\n 1-Internet faturasi\n 2-Elektrik faturasi\n 3-Su faturasi\n 4-Telefon faturasi\n 5-Geri don\n");
                printf("Hangi faturayi odeyeceksiniz? :");
                scanf("%d", &secim2);
                        if (secim2==1){
                            eski = para;
                            para -= a[0];
                            printf("\nInternet faturaniz odendi.\n");
                            atla();
                            printf("\nEski bakiyeniz: %d TL\n", eski);
                            printf("Internet faturaniz: 90 TL\n");
                            printf("Guncel bakiye: %d TL\n", para);
                            fprintf(filep,"\nEski bakiye: %d TL\n", eski);
                            fprintf(filep,"Internet faturasi odendi: 90 TL\n");
                            fprintf(filep,"Guncel bakiye: %d TL\n", para);
                            atla();
                            k=0;
                        }
                        else if (secim2==2){
                            eski = para;
                            para -= a[1];
                            printf("\nElektrik faturaniz odendi.\n");
                            atla();
                            printf("\nEski bakiyeniz: %d TL\n", eski);
                            printf("Elektrik faturaniz: 220 TL\n");
                            printf("Guncel bakiye: %d TL\n", para);
                            fprintf(filep,"\nEski bakiye: %d TL\n", eski);
                            fprintf(filep,"Elektrik faturasi odendi: 220 TL\n");
                            fprintf(filep,"Guncel bakiye: %d TL\n", para);
                            atla();
                            k=0;
                        }
                        else if (secim2==3){
                            eski = para;
                            para -=a[2];
                            printf("\nSu faturaniz odendi.\n");
                            atla();
                            printf("\nEski bakiyeniz: %d TL\n", eski);
                            printf("Su faturaniz: 20 TL\n");
                            printf("Guncel bakiyeniz: %d TL\n", para);
                            fprintf(filep,"\nEski bakiye: %d TL\n", eski);
                            fprintf(filep,"Su faturasi odendi: 20 TL\n");
                            fprintf(filep,"Guncel bakiye: %d TL\n", para);
                            atla();
                            k=0;
                        }
                        else if (secim2==4){
                            eski = para;
                            para -= a[3];
                            printf("\nTelefon faturaniz odendi.\n");
                            atla();
                            printf("\nEski bakiyeniz: %d TL\n", eski);
                            printf("Telefon faturaniz: 50 TL\n");
                            printf("Guncel bakiye: %d TL\n", para);
                            fprintf(filep,"\nEski bakiye: %d TL\n", eski);
                            fprintf(filep,"Telefon faturasi odendi: 50 TL\n");
                            fprintf(filep,"Guncel bakiye: %d TL\n", para);
                            atla();
                            k=0;
                        }
                        else if (secim2==5){
                            k=5;
                        }
                        else {
                            hataver();
                            k=0;
                        }
                    }
            i=0;
            break;
        case 5 : 
            i=2;
            atla();
            printf("\nCikis yaptiniz.\nIyi gunler dileriz..\n");
            fprintf(filep,"Cikis yapildi.\n");
            atla();
            break;
        default : 
            hataver();
      }
   }
   fclose(filep);
   return 0;
}
