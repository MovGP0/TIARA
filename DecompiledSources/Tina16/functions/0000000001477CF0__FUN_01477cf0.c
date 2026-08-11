/* Ghidra address: 01477cf0 */
/* Ghidra symbol: FUN_01477cf0 */


int FUN_01477cf0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 local_res10;
  undefined8 local_res18;
  int local_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_50 = 0;
  local_58 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  local_5c = -1;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x208) + 8);
  iVar3 = (**(code **)(*plVar1 + 0x28))();
  iVar5 = 0;
  iVar2 = local_5c;
  if (-1 < iVar3 + -1) {
    do {
      (**(code **)(*plVar1 + 0x18))(plVar1,&local_30,iVar5);
      FUN_01477740(local_30,&local_38,&local_40,&local_48);
      FUN_0043e1a0(&local_50,local_res10);
      FUN_0043e1a0(&local_58,local_38);
      iVar4 = FUN_00416db0(local_50,local_58);
      iVar2 = iVar5;
      if (iVar4 == 0) break;
      iVar5 = iVar5 + 1;
      iVar3 = iVar3 + -1;
      iVar2 = local_5c;
    } while (iVar3 != 0);
  }
  local_5c = iVar2;
  FUN_00414560(&local_58,6);
  FUN_00414560(&local_res10,2);
  return local_5c;
}

