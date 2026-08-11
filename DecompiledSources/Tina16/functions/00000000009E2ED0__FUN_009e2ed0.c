/* Ghidra address: 009e2ed0 */
/* Ghidra symbol: FUN_009e2ed0 */


void FUN_009e2ed0(void)

{
  undefined8 uVar1;
  
  uVar1 = DAT_02013328;
  DAT_02013340 = DAT_02013340 + 1;
  if (DAT_02013340 == 0) {
    DAT_02013328 = 0;
    FUN_00410f20(uVar1);
    uVar1 = DAT_02013330;
    DAT_02013330 = 0;
    FUN_00410f20(uVar1);
    uVar1 = DAT_02013338;
    DAT_02013338 = 0;
    FUN_00410f20(uVar1);
  }
  return;
}

