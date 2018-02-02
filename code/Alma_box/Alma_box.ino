const int PinDyn = 10; // Номер порта Динамика (Зумера)
const byte COUNT_NOTES = 46; // Количество нот

int kofnot = 250;
int kofwait = 2;

//Ноты
int notkes[COUNT_NOTES] = {
  kofnot*13, kofnot*6, kofnot*6, kofnot*5, kofnot*6, kofnot*13,kofnot,kofnot,kofnot*6,kofnot*8,kofnot*8,kofnot*6,kofnot*6,
  kofnot*11, kofnot*13, kofnot*8,kofnot*6,kofnot*6,kofnot*11,kofnot*13,kofnot*11,kofnot*8,kofnot*11,kofnot*13,kofnot*6,kofnot*6,
  kofnot*5,kofnot*6,kofnot*13,kofnot*1,kofnot*1,kofnot*6,kofnot*8,kofnot*8,kofnot*6,kofnot*6,kofnot*11,kofnot*13,kofnot*8,kofnot*6,
  kofnot*6,kofnot*11,kofnot*13,kofnot*11,kofnot*8,kofnot*11
};

//Длительность нот
int waiters[COUNT_NOTES] = {
  kofwait*200, kofwait*275, kofwait*200, kofwait*200, kofwait*950, kofwait*200, kofwait*250, kofwait*200, kofwait*950, kofwait*300, kofwait*250, kofwait*250, kofwait*200,
  kofwait*800, kofwait*275 , kofwait*250, kofwait*250, kofwait*250, kofwait*250, kofwait*250, kofwait*250, kofwait*250, kofwait*250, kofwait*200, kofwait*250, kofwait*200, kofwait*900,
  kofwait*275, kofwait*200, kofwait*220, kofwait*250, kofwait*750, kofwait*250, kofwait*200, kofwait*220, kofwait*220, kofwait*950, kofwait*250, kofwait*200, kofwait*250, kofwait*220, kofwait*220, kofwait*250,
  kofwait*250, kofwait*100, kofwait*1000
};

void setup() {
  //
 }

void loop() {

  for (int i = 0; i < COUNT_NOTES; i++) { // Цикл от 0 до количества нот
    tone(PinDyn, notkes[i]); // Включаем звук, определенной частоты
    delay(waiters[i]);  // Пауза для заданой ноты
    noTone(PinDyn); // Останавливаем звук
  }
}
