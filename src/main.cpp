/*

接线说明:无

程序说明:该程序使用了ESP32S3的接入点模式(AP),建立了一个名为 lingsou 密码为 12345678 的WiFi,同时在串口每一秒输出一次开发板的IP地址

注意事项:当电脑连接上开发板后可以在电脑上进行 ping 192.168.4.1 的操作来检查是否连接成功

函数示例:无

作者:灵首

时间:2023_3_8

*/


#include <Arduino.h>
#include <WiFi.h>


const char *ssid = "lingsou";    //建立的WiFi的名称
const char  *password = "12345678";   //建立的WiFi的密码

void setup() {
  Serial.begin(115200);
  WiFi.softAP(ssid,password);   //设置开发板工作模式为AP模式,同时设置密码和名称
  // put your setup code here, to run once:
}

void loop() {
  Serial.print("access id:");
  Serial.println(ssid);
  Serial.print("ip address");
  Serial.println(WiFi.softAPIP());    //串口打印开发板的IP地址
  delay(1000);
  // put your main code here, to run repeatedly:
}