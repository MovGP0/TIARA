/* Ghidra address: 0161e520 */
/* Ghidra symbol: FUN_0161e520 */


undefined1 FUN_0161e520(undefined8 param_1,byte *param_2,undefined8 param_3,undefined1 param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  byte *pbVar4;
  undefined8 local_res18;
  undefined1 local_res20;
  undefined1 auStack_2d8 [32];
  undefined8 local_2b8;
  wchar_t *local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined1 local_290 [256];
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined1 *local_170;
  undefined1 local_15a;
  char local_159;
  undefined8 local_158;
  int local_14c;
  undefined1 local_139;
  byte local_138 [256];
  longlong local_38;
  longlong *local_30;
  
  local_170 = auStack_2d8;
  local_298 = 0;
  local_2a0 = 0;
  local_2a8 = 0;
  local_190 = 0;
  local_178 = 0;
  local_180 = 0;
  local_188 = 0;
  local_158 = 0;
  lVar3 = (ulonglong)*param_2 + 1;
  pbVar4 = local_138;
  for (; lVar3 != 0; lVar3 = lVar3 + -1) {
    *pbVar4 = *param_2;
    param_2 = param_2 + 1;
    pbVar4 = pbVar4 + 1;
  }
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_3);
  local_38 = FUN_016b97f0(&DAT_016b45f0,1,1);
  lVar3 = *(longlong *)(local_38 + 0x10);
  *(undefined1 *)(lVar3 + 0x231) = 0;
  FUN_016a36d0(lVar3,0);
  FUN_016cff60(local_38,1,0,0);
  local_30 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_01b21120(local_res18,local_30,0x3b);
  iVar1 = (**(code **)(*local_30 + 0x28))(local_30);
  if (iVar1 == 0) {
    FUN_0041ddd0(&local_180,PTR_PTR_020019c0);
    FUN_004169a0(&local_188,local_138);
    local_2b8 = local_188;
    FUN_00416cd0(&local_178,3,local_180,&DAT_0161e968);
    uVar2 = FUN_0044d490(&PTR_FUN_004334c0,1,local_178);
    FUN_004134c0(uVar2);
  }
  iVar1 = (**(code **)(*local_30 + 0x28))();
  local_14c = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(*local_30 + 0x18))(local_30,&local_190,local_14c);
      local_2b8 = local_190;
      local_2b0 = L".LIB";
      FUN_00416cd0(&local_158,4,*(undefined8 *)PTR_DAT_020049a0,L"\\SPICELIB\\");
      FUN_00416910(local_290,local_158,0xff);
      FUN_016c41d0(local_38,local_290);
      local_14c = local_14c + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  local_15a = 0;
  local_2b8 = 0;
  local_159 = FUN_00ee3970(*(undefined8 *)(local_38 + 8),0,local_138,0);
  if (local_159 == '\0') {
    local_15a = 3;
    local_2b8 = 0;
    local_159 = FUN_00ee3970(*(undefined8 *)(local_38 + 8),3,local_138,0);
    if (local_159 == '\0') {
      FUN_0041ddd0(&local_2a0,PTR_PTR_020019c0);
      FUN_004169a0(&local_2a8,local_138);
      local_2b8 = local_2a8;
      FUN_00416cd0(&local_298,3,local_2a0,&DAT_0161e968);
      uVar2 = FUN_0044d490(&PTR_FUN_004334c0,1,local_298);
      FUN_004134c0(uVar2);
    }
  }
  local_139 = local_15a;
  FUN_00410f20(local_30);
  FUN_00410f20(local_38);
  FUN_00414560(&local_2a8,3);
  FUN_00414560(&local_190,4);
  FUN_00414480(&local_158);
  FUN_00414480(&local_res18);
  return local_139;
}

