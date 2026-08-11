/* Ghidra address: 00452d50 */
/* Ghidra symbol: FUN_00452d50 */


void FUN_00452d50(void)

{
  undefined8 uVar1;
  
  uVar1 = DAT_02010898;
  DAT_0200c41c = DAT_0200c41c + 1;
  if (DAT_0200c41c == 0) {
    DAT_02010898 = 0;
    FUN_00410f20(uVar1);
  }
  return;
}

