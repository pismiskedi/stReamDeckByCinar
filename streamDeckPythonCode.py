import serial
import pyautogui

ser = serial.Serial ('COM3', baudrate = 9600)

while 1:
    arduinoData = ser.readline ()

    if(arduinoData==b'bas\r\n'):
        print("mesaj geldi")
        pyautogui.hotkey('ctrl', 'alt', 'c')
