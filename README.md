# Project---Transistor-and-Diode-detection

<b>Introduction:</b>

In this lab training, we are aimed to:
- Practice the work with embedded/integrated systems.
- To learn the working of an Arduino board and program it according to the tasks and problem solutions.
- What is Arduino and why do we prefer to use Arduino in embedded systems ?
- Provide a solution for the given task using the Arduino

<b.Diode & Transistor Detection:</b>

The goal of the lab is to:

- Design a circuit using an Arduino board which should be able to detect diodes and transistors.
- Configuration of a diode i.e. Forward or Reversed biased diode.
- The type of a transistor i.e. a NPN or PNP transistor. 
- Indication of the detection results should be printed on the serial console.

<b>Detection of A Diode:</b>

- There are many checks we can do to see if a diode is functioning the way it should.
- A simple solution to detect a diode is to place it in a circuit.
- The diode will either allow or prevent current through the circuit depending on the polarity of the applied voltage.
- If
(a) Current flow is permitted; the diode is forward biased and detected.
(b) Current flow is prohibited; the diode is reversed biased.

<b>Detection of A Transistor:</b>

Build a simple circuit and use the transistor as a switch to effectively test the "gain" of the BJT for the two possibilities.

<b><i>Identifying the NPN Transistor:</b></i>

- Set the positive probe to the (assume it's Base) pin1 and the negative probe to pin2.
- If there's a voltage drop then it means pin2 is either Emitter or Collector.
- Similarly set the negative probe to the pin-3 (collector) with respect to the pin-2. Some voltage drop will be seen again.
- It will ensure that it is a NPN transistor. 
- The logic behind this is, in NPN transistor Emitter (E) is a N-type material Equivalent to cathode of the diode, Base (B) is a P-type material Equivalent to anode of the diode and Collector(C) is a N-type material Equivalent to cathode of the diode
- If the positive probe is connected to anode and negative probe is connected to cathode, then it will show voltage. If the connections are interchanged it will not show any value.

<b><i>Identifying the PNP Transistor:</b></i>

- Set the positive probe to the (assume it's Emitter) pin1 and the negative probe to pin2.
- If there's a voltage drop then it means pin2 is Base.
- Similarly set the negative probe to the (Base) with respect to the pin-3 (assuming it's collector). There will be again some voltage drop.
- It will ensure that it is a PNP transistor. 
- The logic behind this is, in PNP transistor Emitter (E) is a P-type material Equivalent to anode of the diode, Base (B) is a N-type material Equivalent to cathode of the diode and Collector(C) is a P-type material Equivalent to anode of the diode.
- If the positive probe is connected to anode and negative probe is connected to cathode, then it will show voltage. If the connections are interchanged it will not show any value.
