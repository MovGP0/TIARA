/* Ghidra address: 00965fb0 */
/* Ghidra symbol: FUN_00965fb0 */


void FUN_00965fb0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined8 local_40 [2];
  undefined8 local_30 [2];
  undefined8 local_20 [2];
  
  FUN_0059b8c0(*(longlong *)(param_1 + 0x38) + 8,5,0,local_20);
  FUN_00410f20(local_20[0]);
  FUN_0059b8c0(*(longlong *)(param_1 + 0x18) + 8,5,0,local_30);
  FUN_00410f20(local_30[0]);
  FUN_0059b8c0(*(longlong *)(param_1 + 0x30) + 8,5,0,local_40);
  FUN_00410f20(local_40[0]);
  plVar1 = *(longlong **)(param_1 + 0x20);
  iVar2 = (**(code **)(*plVar1 + 0x38))(plVar1);
  (**(code **)(*plVar1 + 0x98))(plVar1,iVar2 + -1);
  return;
}

