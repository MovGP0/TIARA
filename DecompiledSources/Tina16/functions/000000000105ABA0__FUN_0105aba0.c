/* Ghidra address: 0105aba0 */
/* Ghidra symbol: FUN_0105aba0 */


void FUN_0105aba0(longlong param_1,undefined8 param_2,longlong param_3,undefined8 *param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 local_res10 [3];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70 [2];
  undefined8 local_60 [9];
  
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70[0] = 0;
  puVar3 = local_60;
  for (lVar2 = 9; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = *param_4;
    param_4 = param_4 + 1;
    puVar3 = puVar3 + 1;
  }
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_004179d0(local_60,&DAT_010571b8);
  FUN_00414ad0(param_1 + 0x70,local_res10[0]);
  *(longlong *)(param_1 + 0x98) = param_3;
  FUN_00417c40(param_1 + 0xa0,local_60,&DAT_010571b8);
  FUN_00414480(param_1 + 0x50);
  FUN_00414480(param_1 + 0x58);
  iVar1 = *(int *)(param_1 + 0x68);
  if (iVar1 == 1) {
    FUN_00414ad0(param_1 + 0x10,
                 L"mcpu=cortex-m0plus,mthumb,c,g,Os,w,std=gnu++11,ffunction-sections,fdata-sections,fno-threadsafe-statics,nostdlib,-param max-inline-insns-single=500,fno-rtti,fno-exceptions,MMD"
                );
    FUN_00414ad0(param_1 + 0x18,
                 L"mcpu=cortex-m0plus,mthumb,c,g,Os,w,std=gnu11,ffunction-sections,fdata-sections,nostdlib,-param max-inline-insns-single=500,MMD"
                );
    FUN_00414ad0(param_1 + 0x20,
                 L"-w;-Os;-Wl,--gc-sections;--specs=nano.specs;--specs=nosys.specs;-mcpu=cortex-m0plus;-mthumb;-lm;-larm_cortexM0l_math"
                );
    FUN_00414ad0(param_1 + 0x28,L"-O;binary");
    FUN_00414ad0(param_1 + 0x30,L"-O;ihex;-R;.eeprom");
    FUN_01059bf0(local_70,param_1 + 0xa0);
    FUN_00416cd0(param_1 + 8,10,L"F_CPU=",local_70[0],L",ARDUINO=",*(undefined8 *)(param_3 + 0x88),
                 L",ARDUINO_",*(undefined8 *)(param_1 + 0xc0),L",ARDUINO_ARCH_",
                 *(undefined8 *)(param_1 + 0xd0),L",USE_ARDUINO_MKR_PIN_LAYOUT",L",__SAMD21G18A__");
    FUN_00416cd0(param_1 + 8,10,*(undefined8 *)(param_1 + 8),L",USB_VID=",
                 *(undefined8 *)(param_1 + 0xd8),L",USB_PID=",*(undefined8 *)(param_1 + 0xe0),
                 L",USBCON",L",USB_MANUFACTURER=\"Unknown\"",L",USB_PRODUCT=\"",
                 *(undefined8 *)(param_1 + 0xa0),&DAT_0105ba04);
    FUN_00414ad0(param_1 + 0x40,
                 L"variant.cpp,pulse_asm.s,hooks.c,itoa.c,cortex_handlers.c,delay.c,pulse.c,wiring.c,WInterrupts.c,startup.c,wiring_analog.c,wiring_digital.c,wiring_private.c,wiring_shift.c,samd21_host.c,dtostrf.c"
                );
    FUN_00414ad0(param_1 + 0x48,
                 L"SERCOM.cpp,WMath.cpp,Uart.cpp,new.cpp,abi.cpp,main.cpp,Tone.cpp,Reset.cpp,CDC.cpp,USBCore.cpp,Common.cpp,IPAddress.cpp,PluggableUSB.cpp,Print.cpp,Stream.cpp,String.cpp,WString.cpp"
                );
    goto code_r0x0105b3ec;
  }
  if (iVar1 == 2) {
    FUN_0105a690(param_1,&local_78);
    FUN_00416ba0(param_1 + 0x10,
                 L"c,g,Os,w,std=gnu++11,fno-exceptions,ffunction-sections,fdata-sections,fno-threadsafe-statics,MMD,mmcu="
                 ,local_78);
    FUN_0105a690(param_1,&local_80);
    FUN_00416ba0(param_1 + 0x18,L"c,g,Os,w,std=gnu11,ffunction-sections,fdata-sections,MMD,mmcu=",
                 local_80);
    FUN_0105a690(param_1,&local_88);
    FUN_00416cd0(param_1 + 0x20,3,L"-w;-Os;-Wl,--section-start=.text=0x0,--gc-sections;-mmcu=",
                 local_88,L";-lm");
    FUN_00414ad0(param_1 + 0x28,
                 L"-O;ihex;-j;.eeprom;--set-section-flags=.eeprom=alloc,load;--no-change-warnings;--change-section-lma;.eeprom=0"
                );
    FUN_00414ad0(param_1 + 0x30,L"-O;ihex;-R;.eeprom");
    FUN_01059bf0(&local_90,param_1 + 0xa0);
    FUN_00416cd0(param_1 + 8,7,L"F_CPU=",local_90,L",ARDUINO=",*(undefined8 *)(param_3 + 0x88),
                 L",ARDUINO_",*(undefined8 *)(param_1 + 0xc0),
                 L",ARDUINO_ARCH_MEGAAVR,MILLIS_USE_TIMERB3,NO_EXTERNAL_I2C_PULLUP");
    FUN_00414ad0(param_1 + 0x40,
                 L"variant.c,wiring_pulse.S,wiring_pulse.c,wiring.c,wiring_shift.c,hooks.c,wiring_analog.c,wiring_digital.c"
                );
    FUN_00414ad0(param_1 + 0x48,
                 L"UART.cpp,CDC.cpp,NANO_compat.cpp,UART3.cpp,UART2.cpp,UART1.cpp,Tone.cpp,UART0.cpp,UNO_compat.cpp,USBCore.cpp,WInterrupts.cpp,WMath.cpp,abi.cpp,main.cpp,new.cpp,Common.cpp,IPAddress.cpp,PluggableUSB.cpp,Print.cpp,Stream.cpp,String.cpp"
                );
    goto code_r0x0105b3ec;
  }
  if (iVar1 == 3) {
    FUN_00414ad0(param_1 + 0x10,
                 L"mcpu=cortex-m0,mthumb,c,g,Os,w,std=gnu++11,ffunction-sections,fdata-sections,fno-threadsafe-statics,nostdlib,-param max-inline-insns-single=500,fno-rtti,fno-exceptions,MMD"
                );
    FUN_00414ad0(param_1 + 0x18,
                 L"mcpu=cortex-m0,mthumb,c,g,Os,w,std=gnu11,ffunction-sections,fdata-sections,nostdlib,-param max-inline-insns-single=500,MMD"
                );
    FUN_00414ad0(param_1 + 0x20,
                 L"-w;-Os;-Wl,--gc-sections;--specs=nano.specs;--specs=nosys.specs;-mcpu=cortex-m0;-mthumb;-lm"
                );
    FUN_00414ad0(param_1 + 0x28,L"-O;binary");
    FUN_00414ad0(param_1 + 0x30,L"-O;ihex;-R;.eeprom");
    FUN_01059bf0(&local_98,param_1 + 0xa0);
    FUN_00416cd0(param_1 + 8,9,L"F_CPU=",local_98,L",ARDUINO=",*(undefined8 *)(param_3 + 0x88),
                 L",ARDUINO_",*(undefined8 *)(param_1 + 0xc0),L",ARDUINO_ARCH_",
                 *(undefined8 *)(param_1 + 0xd0),L",NRF51,S110,NRF51_S110,USE_LFRC,NRF5");
    FUN_00414ad0(param_1 + 0x40,
                 L"variant.cpp,pulse_asm.s,gcc_startup_nrf52.S,WInterrupts.c,hooks.c,wiring_analog_nRF51.c,pulse.c,itoa.c,delay.c,wiring.c,wiring_analog_nRF52.c,wiring_digital.c,wiring_private.c,wiring_shift.c,system_nrf51.c,system_nrf52.c,dtostrf.c"
                );
    FUN_00414ad0(param_1 + 0x48,
                 L"IPAddress.cpp,Print.cpp,Uart.cpp,RingBuffer.cpp,WString.cpp,Stream.cpp,abi.cpp,WMath.cpp,main.cpp,new.cpp"
                );
    goto code_r0x0105b3ec;
  }
  FUN_0105a690(param_1,&local_a0);
  FUN_00416ba0(param_1 + 0x10,
               L"c,g,Os,w,std=gnu++11,fno-exceptions,ffunction-sections,fdata-sections,fno-threadsafe-statics,MMD,mmcu="
               ,local_a0);
  FUN_0105a690(param_1,&local_a8);
  FUN_00416ba0(param_1 + 0x18,L"c,g,Os,w,std=gnu11,ffunction-sections,fdata-sections,MMD,mmcu=",
               local_a8);
  FUN_0105a690(param_1,&local_b0);
  iVar1 = FUN_00416db0(local_b0,L"atmega2560");
  if (iVar1 == 0) {
    FUN_0105a690(param_1,&local_b8);
    FUN_00416cd0(param_1 + 0x20,3,L"-w;-Os;-Wl,--gc-sections,--relax;-mmcu=",local_b8,L";-lm");
  }
  else {
    FUN_0105a690(param_1,&local_c0);
    FUN_00416cd0(param_1 + 0x20,3,L"-w;-Os;-Wl,--gc-sections;-mmcu=",local_c0,L";-lm");
  }
  FUN_00416ad0(param_1 + 0x20,L";-Wl,-Map=Debug\\output.map");
  FUN_00414ad0(param_1 + 0x28,
               L"-O;ihex;-j;.eeprom;--set-section-flags=.eeprom=alloc,load;--no-change-warnings;--change-section-lma;.eeprom=0"
              );
  FUN_00414ad0(param_1 + 0x30,L"-O;ihex;-R;.eeprom");
  FUN_01059bf0(&local_c8,param_1 + 0xa0);
  FUN_00416cd0(param_1 + 8,7,L"F_CPU=",local_c8,L",ARDUINO=",*(undefined8 *)(param_3 + 0x88),
               L",ARDUINO_",*(undefined8 *)(param_1 + 0xc0),L",ARDUINO_ARCH_AVR");
  iVar1 = FUN_00416db0(*(undefined8 *)(param_1 + 0xa0),L"Arduino Micro");
  if (iVar1 == 0) {
LAB_0105b30c:
    FUN_00416cd0(param_1 + 8,9,*(undefined8 *)(param_1 + 8),L",USB_VID=",
                 *(undefined8 *)(param_1 + 0xd8),L",USB_PID=",*(undefined8 *)(param_1 + 0xe0),
                 L",USB_MANUFACTURER=\"Unknown\"",L",USB_PRODUCT=\"",*(undefined8 *)(param_1 + 0xa0)
                 ,&DAT_0105ba04);
  }
  else {
    iVar1 = FUN_00416db0(*(undefined8 *)(param_1 + 0xa0),L"Arduino Leonardo");
    if (iVar1 == 0) goto LAB_0105b30c;
  }
  iVar1 = FUN_004170c0(L"Arduino Mega",*(undefined8 *)(param_1 + 0xa0),1);
  if (iVar1 == 1) {
    FUN_00416ad0(param_1 + 8,L",WINC1501_SPI_CS_PIN=53,WINC1501_INTN_PIN=3");
  }
  FUN_00414ad0(param_1 + 0x40,
               L"WInterrupts.c,hooks.c,wiring.c,wiring_analog.c,wiring_digital.c,wiring_pulse.c,wiring_shift.c,wiring_pulse.S"
              );
  FUN_00414ad0(param_1 + 0x48,
               L"CDC.cpp,HardwareSerial.cpp,HardwareSerial0.cpp,HardwareSerial1.cpp,HardwareSerial2.cpp,HardwareSerial3.cpp,IPAddress.cpp,PluggableUSB.cpp,Print.cpp,Stream.cpp,Tone.cpp,USBCore.cpp,WMath.cpp,WString.cpp,abi.cpp,main.cpp,new.cpp"
              );
code_r0x0105b3ec:
  FUN_00414560(&local_c8,0xc);
  FUN_00417740(local_60,&DAT_010571b8);
  FUN_00414480(local_res10);
  return;
}

