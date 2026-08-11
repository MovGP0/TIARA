/* Ghidra address: 00aa3250 */
/* Ghidra symbol: FUN_00aa3250 */


void FUN_00aa3250(longlong param_1,undefined8 param_2,int *param_3,int *param_4,undefined4 param_5,
                 undefined4 param_6)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x56c) == '\0') {
    iVar1 = (((*(int *)(param_1 + 0x568) - *(int *)(param_1 + 0x4a4)) - *(int *)(param_1 + 0x49c)) -
            *(int *)(param_1 + 0x494)) - *(int *)(param_1 + 0x48c);
    if (iVar1 < 0) {
      iVar1 = 0;
    }
  }
  else {
    iVar1 = 0;
  }
  *(int *)(*(longlong *)(param_1 + 0x560) + 0x130) = iVar1;
  FUN_00a9d290(param_1,param_2,param_3,param_4,param_5,param_6);
  if (0 < iVar1) {
    if (iVar1 < *param_3) {
      iVar1 = *param_3;
    }
    *param_3 = iVar1;
    *param_4 = *param_3;
  }
  return;
}

