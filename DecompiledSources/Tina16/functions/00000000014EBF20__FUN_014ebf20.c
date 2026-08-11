/* Ghidra address: 014ebf20 */
/* Ghidra symbol: FUN_014ebf20 */


void FUN_014ebf20(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  FUN_004167d0(local_30,param_2);
  uVar3 = FUN_01b21480(local_30[0]);
  plVar1 = *(longlong **)(param_1 + 0x718);
  (**(code **)(*(longlong *)plVar1[0x9e] + 0x10))((longlong *)plVar1[0x9e],uVar3);
  iVar2 = (**(code **)(*(longlong *)plVar1[0x9e] + 0x28))((longlong *)plVar1[0x9e]);
  (**(code **)(*plVar1 + 0x268))(plVar1,iVar2 + -1);
  FUN_00410f20(uVar3);
  FUN_00414480(local_30);
  return;
}

