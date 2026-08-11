/* Ghidra address: 01115940 */
/* Ghidra symbol: FUN_01115940 */


void FUN_01115940(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6b8) + 0x890);
  iVar2 = (**(code **)(*plVar1 + 0x28))(plVar1);
  if (iVar2 == 0) {
    FUN_00f08d50(local_20,3);
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6b8) + 0x890);
    (**(code **)(*plVar1 + 0x78))(plVar1,local_20[0]);
  }
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6b0) + 0x4d8);
  (**(code **)(*plVar1 + 0x90))(plVar1);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6b0) + 0x4d8);
  (**(code **)(*plVar1 + 0x88))(plVar1,*(undefined8 *)(*(longlong *)(param_1 + 0x6b8) + 0x890));
  FUN_00414480(local_20);
  return;
}

