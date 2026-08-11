/* Ghidra address: 00594960 */
/* Ghidra symbol: FUN_00594960 */


void FUN_00594960(void)

{
  undefined8 uVar1;
  
  uVar1 = DAT_02011ec8;
  DAT_02011ed0 = DAT_02011ed0 + 1;
  if (DAT_02011ed0 == 0) {
    DAT_02011ec8 = 0;
    FUN_00410f20(uVar1);
  }
  return;
}

