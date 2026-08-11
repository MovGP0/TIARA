/* Ghidra address: 01234870 */
/* Ghidra symbol: FUN_01234870 */


void FUN_01234870(longlong param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x900) + 0x260))(*(longlong **)(param_1 + 0x900));
  *(undefined4 *)PTR_DAT_020044a0 = uVar2;
  if (*(int *)PTR_DAT_020044a0 != -1) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x900) + 0x4f0);
    (**(code **)(*plVar1 + 0x18))(plVar1,local_20,*(undefined4 *)PTR_DAT_020044a0);
    FUN_00414ad0(PTR_DAT_02003158,local_20[0]);
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x900) + 0x4f0);
    uVar3 = (**(code **)(*plVar1 + 0x30))(plVar1,*(undefined4 *)PTR_DAT_020044a0);
    *(undefined8 *)PTR_DAT_020041c8 = uVar3;
    FUN_0064de00(*(undefined8 *)(param_1 + 0x900),*(undefined8 *)PTR_DAT_02003158);
  }
  FUN_00414480(local_20);
  return;
}

