
/* INCLUDES *******************************************************************/
#include "driver/gpio.h"
#include "esp_log.h"
#include "led.h"
/******************************************************************************/

/* DEFINES ********************************************************************/
#define TAG "LED"
#define LED_LOG_LEVEL ESP_LOG_INFO 

#define LED_PIN 2
/******************************************************************************/

/* ENUMS **********************************************************************/
/******************************************************************************/

/* STRUCTURES *****************************************************************/
/******************************************************************************/

/* GLOBALS ********************************************************************/
/******************************************************************************/

/* PROTOTYPES *****************************************************************/
/******************************************************************************/

/* PUBLIC FUNCTIONS ***********************************************************/
void led_init(void)
{
    esp_log_level_set(TAG, LED_LOG_LEVEL);

    ESP_LOGI(TAG, "Initializing LED");
    gpio_reset_pin(LED_PIN);
    gpio_set_direction(LED_PIN, GPIO_MODE_OUTPUT);
}

void led_on()
{
    ESP_LOGD(TAG, "LED on");
    gpio_set_level(LED_PIN, 1);
}

void led_off()
{
    ESP_LOGD(TAG, "LED off");
    gpio_set_level(LED_PIN, 0);
}
/******************************************************************************/

/* PRIVATE FUNCTIONS **********************************************************/
/******************************************************************************/
