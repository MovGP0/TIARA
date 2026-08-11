/* Ghidra address: 01be1490 */
/* Ghidra symbol: FUN_01be1490 */


void FUN_01be1490(undefined8 param_1)

{
  longlong lVar1;
  
  if (DAT_02111460 != 0) {
    FUN_004aee50(DAT_02111460,param_1,0);
    lVar1 = DAT_02111460;
    if (*(int *)(DAT_02111460 + 0x10) == 0) {
      DAT_02111460 = 0;
      FUN_00410f20(lVar1);
    }
  }
  return;
}

