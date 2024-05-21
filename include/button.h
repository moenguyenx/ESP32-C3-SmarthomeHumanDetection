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
#define BUTTON_PIN  4

/*======================================================================================================================
 *                                                      ENUMS
======================================================================================================================*/
typedef enum
{
    E_PRESSED,
    E_ERROR
} buttonState;
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
* @brief    Check button state
* @details  Attempt to connect to the specified WiFi network using the provided credentials.
* 
* @param    None
* @return   None
*/
void checkButton(void);

/*
* @brief    Config button 
* @details  Assign pin and interrupt to button.
* 
* @param    None
* @return   None
*/
void buttonSetup(void);



