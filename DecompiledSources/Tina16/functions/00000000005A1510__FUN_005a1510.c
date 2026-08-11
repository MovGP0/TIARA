/* Ghidra address: 005a1510 */
/* Ghidra symbol: FUN_005a1510 */


void FUN_005a1510(void)

{
  undefined8 uVar1;
  
  uVar1 = DAT_02011ee0;
  DAT_02011ee8 = DAT_02011ee8 + 1;
  if (DAT_02011ee8 == 0) {
    DAT_02011ee0 = 0;
    FUN_00410f20(uVar1);
  }
  return;
}

