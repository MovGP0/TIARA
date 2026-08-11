/* Ghidra address: 00ca56f0 */
/* Ghidra symbol: FUN_00ca56f0 */


void FUN_00ca56f0(void)

{
  undefined8 uVar1;
  
  uVar1 = DAT_02019f00;
  DAT_02019ef8 = DAT_02019ef8 + 1;
  if (DAT_02019ef8 == 0) {
    DAT_02019f00 = 0;
    FUN_00410f20(uVar1);
    FUN_00414480(&DAT_01eaac78);
  }
  return;
}

