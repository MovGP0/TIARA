/* Ghidra address: 014fdf50 */
/* Ghidra symbol: FUN_014fdf50 */


void FUN_014fdf50(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  uVar3 = thunk_FUN_04128719();
  *(undefined8 *)(param_1 + 0x720) = uVar3;
  uVar3 = FUN_0065b870(param_1);
  uVar3 = FUN_007f94c0(uVar3);
  *(undefined8 *)(param_1 + 0x718) = uVar3;
  plVar1 = *(longlong **)(*(longlong *)PTR_DAT_02004e40 + 0xa10);
  iVar2 = (**(code **)(*plVar1 + 0x1a0))(plVar1,2);
  local_20 = CONCAT44(local_20._4_4_,
                      (((int)plVar1[0x13] - iVar2) - *(int *)(param_1 + 0x98)) + -0x1e);
  iVar2 = (**(code **)(*plVar1 + 0x1a0))(plVar1,3);
  local_20 = CONCAT44(((*(int *)((longlong)plVar1 + 0x9c) - iVar2) - *(int *)(param_1 + 0x9c)) +
                      -0x14,(undefined4)local_20);
  local_20 = FUN_0064d1f0(plVar1,&local_20);
  FUN_00806af0(param_1,local_20 & 0xffffffff);
  FUN_00806b40(param_1,local_20._4_4_);
  FUN_014ffa60(param_1,*(undefined8 *)(param_1 + 0x6f0));
  FUN_0064cf60(param_1,0x453);
  return;
}

