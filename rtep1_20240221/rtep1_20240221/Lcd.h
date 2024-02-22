#ifndef __BMP_H
#define __BMP_H

typedef struct BMP
{
	char* bmpname;			//����bmpͼƬ������
	int size;				//�ļ����ܴ�С
	int width;				//�ļ��Ŀ�
	int height; 			//�ļ��ĸ�
	short bpp;				//ɫ��
	char* data; 			//����������׵�ַ
}BMP;

void lcd_init();
void lcd_point(int x, int y, unsigned int color);
void lcd_close();
BMP get_bmp_info(char* bmpname);
void lcd_draw_bmp(char* bmpname, int x, int y);

#endif

