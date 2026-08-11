/* Ghidra address: 005b4de0 */
/* Ghidra symbol: FUN_005b4de0 */


void FUN_005b4de0(void)

{
  undefined8 uVar1;
  
  uVar1 = DAT_02011ef8;
  DAT_02011ef4 = DAT_02011ef4 + 1;
  if (DAT_02011ef4 == 0) {
    DAT_02011ef8 = 0;
    FUN_00410f20(uVar1);
  }
  return;
}

