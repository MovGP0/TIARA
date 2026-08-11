/* Ghidra address: 013cb410 */
/* Ghidra symbol: FUN_013cb410 */


undefined8 FUN_013cb410(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined8 local_20;
  
  local_30[0] = 0;
  local_38 = 0;
  local_20 = 0;
  iVar3 = 0;
  while( true ) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x778) + 0x4a0);
    iVar2 = (**(code **)(*plVar1 + 0x28))(plVar1);
    if (iVar2 + -1 < iVar3) break;
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x778) + 0x4a0);
    (**(code **)(*plVar1 + 0x18))(plVar1,&local_20,iVar3);
    FUN_01d43440(&local_38,*(undefined4 *)(param_1 + 0x908));
    FUN_00416ba0(local_30,L"MyFunction",local_38);
    iVar2 = FUN_00416db0(local_20,local_30[0]);
    if (iVar2 == 0) {
      *(int *)(param_1 + 0x908) = *(int *)(param_1 + 0x908) + 1;
      iVar3 = 0;
    }
    else {
      iVar3 = iVar3 + 1;
    }
  }
  FUN_013cb350(param_1);
  FUN_00414560(&local_38,2);
  FUN_00414480(&local_20);
  return param_2;
}

