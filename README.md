# 🌿 Smart Plant Monitoring System | NodeMCU + Blynk IoT

This project is an IoT-based smart agriculture system using **NodeMCU ESP8266**, **Soil Moisture Sensor**, **DHT11 Temperature & Humidity Sensor**, and a **Relay Module** to automate plant watering and monitor environmental conditions.

All sensor data is sent to the **Blynk IoT App**, where users can view **real-time values** and also see **minimum and maximum moisture levels**. The system turns on a **water pump** when moisture drops below the threshold.
  
📦 Features

- 📊 Real-time soil moisture, temperature, and humidity monitoring
- 📱 Remote access via **Blynk IoT app**
- 💧 Auto-watering using relay-controlled pump
- ✅ Tracks **min/max moisture values**
- 🔔 Manual pump control through Blynk if needed
- 🔌 Power-efficient and compact


🧰 Components Used

| Component                 | Quantity |
|--------------------------|----------|
| NodeMCU ESP8266          | 1        |
| Soil Moisture Sensor     | 1        |
| DHT11 Temp & Humidity    | 1        |
| 5V Relay Module          | 1        |
| Submersible Water Pump   | 1        |
| Jumper Wires             | As needed|
| Power Supply (5V)        | 1        |


📲 Blynk Setup

1. Download the **Blynk IoT app** (New Blynk, not Legacy)
2. Create a new template and device
3. Add:
   - 3 **Value Display** widgets for soil moisture, temperature, and humidity
   - 1 **Switch** widget for manual pump control
   - 1 **Gauge** widget (optional) for moisture range
4. Note your **Template ID**, **Device Name**, and **Auth Token**
5. Replace those values in your Arduino code


🔧 Circuit Connections

| NodeMCU Pin | Component            |
|-------------|----------------------|
| A0          | Soil Moisture Sensor |
| D2          | DHT11 Data Pin       |
| D1          | Relay IN Pin         |
| 3V/5V, GND  | Power Supply         |


🧠 Working Logic

- If **soil moisture < threshold**, relay turns ON → water pump activates
- If **moisture > threshold**, pump stays OFF
- **Blynk app** shows live values and alerts
- Also tracks **min** and **max** soil moisture values during runtime



🚀 Future Improvements

- Add water level sensor for tank monitoring
- Enable email/SMS alerts for dry soil
- Use battery power with solar charging


🙌 Support & Connect

If you found this project helpful:

- 🔗 [Connect with me on LinkedIn]([https://www.linkedin.com/in/YOUR_LINKEDIN_PROFILE](https://www.linkedin.com/in/eliyas-khan-9b3a3928b/))  
- 📺 [Subscribe to my YouTube Channel]([https://www.youtube.com/@YOUR_CHANNEL](https://www.youtube.com/@EliyasScienceInfo))

Stay updated with more IoT, embedded, and automation projects!

Made with 💚 for smart farming and sustainability.
