# -*- coding: utf-8 -*-
"""
Created on Sun Mar 17 10:15:37 2019
test target:PM2.5 Prediction
@author: Rakutenipoi
"""
#initiate arguments
K_O3 = 1, K_NO2 = 1, K_CO = 1, K_Temp = 1
K_Pressure = 1, K_Humidity = 1, K_Wind = 1, bias = 0

#define model
def model(O3, NO2, SO2, CO, Temp, Pressure, Humidity, Wind):
    y = bias + K_O3 * O3 + K_NO2 * NO2 + K_CO * CO + K_Temp * Temp + K_Pressure * Pressure + K_Humidity * Humidity + K_Wind * Wind
    return y

#Find the best function
def Loss(y, y_hat):
    return  pow(y - y_hat, 2)







