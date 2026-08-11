/* Ghidra address: 014ec7d0 */
/* Ghidra symbol: FUN_014ec7d0 */


void FUN_014ec7d0(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  longlong local_40;
  undefined1 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  longlong local_10;
  
  local_58 = 0;
  local_48 = 0;
  local_50 = 0;
  local_28 = 0;
  local_30 = 0;
  local_20[0] = 0;
  local_10 = 0;
  FUN_014ebd10(param_1,local_20);
  FUN_00415dd0(&local_10,local_20[0],0);
  if (local_10 == 0) {
    FUN_0041ddd0(&local_58,PTR_PTR_02005b58);
    FUN_016fd940(local_58);
  }
  else {
    FUN_0041ddd0(&local_30,PTR_PTR_02002c70);
    local_40 = local_10;
    local_38 = 0xb;
    FUN_00442f70(&local_28,local_30,&local_40,0);
    iVar1 = FUN_0072d440(local_28,3,3,0);
    if (iVar1 == 6) {
      uVar2 = FUN_004425e0(param_1 + 0x768,local_10);
      _Pkg_DeleteLibrary(uVar2,1,param_1 + 0xb6a);
      FUN_014ebf20(param_1,param_1 + 0xb6a);
      FUN_0041ddd0(&local_50,PTR_PTR_020025c8);
      local_40 = local_10;
      local_38 = 0xb;
      FUN_00442f70(&local_48,local_50,&local_40,0);
      FUN_014ebd70(param_1,local_48);
    }
  }
  FUN_00414560(&local_58,3);
  FUN_00414560(&local_30,3);
  FUN_004144d0(&local_10);
  return;
}

