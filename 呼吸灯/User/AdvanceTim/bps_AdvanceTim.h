#ifndef __BPS_ADVANCETIM_H__
#define __BPS_ADVANCETIM_H__

#include "stm32f10x.h" 


/************�߼���ʱ��TIM�������壬ֻ��TIM1��TIM8************/
// ��ʹ�ò�ͬ�Ķ�ʱ����ʱ�򣬶�Ӧ��GPIO�ǲ�һ���ģ����Ҫע��
// ��������ʹ�ø߼����ƶ�ʱ��TIM8

#define            ADVANCE_TIM                   TIM8
#define            ADVANCE_TIM_APBxClock_FUN     RCC_APB2PeriphClockCmd
#define            ADVANCE_TIM_CLK               RCC_APB2Periph_TIM8
// PWM �źŵ�Ƶ�� F = TIM_CLK/{(ARR+1)*(PSC+1)}
#define            ADVANCE_TIM_PERIOD            (8-1)
#define            ADVANCE_TIM_PSC               (9-1)
#define            ADVANCE_TIM_PULSE             4

#define            ADVANCE_TIM_IRQ               TIM8_UP_IRQn
#define            ADVANCE_TIM_IRQHandler        TIM8_UP_IRQHandler

// TIM8 ����Ƚ�ͨ��
#define            ADVANCE_TIM_CH2_GPIO_CLK      RCC_APB2Periph_GPIOC
#define            ADVANCE_TIM_CH2_PORT          GPIOC
#define            ADVANCE_TIM_CH2_PIN           GPIO_Pin_7

// TIM8 ����Ƚ�ͨ���Ļ���ͨ��
#define            ADVANCE_TIM_CH2N_GPIO_CLK      RCC_APB2Periph_GPIOB
#define            ADVANCE_TIM_CH2N_PORT          GPIOB
#define            ADVANCE_TIM_CH2N_PIN           GPIO_Pin_0

// TIM8 ����Ƚ�ͨ����ɲ��ͨ��
#define            ADVANCE_TIM_BKIN_GPIO_CLK      RCC_APB2Periph_GPIOA
#define            ADVANCE_TIM_BKIN_PORT          GPIOA
#define            ADVANCE_TIM_BKIN_PIN           GPIO_Pin_6

/**************************��������********************************/

void ADVANCE_TIM_Init(void);

#endif
