# Vehicle-Control-System-
# Vehicle Control System

## Overview

This project simulates a vehicle control system where the user can interactively manage the vehicle's engine, monitor sensors, and adjust settings based on sensor readings. The system is implemented in C on a console interface.

## Functionalities

1. **Main Menu Options**:
   - Ask the user to choose from:
     a. Turn on the vehicle engine
     b. Turn off the vehicle engine
     c. Quit the system

2. **Quit the System**:
   - If the user chooses to quit, the program terminates.

3. **Turn off the Vehicle Engine**:
   - If the user chooses to turn off the engine, they are redirected to the main menu to make another choice.

4. **System State Display**:
   - After each user choice, the system state (engine state, sensor states) is displayed on the screen.

5. **Turn on the Vehicle Engine**:
   - Displays a "Sensors Set Menu" for simulating sensor readings.
     a. Turn off the engine
     b. Set the traffic light color
     c. Set the room temperature
     d. Set the engine temperature

6. **Sensor-Based Actions**:
   - While the engine is ON, continuously display the sensor menu and wait for user input.
   - Perform actions based on sensor readings:
     a. Adjust vehicle speed based on traffic light color.
     b. Control AC based on room temperature.
     c. Manage engine temperature based on sensor readings.
     d. Adjust settings and display current vehicle state after each action.

7. **Bonus Requirement - Preprocessor Directive**:
   - Use `#define WITH_ENGINE_TEMP_CONTROLLER` to optionally compile code related to the engine temperature controller:
     - If enabled (1), include logic for engine temperature controller operations.
     - If disabled (0), exclude the logic related to the engine temperature controller.

## Implementation Details

### Input/Output Handling

- Use `printf` to display menu options and state information.
- Use `scanf` to capture user input and sensor readings.

### Conditional Compilation

- Utilize `#if` preprocessor directives to selectively include or exclude code blocks based on the `WITH_ENGINE_TEMP_CONTROLLER` define.

### Dependencies

- Standard C libraries for input/output operations.
- Implement functions for menu navigation, sensor simulation, and system state display.

## Usage

1. **Compile**: Use a C compiler to compile the source code.
2. **Run**: Execute the compiled executable to start the program.
3. **Follow On-Screen Prompts**: Follow the on-screen menu prompts to interact with the vehicle control system.

## Notes

- Ensure that user inputs are handled correctly using `scanf` to avoid issues with new lines or unintended inputs.
- Adjust sensor simulation and menu options based on actual hardware or simulation environment.

