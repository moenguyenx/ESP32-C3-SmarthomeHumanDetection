/*======================================================================================================================
 *                                                  INCLUDE FILES
 * 1) system and project includes
 * 2) needed interfaces from external units
 * 3) internal and external interfaces from this unit
======================================================================================================================*/
#include <Arduino.h>
/*======================================================================================================================
 *                                                  CONSTANTS
======================================================================================================================*/

/*======================================================================================================================
 *                                              DEFINES AND MACROS
======================================================================================================================*/
#define SENSOR_PIN      8

/*======================================================================================================================
 *                                                      ENUMS
======================================================================================================================*/
enum 
{
    WAITING,
    DETECTED,
    OFF
} State;
/*======================================================================================================================
 *                                              STRUCTURES AND OTHER TYPEDEFS
======================================================================================================================*/

/*======================================================================================================================
 *                                              GLOBAL VARIABLE DECLARATIONS
======================================================================================================================*/

/*======================================================================================================================
 *                                                  FUNCTION PROTOTYPES
======================================================================================================================*/

/*
* @brief    Gather infomation from LD240 sensor
* @details  Read analog signal from sensor
* 
* @param   None
* @pre      N/A
*/
void readSensorData(void);

