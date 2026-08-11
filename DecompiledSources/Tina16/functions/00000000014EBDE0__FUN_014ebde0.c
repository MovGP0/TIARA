/* Ghidra address: 014ebde0 */
/* Ghidra symbol: FUN_014ebde0 */


void FUN_014ebde0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 local_res10 [3];
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  lVar1 = *(longlong *)(param_1 + 0x6c8);
  plVar2 = *(longlong **)(lVar1 + 0x4d8);
  iVar4 = (**(code **)(*plVar2 + 0x28))(plVar2);
  plVar3 = *(longlong **)(lVar1 + 0x4d8);
  iVar5 = (**(code **)(*plVar3 + 0x28))(plVar3);
  (**(code **)(*plVar3 + 0x18))(plVar3,local_30,iVar5 + -1);
  FUN_00416ad0(local_30,local_res10[0]);
  (**(code **)(*plVar2 + 0x40))(plVar2,iVar4 + -1,local_30[0]);
  FUN_00414480(local_30);
  FUN_00414480(local_res10);
  return;
}

