#include "USB_cdc_user_functions.h"
//������� ����������� ��� ������� ������ �� USB
//�������� ������ ���������� � ������� USB_recived_buffer
//���������� �������� ���� ���������� � USB_recived_buffer_size
//������������ ������ ����� ������� RX Endpoint - 32 �����
void callback_USB_RXC(void)
{
  //��� ������������ ������ USB �����, ������� ���
  USB_send_buffer(USB_recived_buffer_size,&USB_recived_buffer[0]);
}

