/* Ghidra address: 00448f90 */
/* Ghidra symbol: FUN_00448f90 */


void FUN_00448f90(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  
  if (0x100 - *(int *)(param_1 + 100) < param_3) {
    iVar1 = 0;
    if (*(longlong *)(param_1 + 0x268) != 0) {
      iVar1 = (int)*(undefined8 *)(*(longlong *)(param_1 + 0x268) + -8);
    }
    FUN_00419260(param_1 + 0x268,&DAT_00448f58,1,
                 (longlong)(iVar1 + *(int *)(param_1 + 100) + param_3));
    if (0 < *(int *)(param_1 + 100)) {
      FUN_00409a70(param_1 + 0x68,*(longlong *)(param_1 + 0x268) + (longlong)iVar1 * 2,
                   (longlong)(*(int *)(param_1 + 100) * 2));
      iVar1 = iVar1 + *(int *)(param_1 + 100);
    }
    FUN_00409a70(param_2,*(longlong *)(param_1 + 0x268) + (longlong)iVar1 * 2,
                 (longlong)(param_3 * 2));
    *(undefined4 *)(param_1 + 100) = 0;
  }
  else if (0 < param_3) {
    FUN_00409a70(param_2,param_1 + 0x68 + (longlong)*(int *)(param_1 + 100) * 2,
                 (longlong)(param_3 * 2));
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + param_3;
  }
  return;
}

