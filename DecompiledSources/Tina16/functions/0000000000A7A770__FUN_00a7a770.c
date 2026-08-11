/* Ghidra address: 00a7a770 */
/* Ghidra symbol: FUN_00a7a770 */


void FUN_00a7a770(void)

{
  undefined8 uVar1;
  
  uVar1 = DAT_02014718;
  DAT_02014710 = DAT_02014710 + 1;
  if (DAT_02014710 == 0) {
    DAT_02014718 = 0;
    FUN_00410f20(uVar1);
  }
  return;
}

