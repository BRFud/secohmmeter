//����:��LCD1602��ʾ xingxiangrong
//���뻷��: KEIL UVISION2
//��Ƭ������12M  ��Ƭ���ͺ�AT89S52
//��Ƭ������: ������Ҫ��
//���ߣ������ٵ���Ԫ����
//���ڣ�2013.07.02
//:ר����Ʒ���Ͻ�������ҵ��;��

#include "common.h"


//**************��������***************************************
void    WriteDataLCM		(uchar WDLCM);//LCDģ��д����
void    WriteCommandLCM	(uchar WCLCM, int BuysC); //LCDģ��дָ��
uchar   ReadStatusLCM(void);//��LCDģ���æ��
void    DisplayOneChar(uchar X,uchar Y,uchar ASCII);//�ڵ�X+1�еĵ�Y+1λ����ʾһ���ַ�
void    LCMInit(void);//LCD��ʼ
void    delayms(uint ms);//1MS��׼��ʱ����
void    DisplayListChar(uchar X,uchar Y,uchar delayms, __code const uchar *DData);
void ClearLine(uchar row);
void ClearScreen();
