# Day 3 - LED Toggle

## Objective

Learn how to implement a toggle mechanism using a push button and an LED. Unlike the previous project where the LED stayed ON only while the button was pressed, this project changes the LED state with each button press.

---

## Concepts Learned

- Boolean (`bool`) variables
- Program state
- Edge detection
- Button state tracking
- INPUT_PULLUP
- Digital Input and Output
- Conditional Statements (`if`)
- State-based programming

---

## Hardware Used

- Arduino Mega 2560
- Breadboard
- LED
- 220Ω Resistor
- Push Button
- Jumper Wires

---

## Circuit Connections

### LED

Arduino Pin 8 → 220Ω Resistor → LED (Anode)

LED (Cathode) → GND

### Push Button

Arduino Pin 2 → Push Button → GND

Button configured using Arduino's internal pull-up resistor (`INPUT_PULLUP`).

---

## Program Behaviour

- Initially, the LED is OFF.
- Press the button once → LED turns ON.
- Release the button → LED remains ON.
- Press the button again → LED turns OFF.
- Repeat.

---

## Key Concepts

### State

The program stores the current LED status using a boolean variable.

```cpp
bool ledState = false;
```

---

### Edge Detection

Instead of checking whether the button is currently pressed, the program detects the transition from:

HIGH → LOW

This ensures the LED changes state only once for every button press.

---

### Variables Used

```cpp
bool ledState;
bool currentButtonState;
bool lastButtonState;
```

---

## Learning Outcome

This project introduced state-based programming, one of the most important concepts in embedded software development. It demonstrates how firmware can remember previous states and react only to specific events rather than continuously responding to input levels.

---

## Folder Structure

```
03_LED_Toggle/
│
├── LED_Toggle.ino
└── README.md
```

---

## Next Project

➡️ Day 4 - Button Debouncing