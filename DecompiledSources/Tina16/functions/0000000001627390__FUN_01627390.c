/* Ghidra address: 01627390 */
/* Ghidra symbol: FUN_01627390 */


undefined4 FUN_01627390(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 local_30 [2];
  undefined8 local_20 [2];
  
  local_30[0] = 0;
  local_20[0] = 0;
  FUN_01cfdb80(param_2,local_20,param_3);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xd0) + 0x578);
  iVar2 = (**(code **)(*plVar1 + 0xb0))(plVar1,local_20[0]);
  if (iVar2 == -1) {
    FUN_00416ba0(local_30,L"Port not found: ",local_20[0]);
    FUN_01613110(local_30[0]);
  }
  (**(code **)(**(longlong **)(param_1 + 200) + 0x18))(*(longlong **)(param_1 + 200),local_20,iVar2)
  ;
  uVar3 = FUN_0043fc00(local_20[0]);
  FUN_00414480(local_30);
  FUN_00414480(local_20);
  return uVar3;
}

