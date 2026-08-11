/* Ghidra address: 018ab560 */
/* Ghidra symbol: FUN_018ab560 */


void FUN_018ab560(longlong param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_018a9b40(param_1);
  if (iVar1 < param_2) {
    param_2 = FUN_018a9b40(param_1);
  }
  if (param_2 < 1) {
    param_2 = 1;
  }
  FUN_018a72e0(*(undefined8 *)(param_1 + 0x550),param_2,param_3);
  return;
}

