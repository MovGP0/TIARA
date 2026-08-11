/* Ghidra address: 017b15b0 */
/* Ghidra symbol: FUN_017b15b0 */


void FUN_017b15b0(longlong param_1,int *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 local_28;
  undefined4 uStack_24;
  
  uVar1 = FUN_00498310(*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x10),
                       *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x14));
  if (*param_2 == 0x7fffffff) {
    uVar2 = FUN_00498310((longlong)(*(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x48)) / 2 &
                         0xffffffff,
                         (longlong)(*(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x4c)) / 2 &
                         0xffffffff);
    *(undefined8 *)param_2 = uVar2;
  }
  uVar2 = FUN_017ad670(param_1 + 0x18,param_2);
  uVar3 = FUN_017ad670(param_1 + 0x48,param_2);
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  *(undefined8 *)(param_1 + 0x48) = uVar2;
  local_28 = (int)uVar1;
  uStack_24 = (int)((ulonglong)uVar1 >> 0x20);
  uVar1 = FUN_00498310(*(int *)(param_1 + 0x18) - local_28,*(int *)(param_1 + 0x1c) - uStack_24);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  return;
}

