#ifndef NetworkManager_h
#define NetworkManager_h

#include <ESP8266WiFi.h>

class NetworkManager {
	private:
		String ssid;
		String password;
		WiFiClient client;
    bool wifiStatus;
	public:
		Wifi(String ssid, String password);
		void wifiBegin();
		void connect(String host, int httpPort);
		void get(String url);
		void post(String url, String payload
    String getWifiStatus();
};

#endif
