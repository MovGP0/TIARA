/* Ghidra address: 00e1d650 */
/* Ghidra symbol: FUN_00e1d650 */


undefined8 FUN_00e1d650(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x3fb999999999999a;
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e8b0 == (code *)0x0) {
      DAT_0202e8b0 = (code *)FUN_00427c10(DAT_01edc8a0,L"GetXYRECActRecordingInterval");
    }
    if (DAT_0202e8b0 != (code *)0x0) {
      uVar1 = (*DAT_0202e8b0)();
    }
  }
  return uVar1;
}

