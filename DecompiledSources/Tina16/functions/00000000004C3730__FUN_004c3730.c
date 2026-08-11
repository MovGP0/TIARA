/* Ghidra address: 004c3730 */
/* Ghidra symbol: FUN_004c3730 */


void FUN_004c3730(longlong param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = 0;
  if (*(longlong *)(param_1 + 0x10) != 0) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + -8);
  }
  if (lVar1 < *(longlong *)(param_1 + 0x20) + (longlong)param_2) {
    FUN_004c3a60();
  }
  return;
}

