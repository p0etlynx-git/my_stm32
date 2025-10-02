#ifndef sysdelay_h
#define sysdelay_h

#include <stdint.h>
#include "stm32f1xx.h"

// памятка
#define SET_BIT(REG, BIT) ((REG) |= (BIT))
#define CLEAR_BIT(REG, BIT) ((REG) &= ~(BIT))
#define READ_BIT(REG, BIT) ((REG) & (BIT))
#define CLEAR_REG(REG) ((REG) = (0x0))
#define WRITE_REG(REG, VAL) ((REG) = (VAL))
#define READ_REG(REG) ((REG))
#define MODIFY_REG(REG, CLEARMASK, SETMASK) WRITE_REG((REG), (((READ_REG(REG)) & (~(CLEARMASK))) | (SETMASK)))

// Обработчик прерывания системного таймера
void SysTick_Handler();
// Настроить системный таймер
void InitSysTick(void);
// Функция задержки в милисекундах
// На системном таймере
void sysDelay(uint32_t msec);

#else
#endif

// памятка
// #define SET_BIT(REG, BIT)     ((REG) |= (BIT))
// #define CLEAR_BIT(REG, BIT)   ((REG) &= ~(BIT))
// #define READ_BIT(REG, BIT)    ((REG) & (BIT))
// #define CLEAR_REG(REG)        ((REG) = (0x0))
// #define WRITE_REG(REG, VAL)   ((REG) = (VAL))
// #define READ_REG(REG)         ((REG))
// #define MODIFY_REG(REG, CLEARMASK, SETMASK)  WRITE_REG((REG), (((READ_REG(REG)) & (~(CLEARMASK))) | (SETMASK)))
