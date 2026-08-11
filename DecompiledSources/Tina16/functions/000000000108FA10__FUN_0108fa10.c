/* Ghidra address: 0108fa10 */
/* Ghidra symbol: FUN_0108fa10 */


void FUN_0108fa10(longlong param_1,int param_2)

{
  int iVar1;
  undefined8 local_30 [2];
  
  iVar1 = *(int *)(param_1 + 0x4c94);
  if (iVar1 != param_2) {
    if (0 < iVar1) {
      FUN_00bf3780(*(undefined8 *)(param_1 + 0xa78),iVar1);
      FUN_00c0dc30(*(undefined8 *)(param_1 + 0xa78),*(undefined4 *)(param_1 + 0x4c94));
    }
    if ((0 < param_2) && (*(int *)(*(longlong *)(param_1 + 0xa78) + 0x4cc) != param_2)) {
      local_30[0] = FUN_00bb7750(1,param_2);
      (**(code **)(**(longlong **)(param_1 + 0xa78) + 0x2b0))
                (*(longlong **)(param_1 + 0xa78),local_30);
    }
    FUN_00bf3780(*(undefined8 *)(param_1 + 0xa78),param_2);
    FUN_00c0dc30(*(undefined8 *)(param_1 + 0xa78),param_2);
  }
  return;
}

