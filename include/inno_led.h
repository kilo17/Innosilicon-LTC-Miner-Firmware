/******************************************************************************
 *
 * 文件名  ： inno_led.h
 * 负责人  ： 彭鹏(pengp@innosilicon.com.cn)
 * 创建日期： 20171129
 * 版本号  ： r1.0
 * 文件描述： 实现led相关接口
 * 版权说明： Copyright (c) 2000-2020 Innosilicon
 * 其    他： 无
 * 修改日志： 无
 *
 *******************************************************************************/
/*---------------------------------- 预处理区 ---------------------------------*/
#ifndef _INNO_LED_H_
#define _INNO_LED_H_

/************************************ 头文件 ***********************************/
#include <stdio.h>
#include <stdint.h>

#include "zynq_gpio.h"

/************************************ 宏定义 ***********************************/

/*********************************** 类型定义 **********************************/


/*--------------------------------- 接口声明区 --------------------------------*/

/*********************************** 全局变量 **********************************/

/*********************************** 接口函数 **********************************/

/*******************************************************************************
 *
 * 函数名  : inno_led_on
 * 负责人  : 彭鹏
 * 创建日期: 20171129
 * 函数功能: 算力板点灯
 * 输入参数: gpio - gpio指针
 * 输出参数: 无
 * 返回值  : 无
 * 调用关系: 无
 * 其 它   : 无
 *
 ******************************************************************************/
void inno_led_on(ZYNQ_GPIO_T *gpio);

/*******************************************************************************
 *
 * 函数名  : inno_led_off
 * 负责人  : 彭鹏
 * 创建日期: 20171129
 * 函数功能: 算力板熄灯
 * 输入参数: gpio - gpio指针
 * 输出参数: 无
 * 返回值  : 无
 * 调用关系: 无
 * 其 它   : 无
 *
 ******************************************************************************/
void inno_led_off(ZYNQ_GPIO_T *gpio);

/*******************************************************************************
 *
 * 函数名  : inno_led_off
 * 负责人  : 彭鹏
 * 创建日期: 20171129
 * 函数功能: 算力板闪烁
 * 输入参数: gpio     - gpio指针
 *           ms_delay - led亮(灭)持续时间,即半周期
 *           cnt      - >0表示闪烁次数, <=0 表示无限循环闪烁
 * 输出参数: 无
 * 返回值  : 无
 * 调用关系: 无
 * 其 它   : 无
 *
 ******************************************************************************/
void inno_led_blink(ZYNQ_GPIO_T *gpio, int ms_delay, int cnt);

/*******************************************************************************
 *
 * 函数名  : inno_led_err_blink
 * 负责人  : 彭鹏
 * 创建日期: 20171129
 * 函数功能: 算力板出错闪灯,闪灯模式为:
 *           闪烁周期2*ms_delay,闪烁blink_cnt次,熄灯second_dark秒
 * 输入参数: gpio        - gpio指针
 *           ms_delay    - led亮(灭)持续时间,即半周期
 *           blink_cnt   - >0表示闪烁次数, <=0 表示循环闪烁
 *           second_dark - 每轮闪烁之间黑暗持续时间(秒)
 * 输出参数: 无
 * 返回值  : 无
 * 调用关系: 无
 * 其 它   : 无
 *
 ******************************************************************************/
void inno_led_err_blink(ZYNQ_GPIO_T *gpio, int ms_delay, int blink_cnt, int second_dark);

#endif // #ifndef _INNO_LED_H_

