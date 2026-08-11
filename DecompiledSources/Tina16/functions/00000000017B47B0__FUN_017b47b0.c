/* Ghidra address: 017b47b0 */
/* Ghidra symbol: FUN_017b47b0 */


void FUN_017b47b0(longlong param_1,int *param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined8 local_50 [2];
  undefined8 local_40;
  
  local_40 = FUN_00498310(*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x10),
                          *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x14));
  if (*param_2 == 0x7fffffff) {
    uVar1 = FUN_00498310((longlong)(*(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x48)) / 2 &
                         0xffffffff,
                         (longlong)(*(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x4c)) / 2 &
                         0xffffffff);
    *(undefined8 *)param_2 = uVar1;
  }
  iVar3 = *(int *)(param_1 + 0x60);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      local_50[0] = FUN_017b50b0(param_1,*(longlong *)(param_1 + 0x58) + (longlong)iVar2 * 8);
      local_50[0] = FUN_017ad6c0(local_50,param_2);
      uVar1 = FUN_017b5080(param_1,local_50);
      *(undefined8 *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar2 * 8) = uVar1;
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_017b51d0(param_1);
  uVar1 = FUN_00498310(*(int *)(param_1 + 0x18) - (int)local_40,
                       *(int *)(param_1 + 0x1c) - local_40._4_4_);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  return;
}

