/* Ghidra address: 00e16fc0 */
/* Ghidra symbol: FUN_00e16fc0 */


undefined8 FUN_00e16fc0(void)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e228 == (code *)0x0) {
      DAT_0202e228 = (code *)FUN_00427c10(DAT_01edc8a0,L"GetSCPVerticalLevel");
    }
    if (DAT_0202e228 != (code *)0x0) {
      uVar1 = (*DAT_0202e228)();
    }
  }
  return uVar1;
}

