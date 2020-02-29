# Ros-kinectSawyer
### assicurarsi di aver scaricato OpenCV, kinect2bridge e il pacchetto intera 

### connetti il robot al pc con il cavo LAN e settare i parametri indirizzo: 192.168.55.3, mask: 24, Gateway: 192.168.55.1

### collegare la kinect2 al pc con il cavo USB 3.0
$ cd catkinect
$ ./intera.sh

### avvia il robot come master
$ rosrun intera_interface enable_robot.py -e

### avvia kinect2bridge
$ roslaunch kinect2_bridge kinect2_bridge.launch

### apri un altro terminale e ripeti i primi 2 comandi.

$ rosrun kinect2_viewer Movimento.py

