"# AT90USBCDCSmallLibrary" 

in file USB_cdc_user_functions.c
Function
void callback_USB_RXC(void)
{
  //Change this code as You need
  USB_send_buffer(USB_recived_buffer_size,&USB_recived_buffer[0]);
}

