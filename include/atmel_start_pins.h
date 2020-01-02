/*
 * Code generated from Atmel Start.
 *
 * This file will be overwritten when reconfiguring your Atmel Start project.
 * Please copy examples or other code you want to keep to a separate file
 * to avoid losing it when reconfiguring.
 */
#ifndef ATMEL_START_PINS_H_INCLUDED
#define ATMEL_START_PINS_H_INCLUDED

#include <port.h>

/**
 * \brief Set PWM1 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void PWM1_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTB_set_pin_pull_mode(3, pull_mode);
}

/**
 * \brief Set PWM1 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void PWM1_set_dir(const enum port_dir dir)
{
	PORTB_set_pin_dir(3, dir);
}

/**
 * \brief Set PWM1 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void PWM1_set_level(const bool level)
{
	PORTB_set_pin_level(3, level);
}

/**
 * \brief Toggle output level on PWM1
 *
 * Toggle the pin level
 */
static inline void PWM1_toggle_level()
{
	PORTB_toggle_pin_level(3);
}

/**
 * \brief Get level on PWM1
 *
 * Reads the level on a pin
 */
static inline bool PWM1_get_level()
{
	return PORTB_get_pin_level(3);
}

/**
 * \brief Set TRIG_F pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void TRIG_F_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTC_set_pin_pull_mode(0, pull_mode);
}

/**
 * \brief Set TRIG_F data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void TRIG_F_set_dir(const enum port_dir dir)
{
	PORTC_set_pin_dir(0, dir);
}

/**
 * \brief Set TRIG_F level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void TRIG_F_set_level(const bool level)
{
	PORTC_set_pin_level(0, level);
}

/**
 * \brief Toggle output level on TRIG_F
 *
 * Toggle the pin level
 */
static inline void TRIG_F_toggle_level()
{
	PORTC_toggle_pin_level(0);
}

/**
 * \brief Get level on TRIG_F
 *
 * Reads the level on a pin
 */
static inline bool TRIG_F_get_level()
{
	return PORTC_get_pin_level(0);
}

/**
 * \brief Set ECHO_F pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void ECHO_F_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTC_set_pin_pull_mode(1, pull_mode);
}

/**
 * \brief Set ECHO_F data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void ECHO_F_set_dir(const enum port_dir dir)
{
	PORTC_set_pin_dir(1, dir);
}

/**
 * \brief Set ECHO_F level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void ECHO_F_set_level(const bool level)
{
	PORTC_set_pin_level(1, level);
}

/**
 * \brief Toggle output level on ECHO_F
 *
 * Toggle the pin level
 */
static inline void ECHO_F_toggle_level()
{
	PORTC_toggle_pin_level(1);
}

/**
 * \brief Get level on ECHO_F
 *
 * Reads the level on a pin
 */
static inline bool ECHO_F_get_level()
{
	return PORTC_get_pin_level(1);
}

/**
 * \brief Set ECHO_L pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void ECHO_L_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTC_set_pin_pull_mode(2, pull_mode);
}

/**
 * \brief Set ECHO_L data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void ECHO_L_set_dir(const enum port_dir dir)
{
	PORTC_set_pin_dir(2, dir);
}

/**
 * \brief Set ECHO_L level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void ECHO_L_set_level(const bool level)
{
	PORTC_set_pin_level(2, level);
}

/**
 * \brief Toggle output level on ECHO_L
 *
 * Toggle the pin level
 */
static inline void ECHO_L_toggle_level()
{
	PORTC_toggle_pin_level(2);
}

/**
 * \brief Get level on ECHO_L
 *
 * Reads the level on a pin
 */
static inline bool ECHO_L_get_level()
{
	return PORTC_get_pin_level(2);
}

/**
 * \brief Set TRIG_L pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void TRIG_L_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTC_set_pin_pull_mode(3, pull_mode);
}

/**
 * \brief Set TRIG_L data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void TRIG_L_set_dir(const enum port_dir dir)
{
	PORTC_set_pin_dir(3, dir);
}

/**
 * \brief Set TRIG_L level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void TRIG_L_set_level(const bool level)
{
	PORTC_set_pin_level(3, level);
}

/**
 * \brief Toggle output level on TRIG_L
 *
 * Toggle the pin level
 */
static inline void TRIG_L_toggle_level()
{
	PORTC_toggle_pin_level(3);
}

/**
 * \brief Get level on TRIG_L
 *
 * Reads the level on a pin
 */
static inline bool TRIG_L_get_level()
{
	return PORTC_get_pin_level(3);
}

/**
 * \brief Set PC4 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void PC4_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTC_set_pin_pull_mode(4, pull_mode);
}

/**
 * \brief Set PC4 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void PC4_set_dir(const enum port_dir dir)
{
	PORTC_set_pin_dir(4, dir);
}

/**
 * \brief Set PC4 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void PC4_set_level(const bool level)
{
	PORTC_set_pin_level(4, level);
}

/**
 * \brief Toggle output level on PC4
 *
 * Toggle the pin level
 */
static inline void PC4_toggle_level()
{
	PORTC_toggle_pin_level(4);
}

/**
 * \brief Get level on PC4
 *
 * Reads the level on a pin
 */
static inline bool PC4_get_level()
{
	return PORTC_get_pin_level(4);
}

/**
 * \brief Set PC5 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void PC5_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTC_set_pin_pull_mode(5, pull_mode);
}

/**
 * \brief Set PC5 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void PC5_set_dir(const enum port_dir dir)
{
	PORTC_set_pin_dir(5, dir);
}

/**
 * \brief Set PC5 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void PC5_set_level(const bool level)
{
	PORTC_set_pin_level(5, level);
}

/**
 * \brief Toggle output level on PC5
 *
 * Toggle the pin level
 */
static inline void PC5_toggle_level()
{
	PORTC_toggle_pin_level(5);
}

/**
 * \brief Get level on PC5
 *
 * Reads the level on a pin
 */
static inline bool PC5_get_level()
{
	return PORTC_get_pin_level(5);
}

/**
 * \brief Set ECHO_R pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void ECHO_R_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTD_set_pin_pull_mode(1, pull_mode);
}

/**
 * \brief Set ECHO_R data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void ECHO_R_set_dir(const enum port_dir dir)
{
	PORTD_set_pin_dir(1, dir);
}

/**
 * \brief Set ECHO_R level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void ECHO_R_set_level(const bool level)
{
	PORTD_set_pin_level(1, level);
}

/**
 * \brief Toggle output level on ECHO_R
 *
 * Toggle the pin level
 */
static inline void ECHO_R_toggle_level()
{
	PORTD_toggle_pin_level(1);
}

/**
 * \brief Get level on ECHO_R
 *
 * Reads the level on a pin
 */
static inline bool ECHO_R_get_level()
{
	return PORTD_get_pin_level(1);
}

/**
 * \brief Set TRIG_R pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void TRIG_R_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTD_set_pin_pull_mode(2, pull_mode);
}

/**
 * \brief Set TRIG_R data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void TRIG_R_set_dir(const enum port_dir dir)
{
	PORTD_set_pin_dir(2, dir);
}

/**
 * \brief Set TRIG_R level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void TRIG_R_set_level(const bool level)
{
	PORTD_set_pin_level(2, level);
}

/**
 * \brief Toggle output level on TRIG_R
 *
 * Toggle the pin level
 */
static inline void TRIG_R_toggle_level()
{
	PORTD_toggle_pin_level(2);
}

/**
 * \brief Get level on TRIG_R
 *
 * Reads the level on a pin
 */
static inline bool TRIG_R_get_level()
{
	return PORTD_get_pin_level(2);
}

/**
 * \brief Set PWM2 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void PWM2_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTD_set_pin_pull_mode(3, pull_mode);
}

/**
 * \brief Set PWM2 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void PWM2_set_dir(const enum port_dir dir)
{
	PORTD_set_pin_dir(3, dir);
}

/**
 * \brief Set PWM2 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void PWM2_set_level(const bool level)
{
	PORTD_set_pin_level(3, level);
}

/**
 * \brief Toggle output level on PWM2
 *
 * Toggle the pin level
 */
static inline void PWM2_toggle_level()
{
	PORTD_toggle_pin_level(3);
}

/**
 * \brief Get level on PWM2
 *
 * Reads the level on a pin
 */
static inline bool PWM2_get_level()
{
	return PORTD_get_pin_level(3);
}

/**
 * \brief Set IN1 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void IN1_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTD_set_pin_pull_mode(4, pull_mode);
}

/**
 * \brief Set IN1 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void IN1_set_dir(const enum port_dir dir)
{
	PORTD_set_pin_dir(6, dir);
}

/**
 * \brief Set IN1 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void IN1_set_level(const bool level)
{
	PORTD_set_pin_level(6, level);
}

/**
 * \brief Toggle output level on IN1
 *
 * Toggle the pin level
 */
static inline void IN1_toggle_level()
{
	PORTD_toggle_pin_level(4);
}

/**
 * \brief Get level on IN1
 *
 * Reads the level on a pin
 */
static inline bool IN1_get_level()
{
	return PORTD_get_pin_level(6);
}

/**
 * \brief Set IN2 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void IN2_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTD_set_pin_pull_mode(7, pull_mode);
}

/**
 * \brief Set IN2 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void IN2_set_dir(const enum port_dir dir)
{
	PORTD_set_pin_dir(7, dir);
}

/**
 * \brief Set IN2 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void IN2_set_level(const bool level)
{
	PORTD_set_pin_level(7, level);
}

/**
 * \brief Toggle output level on IN2
 *
 * Toggle the pin level
 */
static inline void IN2_toggle_level()
{
	PORTD_toggle_pin_level(7);
}

/**
 * \brief Get level on IN2
 *
 * Reads the level on a pin
 */
static inline bool IN2_get_level()
{
	return PORTD_get_pin_level(7);
}

/**
 * \brief Set IN3 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void IN3_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTB_set_pin_pull_mode(1, pull_mode);
}

/**
 * \brief Set IN3 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void IN3_set_dir(const enum port_dir dir)
{
	PORTB_set_pin_dir(1, dir);
}

/**
 * \brief Set IN3 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void IN3_set_level(const bool level)
{
	PORTB_set_pin_level(1, level);
}

/**
 * \brief Toggle output level on IN3
 *
 * Toggle the pin level
 */
static inline void IN3_toggle_level()
{
	PORTB_toggle_pin_level(1);
}

/**
 * \brief Get level on IN3
 *
 * Reads the level on a pin
 */
static inline bool IN3_get_level()
{
	return PORTB_get_pin_level(1);
}

/**
 * \brief Set IN4 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void IN4_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTB_set_pin_pull_mode(2, pull_mode);
}

/**
 * \brief Set IN4 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void IN4_set_dir(const enum port_dir dir)
{
	PORTB_set_pin_dir(2, dir);
}

/**
 * \brief Set IN4 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void IN4_set_level(const bool level)
{
	PORTB_set_pin_level(2, level);
}

/**
 * \brief Toggle output level on IN4
 *
 * Toggle the pin level
 */
static inline void IN4_toggle_level()
{
	PORTB_toggle_pin_level(2);
}

/**
 * \brief Get level on IN4
 *
 * Reads the level on a pin
 */
static inline bool IN4_get_level()
{
	return PORTD_get_pin_level(7);
}

#endif /* ATMEL_START_PINS_H_INCLUDED */
