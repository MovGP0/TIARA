/* Ghidra address: 00cc3ec0 */
/* Ghidra symbol: FUN_00cc3ec0 */


void FUN_00cc3ec0(void)

{
  undefined8 uVar1;
  
  uVar1 = DAT_02019f70;
  DAT_02019f78 = DAT_02019f78 + 1;
  if (DAT_02019f78 == 0) {
    DAT_02019f70 = 0;
    FUN_00410f20(uVar1);
  }
  return;
}

