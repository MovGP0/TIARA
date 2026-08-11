/* Ghidra address: 01d79310 */
/* Ghidra symbol: FUN_01d79310 */


void FUN_01d79310(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_res8 [4];
  undefined1 auStack_f8 [32];
  undefined **local_d8;
  int local_bc;
  longlong local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 *local_70;
  int local_60;
  undefined4 local_5c;
  longlong local_58;
  int local_4c;
  longlong *local_48;
  longlong *local_40;
  longlong *local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_70 = auStack_f8;
  local_b8 = 0;
  local_b0 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_28 = 0;
  local_30 = 0;
  local_20[0] = 0;
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  FUN_00416ba0(&local_78,local_res8[0],L"TINA.INI");
  local_38 = (longlong *)FUN_005da0f0(&PTR_FUN_005d5a90,1,local_78);
  local_d8 = &PTR_DAT_01d799c4;
  (**(code **)(*local_38 + 0x10))(local_38,&local_28,L"Schematic Editor",L"DefSymbolSet");
  iVar1 = FUN_00416db0(local_28,&PTR_DAT_01d799c4);
  if (iVar1 == 0) {
    *PTR_DAT_02002480 = 0;
  }
  else {
    *PTR_DAT_02002480 = 1;
  }
  local_d8 = (undefined **)0x1d799f4;
  (**(code **)(*local_38 + 0x10))(local_38,&local_28,L"Schematic Editor",L"DefUnit");
  iVar1 = FUN_00416db0(local_28,L"inch");
  if (iVar1 == 0) {
    *PTR_DAT_020033c0 = 1;
  }
  else {
    *PTR_DAT_020033c0 = 3;
  }
  if (*PTR_DAT_02002de8 == '\0') {
    FUN_00414b50(&local_28,L"sine");
  }
  else {
    FUN_00414b50(&local_28,L"cosine");
  }
  local_d8 = (undefined **)local_28;
  (**(code **)(*local_38 + 0x10))(local_38,&local_80,L"Schematic Editor",L"ACBaseFunc");
  FUN_00414b50(&local_28,local_80);
  iVar1 = FUN_00416db0(local_28,L"sine");
  if (iVar1 == 0) {
    *PTR_DAT_02002de8 = 0;
  }
  else {
    *PTR_DAT_02002de8 = 1;
  }
  local_d8 = (undefined **)0x1d79a88;
  (**(code **)(*local_38 + 0x10))(local_38,&local_28,L"Schematic Editor",L"Measurement");
  iVar1 = FUN_00416db0(local_28,L"Enabled");
  if (iVar1 == 0) {
    *PTR_DAT_02003450 = 0;
  }
  else {
    *PTR_DAT_02003450 = 1;
  }
  FUN_01d43e00(PTR_DAT_02003e38,local_38);
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)PTR_DAT_02002da8 = uVar2;
  FUN_00416ba0(&local_88,*(undefined8 *)PTR_DAT_020049a0,L"\\Tina2Edi.cfg");
  (**(code **)(**(longlong **)PTR_DAT_02002da8 + 0xd8))(*(longlong **)PTR_DAT_02002da8,local_88);
  FUN_00416ba0(&local_90,*(undefined8 *)PTR_DAT_020049a0,L"\\compbar.cfg");
  uVar2 = FUN_005da0f0(&PTR_FUN_005d5a90,1,local_90);
  *(undefined8 *)PTR_DAT_02003a60 = uVar2;
  local_40 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  local_48 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  local_d8 = (undefined **)0x0;
  (**(code **)(**(longlong **)PTR_DAT_02003a60 + 0x10))
            (*(longlong **)PTR_DAT_02003a60,&local_98,L"ComponentMenuGroups",L"PicProcList");
  FUN_004b4b10(local_40,local_98);
  iVar1 = (**(code **)(*local_40 + 0x28))();
  local_bc = iVar1 + -1;
  local_4c = 0;
  if (-1 < local_bc) {
    do {
      local_bc = iVar1;
      (**(code **)(*local_40 + 0x18))(local_40,&local_a8,local_4c);
      local_d8 = (undefined **)0x0;
      (**(code **)(**(longlong **)PTR_DAT_02003a60 + 0x10))
                (*(longlong **)PTR_DAT_02003a60,&local_a0,L"ComponentMenus",local_a8);
      FUN_004b4b10(local_48,local_a0);
      local_20[0] = 0;
      (**(code **)(*local_48 + 0x18))(local_48,local_20,2);
      (**(code **)(*local_48 + 0x18))(local_48,&local_b0,2);
      local_60 = FUN_004170c0(&LAB_01d79b78,local_b0,1);
      local_60 = local_60 + 1;
      (**(code **)(*local_48 + 0x18))(local_48,&local_b8,2);
      local_58 = local_b8;
      local_5c = 0;
      if (local_b8 != 0) {
        local_5c = *(undefined4 *)(local_b8 + -4);
      }
      FUN_00416dc0(&local_30,local_20[0],local_60,local_5c);
      FUN_00414480(local_20);
      (**(code **)(**(longlong **)PTR_DAT_02002c60 + 0x78))(*(longlong **)PTR_DAT_02002c60,local_30)
      ;
      local_4c = local_4c + 1;
      local_bc = local_bc + -1;
      iVar1 = local_bc;
    } while (local_bc != 0);
  }
  FUN_00410f20(local_48);
  FUN_00410f20(local_40);
  FUN_00410f20(local_38);
  FUN_00414560(&local_b8,9);
  FUN_00414560(&local_30,2);
  FUN_00414480(local_res8);
  return;
}

