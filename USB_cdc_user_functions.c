#include "USB_cdc_user_functions.h"
//Функция вызываеться при приходе данных по USB
//Принятые данные находяться в буффере USB_recived_buffer
//Количество принятых байт находиться в USB_recived_buffer_size
//Максимальный размер равен размеру RX Endpoint - 32 байта
void callback_USB_RXC(void)
{
  //Для демонстрации нашего USB порта, сделаем эхо
  USB_send_buffer(USB_recived_buffer_size,&USB_recived_buffer[0]);
}

