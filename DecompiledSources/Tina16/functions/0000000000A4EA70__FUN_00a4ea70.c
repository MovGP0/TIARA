/* Ghidra address: 00a4ea70 */
/* Ghidra symbol: FUN_00a4ea70 */


void FUN_00a4ea70(void)

{
  undefined8 uVar1;
  
  uVar1 = DAT_02014468;
  DAT_02014460 = DAT_02014460 + 1;
  if (DAT_02014460 == 0) {
    DAT_02014468 = 0;
    FUN_00410f20(uVar1);
  }
  return;
}

