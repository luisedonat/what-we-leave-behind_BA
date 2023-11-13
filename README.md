# Unity Project for the Bachelor Thesis "What We Leave Behind – Designing an Application for Digital Data Curation to Empower a “Good Death”"

This repository contains the Unity Project for the AR application of the Bachelor Thesis "What We Leave Behind – Designing an Application for Digital Data Curation to Empower a “Good Death”" by Luise Donat at Ludwig-Maximilians-Universität München.

## Base Project and Used Assets

This project is based on the official Microsof project "Azure Object Anchors" (https://github.com/Azure/azure-object-anchors).
The following Unity Asset Store assets are also imported, though not in use:

- https://assetstore.unity.com/packages/vfx/shaders/fullscreen-camera-effects/outline-effect-78608 (Outline Effect)
- https://himmelhilf.itch.io/kawaii-house-interior-pack-free (3D House Interior Objects)

## Description

The repository consists of a 3D Mixed Reality application using Unity 2021.3.16.f1. The application is a prototype for an AR application that can be used by dying people and their loved ones for data curation.

## Prequisites

As this application is a Mixed Reality project, you need to fullfill the following requirements to run it:

- A Windows 10 or 11 PC configured with the correct tools installed
- Windows 10 SDK 10.0.1024.0 or later
- Unity Hub with Unity 2021.3 or later installed and the Universal Windows Platform Build Support module added
- A HoloLens 2 device configured for development

## Installation

To run the application locally, follow these steps:

1. Clone this repository to your local machine using the following command:
   `git clone https://github.com/luisedonat/what-we-leave-behind_BA.git`
2. Open the Unity Editor.
3. Click on "Open" and navigate to the cloned repository.
4. Select the main project folder and click "Open."
5. Wait for the Unity editor to import and set up the project.
6. Once the project is loaded, you can explore the application within the Unity editor. You can simulate the application by pressing the play button, however, you will not be able to use all features there.

## Running the Simulation In Unity

This is not the recomended method of running the application. Nevertheless, those are the basic controls of simulating input in Unity:

Change the view in the scene

- To move the camera forward/left/back/right, press the W/A/S/D keys.
- To move the camera vertically, press the Q and E keys.
- To rotate the camera, press the right mouse button and then drag.

Simulate hand input

- To enable the simulated right hand, press and hold the space bar. To remove the hand, release the space bar.
- To enable the left simulated hand, press and hold the left shift key. To remove the hand, release the key.
- To move either hand around the scene, move the mouse.
- To move the hand forward or backward, rotate the mouse scroll wheel.
- To simulate the pinch gesture, select the left mouse button.
- To rotate the hand, press and hold down the space bar + CTRL key (right hand) or left shift key + CTRL key (left hand) and then move the mouse.

Persistent hands

- To enable a hand and keep it onscreen without continuing to hold down a key, press T (left hand) or Y (right hand). To remove the hands, press those keys again.

## Building the Application

To run the application as it is, simply navigate to the builds_new folder and open the BachelorProject.sln File with Visual Studio 2019. If you added changes and need to build it again, follow these steps:

1. Navigate to File -> Build Settings
2. Make sure the following settings are active:
   - Scenes in Build: Only the Scene called "Exercise" should be active.
   - Make sure the Build Platform is switched to "Universal Windows Platform".
   - Architechture: ARM 64-bit
   - Project Build: D3D
   - SDK Version: Latest Installed
   - minimum Version: 10.0.1024.0
   - Build and Run on: Local Machine
   - Build Configuration: Release
3. Click the Build button.
4. In the Build Universal Windows Platform window, navigate to the folder where you want to store your build, or create a new folder and navigate to it, and then select the Select Folder button to start the build process.

## Running the Application

To run the application on your Hololens 2 device, follow these steps:

1. When the build is finished, your file explorer opens and displays the build folder. Navigate inside the folder and open the solution file to open it in Visual Studio.
2. Configure Visual Studio for Hololens by Selecting Release and the ARM64 Architecture.
3. Select the deployment target drop-down and then do one of the following:
   - If you're building and deploying via Wi-Fi, select Remote Machine.
   - If you're building and deploying via USB, select Device.
4. Set your remote connection: on the menu bar, select Project > Properties.
5. In the project's Property Pages window, select Configuration Properties > Debugging.
6. Select the Debugger to launch drop down and then select Remote Machine if it's not selected already.
7. In the Machine Name field, enter the IP address of your Hololens device.
8. Set the Authentication Mode to Universal (Unencrypted protocol).
9. Connect your HoloLens to your computer, and then in Visual Studio, do one of the following:
   - To deploy to your HoloLens and automatically start the app without the Visual Studio debugger attached, select Debug > Start Without Debugging.
   - To deploy to your HoloLens without having the app start automatically, select Build > Deploy Solution.

## Running the app on Hololens

After the app succsessfully finishes building, open the Hololens Start menu. In there, find the app "BachelorProject" and select it.
Now you can try out its features:

1. Raise your palm and face it to open the Hand Menu.
2. Select the "Open Files" button to reveal a photo. You can drag and drop it, as well as resize it to your liking. Press the x to close it.
3. Select the "Show Comments" button to show two images of comments.
4. Select the "Add Comment" button to open a keyboard. Press the x to close it.
5. Select the "Show Profile" button to show the selected profile. Press the x to close it.

## Possible Changes and Alterations in Unity

There are some de-activated objects in the unity project that you can make changes to:

1. You can switch the displayed Profile by changing the image in the "Show Profile" button On Click event. Simply drag one of the two profile Game Objects (family and curator) onto the On Click event and set the option to "OnClick.setActive". Make sure to activate the check to make the sprites visible.
2. You can activate the 3D Objects and give them Outlines. Follow these instrucions on how to activate the outlines:
   - Add "Outline Effect" component to camera
   - Add "Outline" component to renderers

Other alterations include:

- Place the objects somewhere else in your room. Through the installed WorldLockingTool, the objects will stay exactly where ever you put them everytime you open the application.
