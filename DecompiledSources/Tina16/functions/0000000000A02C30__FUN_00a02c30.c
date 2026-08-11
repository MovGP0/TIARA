/* Ghidra address: 00a02c30 */
/* Ghidra symbol: FUN_00a02c30 */


void FUN_00a02c30(void)

{
  undefined8 uVar1;
  
  uVar1 = DAT_02013388;
  DAT_02013378 = DAT_02013378 + 1;
  if (DAT_02013378 == 0) {
    DAT_0201337c = 1;
    DAT_02013388 = 0;
    FUN_00410f20(uVar1);
    uVar1 = DAT_02013380;
    DAT_02013380 = 0;
    FUN_00410f20(uVar1);
  }
  return;
}

