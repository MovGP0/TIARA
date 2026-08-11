/* Ghidra address: 0161e030 */
/* Ghidra symbol: FUN_0161e030 */


undefined8 FUN_0161e030(longlong *param_1,byte *param_2,undefined8 param_3,undefined1 param_4)

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
  undefined8 local_290;
  undefined8 local_288;
  undefined1 local_280 [256];
  undefined8 local_180;
  undefined8 local_178;
  undefined1 *local_170;
  char local_159;
  undefined8 local_158;
  int local_150;
  int local_14c;
  longlong local_148;
  undefined8 local_140;
  byte local_138 [256];
  longlong local_38;
  longlong *local_30;
  
  local_170 = auStack_2d8;
  local_298 = 0;
  local_2a0 = 0;
  local_2a8 = 0;
  local_290 = 0;
  local_288 = 0;
  local_180 = 0;
  local_178 = 0;
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
    FUN_0041ddd0(&local_178,PTR_PTR_02002f10);
    uVar2 = FUN_0044d490(&PTR_FUN_004334c0,1,local_178);
    FUN_004134c0(uVar2);
  }
  iVar1 = (**(code **)(*local_30 + 0x28))();
  local_14c = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(*local_30 + 0x18))(local_30,&local_180,local_14c);
      local_2b8 = local_180;
      local_2b0 = L".LIB";
      FUN_00416cd0(&local_158,4,*(undefined8 *)PTR_DAT_020049a0,L"\\SPICELIB\\");
      FUN_00416910(local_280,local_158,0xff);
      FUN_016c41d0(local_38,local_280);
      local_14c = local_14c + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  local_2b8 = 0;
  local_159 = FUN_00ee3970(*(undefined8 *)(local_38 + 8),0,local_138,0);
  if (local_159 == '\0') {
    FUN_0041ddd0(&local_2a0,PTR_PTR_020019c0);
    FUN_004169a0(&local_2a8,local_138);
    local_2b8 = local_2a8;
    FUN_00416cd0(&local_298,3,local_2a0,&LAB_0161e514);
    uVar2 = FUN_0044d490(&PTR_FUN_004334c0,1,local_298);
    FUN_004134c0(uVar2);
  }
  else {
    if (param_1 != (longlong *)0x0) {
      iVar1 = (**(code **)(*param_1 + 0x28))();
      local_150 = 0;
      if (-1 < iVar1 + -1) {
        do {
          FUN_004b3cf0(param_1,&local_288,local_150);
          FUN_00416910(local_280,local_288,0xff);
          FUN_016c36d0(local_38,&local_148,local_280,1);
          if (local_148 != 0) {
            FUN_004b5390(param_1,&local_290,local_150);
            FUN_00415dd0(local_148 + 0x10,local_290,0);
            *(undefined8 *)(local_148 + 0x28) = 0;
          }
          local_150 = local_150 + 1;
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
    }
    local_140 = FUN_016cbaf0(local_138,0,local_38,local_res20);
  }
  FUN_00410f20(local_30);
  FUN_00410f20(local_38);
  FUN_00414560(&local_2a8,5);
  FUN_00414560(&local_180,2);
  FUN_00414480(&local_158);
  FUN_00414480(&local_res18);
  return local_140;
}

