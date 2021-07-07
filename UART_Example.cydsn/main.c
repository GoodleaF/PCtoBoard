/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include "project.h"

int main() {
    CyGlobalIntEnable;
    
    UART_Start();
    UART_UartPutString("Hello World!");
    for(;;) // endless loop
    {
       
    }
}

/* [] END OF FILE */
