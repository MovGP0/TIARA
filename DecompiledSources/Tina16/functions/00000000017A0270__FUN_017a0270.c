/* Ghidra address: 017a0270 */
/* Ghidra symbol: FUN_017a0270 */


bool FUN_017a0270(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  undefined8 local_res10;
  undefined8 local_res18;
  bool local_41;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_20 = 0;
  local_28 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  local_41 = false;
  iVar3 = 0;
  while( true ) {
    plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x80) + 0xd48) + 0x428);
    iVar2 = (**(code **)(*plVar1 + 0x28))(plVar1);
    if ((iVar2 <= iVar3) || (local_41 != false)) break;
    plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x80) + 0xd48) + 0x428);
    (**(code **)(*plVar1 + 0x18))(plVar1,&local_30,iVar3);
    FUN_00441640(&local_20,local_30);
    plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x80) + 0xd48) + 0x428);
    (**(code **)(*plVar1 + 0x18))(plVar1,&local_38,iVar3);
    FUN_00441920(&local_28,local_38);
    iVar2 = FUN_0043e6d0(local_20,local_res10);
    if (iVar2 != 0) {
      FUN_00441920(&local_40,local_res18);
      iVar2 = FUN_0043e6d0(local_28,local_40);
      local_41 = iVar2 == 0;
    }
    iVar3 = iVar3 + 1;
  }
  FUN_00414560(&local_40,5);
  FUN_00414560(&local_res10,2);
  return local_41;
}

