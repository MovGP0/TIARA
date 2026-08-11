/* Ghidra address: 01abd400 */
/* Ghidra symbol: FUN_01abd400 */


undefined8 FUN_01abd400(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  
  bVar1 = FUN_01abd060(param_2);
  if (bVar1 < 0x17) {
    if ((bVar1 != 0x16) && (bVar1 != 2)) {
      if (bVar1 == 7) {
        FUN_00414ad0(param_1,L"(deg)");
        return param_1;
      }
      if (bVar1 == 0xb) {
        FUN_00414ad0(param_1,&DAT_01abd4d4);
        return param_1;
      }
      if (bVar1 != 0x14) goto LAB_01abd49f;
    }
  }
  else if ((((bVar1 != 0x19) && (bVar1 != 0x1b)) && (bVar1 != 0x1d)) && (bVar1 != 0x20)) {
LAB_01abd49f:
    FUN_00414480(param_1);
    return param_1;
  }
  FUN_00414ad0(param_1,L"(dB)");
  return param_1;
}

