#include <stdio.h>
#include <Windows.h>
#include <conio.h>


#define LEFT 75
#define RIGHT 77
#define UP 72
#define DOWN 80

// �� �����̱�


int main() {
   
   int destinaion;
   int position[2] = {0}; // 0 : x , 1 : y

   int count_item = 0;

   int item[3][2] = {
      {10,10},
      {15,12},
      {8,17}
   };
   
   while (1)
   {

      // �� �׸���
      for (int k = 0; k < 20; k++) { // ���� y
         for (int i = 0; i < 20; i++) {// ���� x
            if (position[0] == i && position[1] == k) {
               printf("��");
            }
            else if (item[0][0] == i && item[0][1] == k) {
               printf("��");
            }
            else if (item[1][0] == i && item[1][1] == k) {
               printf("��");
            }
            else if (item[2][0] == i && item[2][1] == k) {
               printf("��");
            }
            else {
               printf("��");
            }
         }
         printf("\n");
      }


      destinaion = getch();

      if (destinaion == 224) {

         destinaion = getch();

         switch (destinaion)
         {

         case LEFT:
            position[0]--;
            break;

         case RIGHT:
            position[0]++;
            break;

         case UP:
            position[1]--;
            break;

         case DOWN:
            position[1]++;
            break;

         default:
            break;
         }
      }

      if (position[0] == item[0][0] && position[1] == item[0][1]) {
         item[0][0] = -100;
         item[0][1] = -100;

         count_item++;
         printf("������ �Ĺ�~~~~~~~~~~~~~\n");
      }
      else if (position[0] == item[1][0] && position[1] == item[1][1]) {
         item[1][0] = -100;
         item[1][1] = -100;

         count_item++;
         printf("������ �Ĺ�~~~~~~~~~~~~~\n");
      }
      else if (position[0] == item[2][0] && position[1] == item[2][1]) {
         item[2][0] = -100;
         item[2][1] = -100;

         count_item++;
         printf("������ �Ĺ�~~~~~~~~~~~~~\n");
      }

      if (count_item == 3) {
         printf("�������� ��� ��Ҵ�!!!!!!!!! ���� ����~~~~~~~~");

         break;
      }


      system("cls");
   }


   return 0;
}
