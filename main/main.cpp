#include "esp_log.h"
#include <string>
#include "sdkconfig.h"
#include "TftLcd.hpp"


static char tag[]="cpp_helloworld";

extern "C" {
	void app_main(void);
}

class Greeting {
public:
	void helloEnglish() {
		ESP_LOGI(tag, "Hello %s", name.c_str());
	}

	void helloFrench() {
		ESP_LOGI(tag, "Bonjour %s", name.c_str());
	}

	void setName(std::string name) {
		this->name = name;
	}
private:
	std::string name = "";

};

void app_main(void)
{
	Greeting myGreeting;
	myGreeting.setName("Neil");
	myGreeting.helloEnglish();
	myGreeting.helloFrench();

	TftLcd lcd;

	lcd.sayHello();

}

