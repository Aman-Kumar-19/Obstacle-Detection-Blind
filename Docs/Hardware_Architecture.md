# Hardware Architecture for Obstacle Detection System

## 📌 Overview
The obstacle detection system is designed to assist visually impaired individuals in safely navigating their environment. It detects obstacles in three directions (front, left, and right) and alerts the user using a buzzer.

---

## 🔧 **Hardware Components Used**
| S.No | Component         | Quantity | Description |
|------|------------------|----------|-------------|
| 1    | **Arduino Nano** | 1        | Microcontroller used to process sensor data and control the buzzer. |
| 2    | **Ultrasonic Sensors** | 3 | Measures distance from obstacles and sends data to the Arduino. |
| 3    | **Buzzer** | 1 | Provides auditory feedback to the user when an obstacle is detected. |
| 4    | **9V Battery** | 1 | Powers the system, making it portable. |

---

## 🔌 **Circuit Diagram**
You can refer to the following image for the wiring setup:  
![image](https://github.com/user-attachments/assets/6725fae8-2bd4-4b45-8dc8-21a78422d38a)


---

## ⚙️ **How It Works**
1. **Ultrasonic Sensors** continuously measure the distance of obstacles.
2. The **Arduino Nano** processes the sensor data.
3. If an object is detected within **30 cm**, the **buzzer** turns on.
4. The **buzzer frequency** varies depending on how close the obstacle is.
5. If no obstacle is found, the buzzer remains off.

---

## 📌 **Advantages of Chosen Components**
- **Arduino Nano**: Compact, power-efficient, and sufficient I/O pins.
- **Ultrasonic Sensors**: Accurate distance measurement.
- **Buzzer**: Simple and effective audio feedback.
- **9V Battery**: Portable and reliable power supply.

---

### **💡 Future Enhancements**
- **Vibration Feedback**: Add a vibration motor for silent feedback.
- **Mobile App Integration**: Display obstacle detection data in a smartphone app.
- **Rechargeable Battery**: Increase operational time with a more efficient power source.

---

This **Hardware Architecture** document will help others understand your project setup! 🚀

---
