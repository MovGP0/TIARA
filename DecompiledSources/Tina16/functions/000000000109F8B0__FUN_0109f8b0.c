/* Ghidra address: 0109f8b0 */
/* Ghidra symbol: FUN_0109f8b0 */


void FUN_0109f8b0(longlong *param_1,int param_2)

{
  int iVar1;
  undefined8 local_30 [2];
  
  iVar1 = (**(code **)(*param_1 + 0x2f0))(param_1);
  if (iVar1 != param_2) {
    if (0 < iVar1) {
      FUN_00bf3780(param_1[0x130],iVar1);
      FUN_00c0dc30(param_1[0x130],iVar1);
    }
    if ((0 < param_2) && (*(int *)(param_1[0x130] + 0x4cc) != param_2)) {
      local_30[0] = FUN_00bb7750(1,param_2);
      (**(code **)(*(longlong *)param_1[0x130] + 0x2b0))((longlong *)param_1[0x130],local_30);
    }
    FUN_00bf3780(param_1[0x130],param_2);
    FUN_00c0dc30(param_1[0x130],param_2);
  }
  return;
}

