# Arduino-Controlled-FlashLight
This is a very simple little project to help build my skills in both the development process of software and hardware.
# Project Goal
To create a flashlight that can be turned on and off remotely or iterate through a number of different functions, i.e. light flashing, light on/off, and more.
# Idea Behind Project
I came up with the idea for this project after playing a tag-like game with my fiancee and her two little sisters. The game was me and my fiancee hiding with all the lights in the house off and waiting for her sister to walk by with a flashlight. We would then try to scare them in different ways. While this game was fun for everyone I thought it could be made more fun if the hiders could turn on or off the finders flashlight, I thought the best way to do this would be to put an Ardunio inside of a flashlight body and use Bluetooth to control it.  

The Bluetooth plan didn't end up working out in the prototype I made, most parts didn't end up working in the prototype. But that will be addressed more in the prototype build section. This really isn't a complex project, the complex part will be implementing all of the features I want in a fun way. I am looking at this project as if I am making an actual toy.  

# Prototype Build
To start building the prototype I bought a cheap pair of flashlights on Amazon. I then broke down one of these flashlights to see how much room I had to work with.
![alt text](https://github.com/HunterMV/Arduino-Controlled-FlashLight/blob/main/images/image4.jpeg)
Then I started testing a way to control the LED that came with the flashlight. It worked pretty well, but there's a big issue I didn't see until I tried screwing the light back onto the flashlight body. When the light is screwed back on the wires I soldered to it rotate with it and can break off. I need to think of something that will make a connection with the light once it is screwed in all the way, I'll end up 3D printing something for that.
![alt text](https://github.com/HunterMV/Arduino-Controlled-FlashLight/blob/main/images/image3.jpeg)
![alt text](https://github.com/HunterMV/Arduino-Controlled-FlashLight/blob/main/images/image0.jpeg)
Next I messed around trying to get the Bluetooth Module I bought working, you can find it [Here](https://www.amazon.com/gp/product/B071YJG8DR/ref=ppx_od_dt_b_asin_title_s00?ie=UTF8&psc=1). It seems to work pretty well, I don't know much about Bluetooth Module but I was able to connect it to my laptop and send data between the board and my laptop. What I didn't know when buying the Module was that it won't connect to IOS devices. So, I decided to put Bluetooth control to the side for a while.

Then I put together all the electronics in the flashlight body, which didn't end up being much. Just a battery pack, Arduino mini, and a transistor. I tried using a soldering board to hold all the pieces in place but it was too big for the flashlight body and I wasn't able to use it. That is why the electronics look so ugly inside the body, I will clean it up soon.
![alt text](https://github.com/HunterMV/Arduino-Controlled-FlashLight/blob/main/images/image2.jpeg)
Speaking of clean up the Arduino mini I used is definitely overkill in this prototype, at this point it is only using one pin. When I add back in some kind of remote control it will be using 5 or so but max I can't see it use more than 10 pins. So I want to look for something a little under an Arduino mini.

But for now, the flashlight is working, here is the code.

![alt text](https://github.com/HunterMV/Arduino-Controlled-FlashLight/blob/main/images/Code.PNG)

Very simple but I think a good place to start.

# Future Features
* Remote control of some kind of Bluetooth or otherwise.
* Replace LED with RGB LED
* Fix light screw-on system
* Add more light functions
* Add a motor inside the flashlight to make it vibrate
