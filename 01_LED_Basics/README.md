# Day 1 - LED Blink

## Objective
Learn the fundamentals of Arduino programming by controlling an external LED using digital output.

---

## Concepts Learned

- Arduino IDE
- Structure of an Arduino program
  - `setup()`
  - `loop()`
- Variables
- `pinMode()`
- `digitalWrite()`
- `delay()`
- Digital Output
- LED polarity (Anode & Cathode)
- Current limiting resistor (220Ω)

---

## Hardware Used

- Arduino Mega 2560
- Breadboard
- LED
- 220Ω Resistor
- Jumper Wires
- USB Cable

---

## Circuit

Arduino Pin 8 → 220Ω Resistor → LED (Anode)

LED (Cathode) → GND

---

## Program

The LED blinks continuously with a 1-second interval.

- LED ON for 1 second
- LED OFF for 1 second
- Repeat forever

---

## Key Learnings

- Difference between INPUT and OUTPUT pins.
- How digital pins provide HIGH (5V) and LOW (0V).
- Importance of current-limiting resistors.
- Understanding the purpose of `setup()` and `loop()`.
- Writing clean code using variables instead of hardcoding pin numbers.

---

## Folder Structure

```
Day-01_LED_Blink/
│
├── LED_Blink.ino
└── README.md
```

---

## Outcome

Successfully built and programmed an external LED blinking circuit using Arduino Mega 2560.

---

## Next

➡️ Day 2 - Push Button Input with `INPUT_PULLUP`