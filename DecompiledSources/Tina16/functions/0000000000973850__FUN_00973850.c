/* Ghidra address: 00973850 */
/* Ghidra symbol: FUN_00973850 */


void FUN_00973850(longlong param_1,longlong param_2,undefined1 *param_3,undefined8 param_4)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  undefined8 local_20;
  
  local_20 = 0;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x90) + 0x88);
  iVar2 = (**(code **)(*plVar1 + 0x38))(plVar1);
  iVar2 = iVar2 + -1;
  if (iVar2 == -1) {
    *param_3 = 0x98;
    FUN_00414b90(param_4,*(undefined8 *)(param_2 + 0x88));
  }
  else {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x90) + 0x88);
    (**(code **)(*plVar1 + 0x28))(plVar1,&local_20,iVar2);
    iVar3 = FUN_00416420(local_20,*(undefined8 *)(param_2 + 0x88));
    if (iVar3 == 0) {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x90) + 0x88);
      (**(code **)(*plVar1 + 0x98))(plVar1,iVar2);
    }
    else {
      *param_3 = 0x98;
      FUN_00414b90(param_4,*(undefined8 *)(param_2 + 0x88));
    }
  }
  FUN_00414520(&local_20);
  return;
}

