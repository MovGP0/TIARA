/* Ghidra address: 00cb0dd0 */
/* Ghidra symbol: FUN_00cb0dd0 */


void FUN_00cb0dd0(void)

{
  undefined8 uVar1;
  
  uVar1 = DAT_01eaaf20;
  DAT_02019f10 = DAT_02019f10 + 1;
  if (DAT_02019f10 == 0) {
    DAT_01eaaf20 = 0;
    FUN_00410f20(uVar1);
  }
  return;
}

