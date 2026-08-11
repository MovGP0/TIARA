/* Ghidra address: 004d0f50 */
/* Ghidra symbol: FUN_004d0f50 */


void FUN_004d0f50(void)

{
  undefined8 uVar1;
  
  uVar1 = DAT_01dcb5c0;
  DAT_020115d4 = DAT_020115d4 + 1;
  if (DAT_020115d4 == 0) {
    DAT_01dcb5c0 = 0;
    FUN_00410f20(uVar1);
    FUN_004d05c0();
    FUN_004d0590();
  }
  return;
}

