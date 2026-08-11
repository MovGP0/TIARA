/* Ghidra address: 004aa270 */
/* Ghidra symbol: FUN_004aa270 */


void FUN_004aa270(void)

{
  undefined8 uVar1;
  
  uVar1 = DAT_02011638;
  DAT_02011640 = DAT_02011640 + 1;
  if (DAT_02011640 == 0) {
    DAT_02011638 = 0;
    FUN_00410f20(uVar1);
    FUN_0041b5b0(FUN_004aa1e0);
  }
  return;
}

