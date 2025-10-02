//--------------------------------------------------------
// Реализация функции sysDelay() на системном таймере.  //
// Используется обработчик глобального прерывания       //
// от системного таймера.                               //
//------------------------------------------------------//
/*
#include "sysdelay.h"

// Глобальный переменные системного таймера
uint32_t StartUpCounter;
uint32_t SysTick_CNT = 0;
uint32_t SysTick_val = 0;
volatile uint32_t delayTimerValue = 0;

// функция настройки системного таймера
// Ставим задержку в 1-ну милисекунду от текущей частоты ядра
void InitSysTick(void)
{
    SystemCoreClockUpdate();
    SysTick_Config(SystemCoreClock / 1000 - 1);
    // получить предделитель системной частоты до одной милисекунды
    // заносим число тиков в предделитель системного таймера
    MODIFY_REG(SysTick->LOAD, SysTick_LOAD_RELOAD_Msk, SysTick_val);
    // сбросить счетчик
    CLEAR_BIT(SysTick->VAL, SysTick_VAL_CURRENT_Msk);
    // SysTick_CTRL_CLKSOURCE_Msk   - текущая частота ядра
    // SysTick_CTRL_ENABLE_Msk      - включить системный таймер
    // SysTick_CTRL_TICKINT_Msk     - включить прерывания от системного таймера
    SET_BIT(SysTick->CTRL, SysTick_CTRL_CLKSOURCE_Msk | SysTick_CTRL_ENABLE_Msk | SysTick_CTRL_TICKINT_Msk);
}

// Обработчик прерывания от системного таймера
// подсчитывает прошедшее время в мс.
void SysTick_Handler()
{
    if (SysTick_CNT > 0)
        SysTick_CNT--;
    //   delayTimerValue--;
}

void sysDelay(uint32_t msec)
{
    SysTick_CNT = msec;
    while (SysTick_CNT)
    {
    };
}
*/