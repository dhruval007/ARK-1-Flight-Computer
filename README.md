# ARK-1-Flight-Computer
ARK-1 is ment for research-oriented model rocketry, amateur high-power rockets, and projects requiring reliable, accurate data from multiple environmental and inertial sensors. It is intended for advanced users seeking to log and wirelessly transmit comprehensive flight telemetry for analysis, simulation, or closed-loop control.
# 🚀 ARK-1 Flight Computer
## 📂 Project Structure
 `code/` → Main firmware + sensor test codes  
 `hardware/` → PCB designs, EasyEDA models  
 `docs/` → Flowcharts, algorithms  
 `team/` → Contributors  
## Features of ARK-1:
 Key Components:

MAX-M10S-00B (GNSS Navigation Sensor): Provides precise positioning and velocity data.

BMA400 (Accelerometer): Measures 3-axis acceleration for trajectory and launch analysis.

VEML6075 (UV Sensor): Captures UV index and radiation exposure during flight.

E32-900T30D (RF LoRa Module): Enables long-range telemetry link with ground station.

SHT31-DIS-B (Temperature & Humidity Sensor): Records environmental conditions inside and outside payload.

LIS2MDLTR (Magnetometer): Supplies orientation and heading data for attitude determination.

BMP390 (Pressure Sensor): Provides altitude estimation and apogee detection.

## Core Functionality:

Onboard logging of sensor data for post-flight analysis.

Real-time telemetry transmission via LoRa RF.

Integrated flight logic for event detection (e.g., apogee, parachute deployment).

Modular design for expanding sensor payloads.
## Team members:
 Dhruval Parmar  
 Tanvi Parmar   
