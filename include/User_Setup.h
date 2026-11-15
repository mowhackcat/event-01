// Controlador (si tienes la versión de 2 USB y ves la pantalla blanca o con fallos,
// comenta ILI9341_2_DRIVER y descomenta ST7789_DRIVER)
#define ILI9341_2_DRIVER
// #define ST7789_DRIVER

#define TFT_WIDTH  240
#define TFT_HEIGHT 320

// Si los colores salen invertidos (ej. negro se ve blanco), descomenta la siguiente línea:
// #define TFT_INVERSION_ON

// Pines de la pantalla en la CYD (Bus HSPI)
#define TFT_MISO 12
#define TFT_MOSI 13
#define TFT_SCLK 14
#define TFT_CS   15
#define TFT_DC    2
#define TFT_RST  -1
#define TFT_BL   21
#define TFT_BACKLIGHT_ON HIGH

#define USE_HSPI_PORT

// Fuentes y frecuencias
#define LOAD_GLCD
#define LOAD_FONT2
#define LOAD_FONT4
#define LOAD_FONT6
#define LOAD_FONT7
#define LOAD_FONT8
#define LOAD_GFXFF
#define SMOOTH_FONT

#define SPI_FREQUENCY       55000000
#define SPI_READ_FREQUENCY  20000000
#define SPI_TOUCH_FREQUENCY  2500000