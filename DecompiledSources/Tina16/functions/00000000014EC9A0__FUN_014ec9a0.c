/* Ghidra address: 014ec9a0 */
/* Ghidra symbol: FUN_014ec9a0 */


void FUN_014ec9a0(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined8 local_20 [2];
  
  local_68 = 0;
  local_70 = 0;
  local_48 = 0;
  local_50 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30[0] = 0;
  local_20[0] = 0;
  plVar3 = (longlong *)FUN_007fc180(&PTR_FUN_0106afa0,1,*(undefined8 *)PTR_DAT_02004030);
  FUN_0041ddd0(local_30,PTR_PTR_020023a0);
  FUN_0106b900(plVar3,local_30[0]);
  FUN_0041ddd0(&local_38,PTR_PTR_02005b58);
  FUN_0106b9c0(plVar3,local_38);
  iVar2 = (**(code **)(*plVar3 + 0x2d0))(plVar3);
  if (iVar2 == 1) {
    FUN_0106b870(plVar3,&local_40);
    FUN_00415dd0(local_20,local_40,0);
    uVar4 = FUN_004425e0(param_1 + 0x768,local_20[0]);
    cVar1 = _Pkg_NewLibrary(uVar4,1,param_1 + 0xb6a);
    if (cVar1 == '\0') {
      FUN_0041ddd0(&local_70,PTR_PTR_02001fa8);
      local_60 = local_20[0];
      local_58 = 0xb;
      FUN_00442f70(&local_68,local_70,&local_60,0);
      FUN_014ebd70(param_1,local_68);
    }
    else {
      FUN_014ebf20(param_1,param_1 + 0xb6a);
      FUN_0041ddd0(&local_50,PTR_PTR_02003850);
      local_60 = local_20[0];
      local_58 = 0xb;
      FUN_00442f70(&local_48,local_50,&local_60,0);
      FUN_014ebd70(param_1,local_48);
    }
  }
  FUN_00410f20(plVar3);
  FUN_00414560(&local_70,2);
  FUN_00414560(&local_50,5);
  FUN_004144d0(local_20);
  return;
}

