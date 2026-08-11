/* Ghidra address: 0112d170 */
/* Ghidra symbol: FUN_0112d170 */


void FUN_0112d170(void)

{
  undefined8 uVar1;
  
  uVar1 = DAT_01f240d8;
  DAT_02030178 = DAT_02030178 + 1;
  if (DAT_02030178 == 0) {
    DAT_01f240d8 = 0;
    FUN_00410f20(uVar1);
    uVar1 = DAT_01f240e0;
    DAT_01f240e0 = 0;
    FUN_00410f20(uVar1);
  }
  return;
}

