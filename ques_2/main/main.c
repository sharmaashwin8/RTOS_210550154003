/*  
    Q2. Create 3 realtime tasks each with the periodcity T1=1000ms, T2=2000ms, 
    T3=5000ms. Also create use oneshot software timer to trigger a callback function 
    from T3 after 10000ms.
*/


#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/queue.h"

TaskHandle_t one_handle;
TaskHandle_t two_handle;
TaskHandle_t three_handle;

void task_one(void *argument)
{
    while(1)
    {
        printf("IN Task 2\n");
        vTaskDelay(1000 / portTICK_PERIOD_MS );
    }
}

void task_two(void *argument)
{
    while(1)
    {
        printf("IN Task 3\n");
        vTaskDelay(2000 / portTICK_PERIOD_MS );
    }
}

void task_three(void *data)
{
    while(1)
    {
        printf("IN Task 3\n");
        vTaskDelay(5000 / portTICK_PERIOD_MS );
    }
}

v
void app_main(void)
{
    //int i = 0;
    locmq = xQueueCreate(5, sizeof(int));
    xTaskCreate(task_one, "tsk_1", 2048, NULL, 1, &one_handle);
    xTaskCreate(task_two, "tsk_2", 2028, NULL, 2, &two_handle);
    xTaskCreate(task_three, "tsk_3", 2028, NULL, 3, &three_handle);
    while (1) {
        //printf("[%d] Hello world!\n", i);
        //i++;
        vTaskDelay(2000 / portTICK_PERIOD_MS);
    }
}
