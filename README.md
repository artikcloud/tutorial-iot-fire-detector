# An IoT device sends flame sensor data to ARTIK Cloud for viewing

Let's build an IoT device that sends flame sensor data to SAMI using SAMI's WebSockets. The IoT device consists of an off-the-shelf sensor, Arduino UNO and Raspberry Pi.

Introduction
-------------

The tutorial [Your first IoT remote control system](https://developer.artik.cloud/documentation/tutorials/your-first-iot-device.html) at https://developer.artik.cloud/documentation describes what the system does and how it is implemented.

This repository contains the following software:

 - A Sketch program running on the Arduino
 - A Node.js script running on the Raspberry Pi

Sketch Program for Arduino
-------------

The code is located in `read_flame_sensor` directory. Consult [Set up the Raspberry Pi](https://developer.artik.cloud/documentation/tutorials/your-first-iot-device.html#step-3-set-up-the-raspberry-pi) in the tutorial to install the packages and to run the program on the Pi.

Nodejs Program for Raspberry Pi
-------------

The code is located in root directory. Consult [Set up the Raspberry Pi](https://developer.artik.cloud/documentation/tutorials/your-first-iot-device.html#step-3-set-up-the-raspberry-pi) in the tutorial to install the packages and to run the program on the Pi.

More about ARTIK Cloud
---------------

If you are not familiar with ARTIK Cloud, we have extensive documentation at https://developer.artik.cloud/documentation

The full ARTIK Cloud API specification can be found at https://developer.artik.cloud/documentation/api-spec.html

Peek into advanced sample applications at https://developer.artik.cloud/documentation/samples/

To create and manage your services and devices on ARTIK Cloud, visit the Developer Dashboard at https://developer.artik.cloud

License and Copyright
---------------------

Licensed under the Apache License. See LICENSE.

Copyright (c) 2016 Samsung Electronics Co., Ltd.
