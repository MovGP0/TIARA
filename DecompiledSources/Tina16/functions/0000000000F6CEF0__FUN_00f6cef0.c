/* Ghidra address: 00f6cef0 */
/* Ghidra symbol: FUN_00f6cef0 */


undefined8 FUN_00f6cef0(undefined8 param_1,byte param_2,int param_3)

{
  byte bVar1;
  
  if (param_3 == 1) {
    if (param_2 == 0) {
      FUN_00414480(param_1);
    }
    else if (param_2 == 5) {
      FUN_00414ad0(param_1,L"EXT_INT0");
    }
    else if (param_2 == 1) {
      FUN_00414ad0(param_1,L"TMR0_OVF");
    }
    else if (param_2 == 2) {
      FUN_00414ad0(param_1,L"TMR1_OVF");
    }
    else if (param_2 == 3) {
      FUN_00414ad0(param_1,L"TMR2_OVF");
    }
    else if (param_2 == 4) {
      FUN_00414ad0(param_1,&DAT_00f6d624);
    }
    else if (param_2 == 0xe) {
      FUN_00414ad0(param_1,L"COMPARE1");
    }
    else if (param_2 == 0xb) {
      FUN_00414ad0(param_1,L"COMPARE3F");
    }
    else if (param_2 == 0x1f) {
      FUN_00414ad0(param_1,L"COMP3F_DEMO");
    }
    else if (param_2 == 0xd) {
      FUN_00414ad0(param_1,L"RAIE");
    }
    else if (param_2 == 0xc) {
      FUN_00414ad0(param_1,L"RBIE");
    }
    else if (param_2 == 6) {
      FUN_00414ad0(param_1,&PTR_DAT_00f6d6cc);
    }
    else if (param_2 == 7) {
      FUN_00414ad0(param_1,&PTR_DAT_00f6d6e0);
    }
  }
  else if (param_3 == 8) {
    bVar1 = param_2 & 0x7f;
    if ((param_2 & 0x7f) == 0) {
      FUN_00414480(param_1);
    }
    else if (bVar1 == 5) {
      FUN_00414ad0(param_1,L"EXT_INT0");
    }
    else if (bVar1 == 8) {
      FUN_00414ad0(param_1,L"EXT_INT1");
    }
    else if (bVar1 == 9) {
      FUN_00414ad0(param_1,L"EXT_INT2");
    }
    else if (bVar1 == 10) {
      FUN_00414ad0(param_1,L"EXT_INT3");
    }
    else if (bVar1 == 1) {
      FUN_00414ad0(param_1,L"TMR0_OVF");
    }
    else if (bVar1 == 2) {
      FUN_00414ad0(param_1,L"TMR1_OVF");
    }
    else if (bVar1 == 3) {
      FUN_00414ad0(param_1,L"TMR2_OVF");
    }
    else if (bVar1 == 0xf) {
      FUN_00414ad0(param_1,L"TMR3_OVF");
    }
    else if (bVar1 == 0x10) {
      FUN_00414ad0(param_1,L"TMR4_OVF");
    }
    else if (bVar1 == 0x11) {
      FUN_00414ad0(param_1,L"TMR5_OVF");
    }
    else if (bVar1 == 4) {
      FUN_00414ad0(param_1,&DAT_00f6d624);
    }
    else if (bVar1 == 0xe) {
      FUN_00414ad0(param_1,L"COMPARE1");
    }
    else if (bVar1 == 0xb) {
      FUN_00414ad0(param_1,L"COMPARE 3F");
    }
    else if (bVar1 == 0x1f) {
      FUN_00414ad0(param_1,L"COMP3F_DEMO");
    }
    else if (bVar1 == 0xd) {
      FUN_00414ad0(param_1,L"RAIE");
    }
    else if (bVar1 == 0xc) {
      FUN_00414ad0(param_1,L"RBIE");
    }
    else if (bVar1 == 6) {
      FUN_00414ad0(param_1,&PTR_DAT_00f6d6cc);
    }
    else if (bVar1 == 7) {
      FUN_00414ad0(param_1,&PTR_DAT_00f6d6e0);
    }
  }
  else if (param_3 == 4) {
    if (param_2 == 0) {
      FUN_00414480(param_1);
    }
    else if (param_2 == 1) {
      FUN_00414ad0(param_1,L"EXT_INT0");
    }
    else if (param_2 == 2) {
      FUN_00414ad0(param_1,L"EXT_INT1");
    }
    else if (param_2 == 0x11) {
      FUN_00414ad0(param_1,L"EXT_INT2");
    }
    else if (param_2 == 0x12) {
      FUN_00414ad0(param_1,L"EXT_INT3");
    }
    else if (param_2 == 0x13) {
      FUN_00414ad0(param_1,L"EXT_INT4");
    }
    else if (param_2 == 0x14) {
      FUN_00414ad0(param_1,L"EXT_INT5");
    }
    else if (param_2 == 0x15) {
      FUN_00414ad0(param_1,L"EXT_INT6");
    }
    else if (param_2 == 0x16) {
      FUN_00414ad0(param_1,L"EXT_INT7");
    }
    else if (param_2 == 9) {
      FUN_00414ad0(param_1,L"TMR0");
    }
    else if (param_2 == 8) {
      FUN_00414ad0(param_1,L"TMR1_OVF");
    }
    else if (param_2 == 6) {
      FUN_00414ad0(param_1,L"TMR1_COMPA");
    }
    else if (param_2 == 7) {
      FUN_00414ad0(param_1,L"TMR1_COMPB");
    }
    else if (param_2 == 5) {
      FUN_00414ad0(param_1,L"TMR1_CAPT");
    }
    else if (param_2 == 4) {
      FUN_00414ad0(param_1,L"TMR2_OVF");
    }
    else if (param_2 == 3) {
      FUN_00414ad0(param_1,L"TMR2_COMP");
    }
    else if (param_2 == 2) {
      FUN_00414ad0(param_1,L"EXT_INT1");
    }
    else if (param_2 == 10) {
      FUN_00414ad0(param_1,L"SPI_STC");
    }
    else if (param_2 == 0xb) {
      FUN_00414ad0(param_1,&DAT_00f6d914);
    }
    else if (param_2 == 0xc) {
      FUN_00414ad0(param_1,L"USART0_UDRE");
    }
    else if (param_2 == 0xd) {
      FUN_00414ad0(param_1,&DAT_00f6d94c);
    }
    else if (param_2 == 0xe) {
      FUN_00414ad0(param_1,&DAT_00f6d960);
    }
    else if (param_2 == 0xf) {
      FUN_00414ad0(param_1,L"EE_RDY");
    }
    else if (param_2 == 0x10) {
      FUN_00414ad0(param_1,L"ANA_COMP");
    }
    else if (param_2 == 0x23) {
      FUN_00414ad0(param_1,L"PWM1");
    }
  }
  else if (param_3 == 2) {
    if (param_2 == 0) {
      FUN_00414480(param_1);
    }
    else if (param_2 == 1) {
      FUN_00414ad0(param_1,L"EXT_INT0");
    }
    else if (param_2 == 2) {
      FUN_00414ad0(param_1,L"EXT_INT1");
    }
    else if (param_2 == 3) {
      FUN_00414ad0(param_1,L"TIM2_CAPT");
    }
    else if (param_2 == 4) {
      FUN_00414ad0(param_1,L"TIM2_OVF");
    }
    else if (param_2 == 5) {
      FUN_00414ad0(param_1,L"TIM1_OVF");
    }
    else if (param_2 == 6) {
      FUN_00414ad0(param_1,L"TIM0_OVF");
    }
    else if (param_2 == 7) {
      FUN_00414ad0(param_1,&DAT_00f6d624);
    }
    else if (param_2 == 8) {
      FUN_00414ad0(param_1,&PTR_DAT_00f6d6cc);
    }
    else if (param_2 == 9) {
      FUN_00414ad0(param_1,&PTR_DAT_00f6d6e0);
    }
  }
  return param_1;
}

