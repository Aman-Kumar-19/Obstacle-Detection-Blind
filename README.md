# Obstacle Detection System for the Blind

## 📌 Introduction
This project helps visually impaired individuals navigate safely by detecting obstacles using **ultrasonic sensors** and providing **buzzer alerts**.

## 📸 Output Images
### 1. Serial Monitor Showing Distance  
<img width="409" alt="image" src="https://github.com/user-attachments/assets/5bd472f2-0bc7-4038-8f9d-8e7e32da3441" />



## 🛠️ Hardware Components Used
- **Arduino Nano** – Microcontroller to process sensor data  
- **Ultrasonic Sensors (x3)** – Measure distance in three directions (front, left, right)  
- **Buzzer** – Alerts when an obstacle is detected  
- **9V Battery** – Provides power  

## 💻 Code Overview
The Arduino code (`obstacle_detection.ino`) works as follows:
1. Reads **distance values** from three ultrasonic sensors.
2. Activates **buzzer alerts** based on obstacle proximity.
3. Displays **sensor readings** in the **Serial Monitor**.

## 📂 Folder Structure
- `/Images` → Contains **output images** and **code functionality screenshots**.
- `/Code` → Contains the **Arduino sketch (`.ino`)**.

## 🚀 How to Use
1. **Upload the code** (`obstacle_detection.ino`) to an **Arduino Nano**.  
2. **Connect the hardware** as per the circuit diagram.  
3. **Power the system** with a 9V battery.  
4. **Observe the buzzer alerts** as obstacles appear in the sensor range.  

## 🔗 Future Improvements
- ✅ Add **wearable integration** (e.g., smart belt or vest).  
- ✅ Implement **vibration feedback** for silent alerts.  
- ✅ Extend detection range with **LiDAR sensors**.  
- ✅ Develop a **mobile app for real-time alerts**.  

---

