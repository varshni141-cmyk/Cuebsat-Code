# Cuebsat-Code
# 1U CubeSat Design, Programming & Integration

This repo documents some of the programming and subsystem-integration work I did during a hands-on Satellite Design & Integration workshop with Space Faculty Singapore.

I am an Aerospace Engineering student, so most of my coding experience has been tied to actually making engineering systems work rather than building software products. This was one of those projects — we assembled and programmed a 1U CubeSat training platform and worked across its OBC, ADCS, EPS, sensors and ground-station communication.

## What I worked on

During the workshop, I worked on:

- Programming the CubeSat's On-Board Computer (OBC) using Arduino
- Reading analog sensor data and satellite telemetry
- Reading OBC and EPS temperature measurements
- Monitoring battery voltage and basic subsystem health
- Creating warning logic for abnormal temperature and battery conditions
- Sending telemetry between the CubeSat and ground station using LoRa
- Working with serial communication between the OBC and ADCS
- Interfacing with the ADCS IMU and sun sensors
- Controlling the ADCS motor/reaction-wheel system using PWM
- Testing and integrating the different satellite subsystems

## Some of the systems involved

### OBC
The OBC acted as the central point for reading telemetry, processing commands and communicating with other subsystems.

Some of the exercises included requesting individual telemetry values through serial commands and creating a `sendAll()` function to transmit multiple readings together.

### ADCS
The ADCS exercises involved sensor readings and basic motor control.

We worked with:

- Adafruit BNO055 IMU
- Sun sensors
- PWM motor control
- Simple attitude-response logic
- Serial communication between the ADCS and OBC

### EPS
For the Electrical Power System, we worked with measurements such as:

- Battery voltage
- EPS temperature
- Basic warning/status monitoring

### Ground Station
The CubeSat communicated with the ground station through LoRa.

We experimented with:

- Radio transmission
- Serial-input commands
- Telemetry messages
- Timestamps
- Communication-range testing

## Code in this repository


I am also gradually organising and adding the larger CubeSat programs I worked with, including OBC, ADCS and ground-station functionality.

This repo is mainly a record of my hands-on learning in embedded systems, spacecraft subsystem integration and engineering programming.

## Tools & Technologies

- Arduino / C++
- Arduino Nano
- Arduino Nano Every
- LoRa communication
- Adafruit BNO055 IMU
- Analog sensors
- Serial communication
- PWM motor control
- Multimeter / electronics testing

## Context

This project was completed as part of a guided Space Faculty Singapore Satellite Design & Integration workshop using an educational 1U CubeSat platform.

The goal was not to develop flight-qualified satellite software from scratch, but to understand how the different spacecraft subsystems interact and to get hands-on experience programming, integrating and testing them.
