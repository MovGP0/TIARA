/* Ghidra address: 01477a10 */
/* Ghidra symbol: FUN_01477a10 */


int FUN_01477a10(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 local_res10;
  undefined8 local_res18;
  int local_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_80 = 0;
  local_88 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  local_8c = -1;
  FUN_00414480(&local_38);
  FUN_0043e1a0(&local_60,local_res18);
  iVar2 = FUN_00416db0(local_60,&DAT_01477c70);
  if (iVar2 == 0) {
    FUN_00414b50(&local_38,L"volt");
  }
  FUN_0043e1a0(&local_68,local_res18);
  iVar2 = FUN_00416db0(local_68,&DAT_01477c98);
  if (iVar2 == 0) {
    FUN_00414b50(&local_38,L"current");
  }
  FUN_0043e1a0(&local_70,local_res18);
  iVar2 = FUN_00416db0(local_70,&DAT_01477cc4);
  if (iVar2 == 0) {
    FUN_00414b50(&local_38,L"frequency");
  }
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x208) + 0x10);
  iVar3 = (**(code **)(*plVar1 + 0x28))();
  iVar5 = 0;
  iVar2 = local_8c;
  if (-1 < iVar3 + -1) {
    do {
      (**(code **)(*plVar1 + 0x18))(plVar1,&local_78,iVar5);
      FUN_0043e1a0(&local_40,local_78);
      FUN_0043e1a0(&local_80,local_res10);
      FUN_0043e1a0(&local_88,local_40);
      iVar4 = FUN_004170c0(local_80,local_88,1);
      iVar2 = iVar5;
      if (0 < iVar4) break;
      iVar5 = iVar5 + 1;
      iVar3 = iVar3 + -1;
      iVar2 = local_8c;
    } while (iVar3 != 0);
  }
  local_8c = iVar2;
  FUN_00414560(&local_88,0xc);
  FUN_00414560(&local_res10,2);
  return local_8c;
}

