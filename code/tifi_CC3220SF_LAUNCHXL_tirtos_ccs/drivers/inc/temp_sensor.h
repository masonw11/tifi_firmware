/*!
 * @file temp_sensor.h
 *
 * Header for the TMP116 driver.
 * @author Mason Williams
 * @date 2022
 */

/*
 * temp_sensor.h
 *
 *  Created on: Jun 26, 2022
 *      Author: Mason Williams
 */


#ifndef DRIVERS_INC_TEMP_SENSOR_H_
#define DRIVERS_INC_TEMP_SENSOR_H_

/*! Resolution for converting result register to Celsius. */
#define TMP116_LSB_C    (0.0078125f)

/*!
 * TMP116 registers for reading and writing.
 *
 * @note The TMP116_TEMP register is read-only.
 */
typedef enum
{
    TMP116_TEMP,        /*!< Temperature conversion result register */
    TMP116_CFGR,        /*!< Configuration register */
    TMP116_HIGH_LIM,    /*!< Temperature high limit register */
    TMP116_LOW_LIM,     /*!< Temperature low limit register */
    TMP116_EEPROM_UL,   /*!< EEPROM unlock register */
    TMP116_EEPROM1,     /*!< EEPROM general-purpose register 1 */
    TMP116_EEPROM2,     /*!< EEPROM general-purpose register 2 */
    TMP116_EEPROM3,     /*!< EEPROM general-purpose register 3 */
    TMP116_EEPROM4,     /*!< EEPROM general-purpose register 4 */
    TMP116_DEVICE_ID,   /*!< Device ID register */
} Tmp116Reg;

#endif /* DRIVERS_INC_TEMP_SENSOR_H_ */
