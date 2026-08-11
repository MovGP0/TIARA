/* Ghidra address: 017bd7a0 */
/* Ghidra symbol: FUN_017bd7a0 */


void FUN_017bd7a0(longlong param_1,undefined8 param_2,int *param_3)

{
  FUN_00b956d0(param_3,*(int *)(param_1 + 0xc) + -1,*(int *)(param_1 + 0x10) + -1,
               *(int *)(param_1 + 0xb8) + 1,*(int *)(param_1 + 0xbc) + 1);
  if (param_3[2] < *param_3) {
    FUN_01cefdf0(param_3,param_3 + 2);
  }
  if (param_3[3] < param_3[1]) {
    FUN_01cefdf0(param_3 + 1,param_3 + 3);
  }
  return;
}

