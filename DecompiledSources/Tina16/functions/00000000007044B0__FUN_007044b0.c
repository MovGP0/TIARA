/* Ghidra address: 007044b0 */
/* Ghidra symbol: FUN_007044b0 */


void FUN_007044b0(longlong *param_1,longlong param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(*(longlong *)(param_2 + 0x10) + 0x10);
  if (iVar1 == -0x326) {
    if (param_1[0xb4] != 0) {
      (*(code *)param_1[0xb4])(param_1[0xb5],param_1);
    }
  }
  else if (iVar1 == -0x324) {
    if (param_1[0xb2] != 0) {
      (*(code *)param_1[0xb2])(param_1[0xb3],param_1);
    }
  }
  else {
    (**(code **)(*param_1 + -0x38))(param_1);
  }
  return;
}

