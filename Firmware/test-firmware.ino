#include <Arduino.h>
#include <Wire.h>

// I2C Bus 0 — Air sensors group 1 (up to 4 sensors)
#define BUS0_SCL  6   // IO6
#define BUS0_SDA  7   // IO7

// I2C Bus 1 — Display touch + eink touch (TSCL/TSDA)
#define BUS1_SCL  8   // IO8
#define BUS1_SDA  9   // IO9

TwoWire Bus0 = TwoWire(0);
TwoWire Bus1 = TwoWire(1);

void scanBus(TwoWire &bus, const char *busName) {
  Serial.printf("\n--- Scanning %s ---\n", busName);
  
  uint8_t found = 0;

  for (uint8_t addr = 0x01; addr < 0x7F; addr++) {
    bus.beginTransmission(addr);
    uint8_t error = bus.endTransmission();

    if (error == 0) {
      Serial.printf("  Device found at 0x%02X", addr);

      // Known device hints based on common addresses
      switch (addr) {
        // Sensirion SEN55
        case 0x69: Serial.print(" <- SEN55 (air quality)");       break;

        // Common CO2 sensors
        case 0x61: Serial.print(" <- SCD40/SCD41 (CO2)");         break;
        case 0x62: Serial.print(" <- SCD30 (CO2)");               break;

        // Common VOC / air sensors
        case 0x58: Serial.print(" <- SGP30 (VOC)");               break;
        case 0x59: Serial.print(" <- SGP40 (VOC)");               break;

        // Common touch controllers
        case 0x38: Serial.print(" <- FT6236 (touch)");            break;
        case 0x48: Serial.print(" <- ADS1115 or touch ctrl");     break;
        case 0x14: Serial.print(" <- GT911 (touch)");             break;
        case 0x5D: Serial.print(" <- GT911 alt addr (touch)");    break;

        // Common environmental sensors
        case 0x40: Serial.print(" <- SHT31 / HDC1080 (temp/hum)"); break;
        case 0x44: Serial.print(" <- SHT31 (temp/hum)");          break;
        case 0x45: Serial.print(" <- SHT31 alt addr");            break;
        case 0x76: Serial.print(" <- BME280 / BMP280");           break;
        case 0x77: Serial.print(" <- BME280 alt addr");           break;

        default: break;
      }
      Serial.println();
      found++;
    } else if (error == 4) {
      Serial.printf("  Error at 0x%02X (unknown error)\n", addr);
    }
  }

  if (found == 0) {
    Serial.println("  No devices found — check wiring and pull-ups");
  } else {
    Serial.printf("  Total: %d device(s) found\n", found);
  }
}

void setup() {
  Serial.begin(115200);
  while (!Serial) delay(10);

  delay(500);
  Serial.println("\n=============================");
  Serial.println(" I2C Bus Scanner");
  Serial.println("=============================");
  Serial.printf(" Bus 0: SDA=IO%d  SCL=IO%d\n", BUS0_SDA, BUS0_SCL);
  Serial.printf(" Bus 1: SDA=IO%d  SCL=IO%d\n", BUS1_SDA, BUS1_SCL);
  Serial.println("=============================");

  // Initialise both buses at 100kHz for reliable detection
  Bus0.begin(BUS0_SDA, BUS0_SCL, 100000);
  Bus1.begin(BUS1_SDA, BUS1_SCL, 100000);

  scanBus(Bus0, "Bus 0 - Air Sensors (IO6/IO7)");
  scanBus(Bus1, "Bus 1 - Touch / Display (IO8/IO9)");

  Serial.println("\nScan complete.");
  Serial.println("Run again by pressing reset.\n");
}

void loop() {
}
