/* Ghidra address: 00cd3850 */
/* Ghidra symbol: FUN_00cd3850 */


void FUN_00cd3850(void)

{
  undefined8 uVar1;
  
  DAT_02019f84 = DAT_02019f84 + 1;
  if (DAT_02019f84 == 0) {
    FUN_00ccdc50();
    uVar1 = DAT_01eadbb0;
    DAT_01eadbb0 = 0;
    FUN_00410f20(uVar1);
  }
  return;
}

