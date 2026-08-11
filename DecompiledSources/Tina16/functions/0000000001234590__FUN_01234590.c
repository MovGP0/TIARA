/* Ghidra address: 01234590 */
/* Ghidra symbol: FUN_01234590 */


void FUN_01234590(longlong param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x8f8) + 0x260))(*(longlong **)(param_1 + 0x8f8));
  *(undefined4 *)PTR_DAT_02004190 = uVar2;
  if (*(int *)PTR_DAT_02004190 != -1) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x8f8) + 0x4f0);
    (**(code **)(*plVar1 + 0x18))(plVar1,local_20,*(undefined4 *)PTR_DAT_02004190);
    FUN_00414ad0(PTR_DAT_02002e48,local_20[0]);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x8f8),*(undefined8 *)PTR_DAT_02002e48);
  }
  FUN_00414480(local_20);
  return;
}

