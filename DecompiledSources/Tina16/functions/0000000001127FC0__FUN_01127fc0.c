/* Ghidra address: 01127fc0 */
/* Ghidra symbol: FUN_01127fc0 */


void FUN_01127fc0(longlong param_1,undefined8 param_2,undefined1 *param_3,longlong *param_4)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  if (*param_4 == *(longlong *)(param_1 + 0x838)) {
    FUN_0064dd90(*(longlong *)(param_1 + 0x838),local_20);
    uVar3 = FUN_007ffbe0(param_1);
    iVar2 = FUN_005fdff0(uVar3,local_20[0]);
    if (*(int *)(*(longlong *)(param_1 + 0x838) + 0x98) < iVar2 + 5) {
      FUN_00414ad0(param_4 + 8,local_20[0]);
      *param_3 = 1;
      *(undefined4 *)(param_4 + 7) = 100;
      lVar1 = *(longlong *)(param_1 + 0x838);
      local_30 = FUN_00498310(5,*(int *)(lVar1 + 0x9c) + 5);
      uVar3 = FUN_0064d1f0(lVar1,&local_30);
      local_28._0_4_ = (undefined4)uVar3;
      *(undefined4 *)(param_4 + 2) = (undefined4)local_28;
      local_28._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
      *(undefined4 *)((longlong)param_4 + 0x14) = local_28._4_4_;
      local_28 = uVar3;
    }
    else {
      *param_3 = 0;
    }
  }
  FUN_00414480(local_20);
  return;
}

