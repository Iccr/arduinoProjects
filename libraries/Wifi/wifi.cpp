#include "NetworkManager.h"
NetworkManager:::Wifi(String ssid, String password) {
	this->ssid = ssid;
	this->password = password;
}

void NetworkManager::wifiBegin() {
	WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    this->wifiStatus = false
  }
  this->wifiStatus = true
}

void NetworkManager::connect(String host, int httpPort) {
  if (!client.connect(host, httpPort)) {
  this->networkStatus = false
    return;
  }
  this->networkStatus = true
}
