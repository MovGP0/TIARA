/* Ghidra address: 01c835b0 */
/* Ghidra symbol: FUN_01c835b0 */


undefined1 FUN_01c835b0(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 local_res8 [4];
  undefined1 auStack_f8 [32];
  wchar_t *local_d8;
  undefined8 local_c0;
  longlong local_b8;
  longlong local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 *local_70;
  bool local_59;
  longlong local_58;
  longlong local_50;
  int local_44;
  undefined8 local_40;
  undefined8 local_38;
  longlong *local_30;
  undefined1 local_21;
  longlong *local_20;
  
  local_70 = auStack_f8;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_90 = 0;
  local_98 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_38 = 0;
  local_40 = 0;
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  local_21 = 0;
  *PTR_DAT_02004e38 = 0;
  local_d8 = L"TINA.INI";
  FUN_00416cd0(&local_78,3,*(undefined8 *)PTR_DAT_02005010,&DAT_01c83a4c);
  local_20 = (longlong *)FUN_005da0f0(&PTR_FUN_005d5a90,1,local_78);
  local_44 = 0;
  do {
    FUN_0043f750(&local_80,local_44);
    FUN_00416ba0(&local_40,&DAT_01c83a7c,local_80);
    FUN_00416ba0(&local_88,local_40,&DAT_01c83ad4);
    local_d8 = L"-";
    (**(code **)(*local_20 + 0x10))(local_20,&local_38,L"Schematic Editor Color Sets",local_88);
    iVar2 = FUN_00416db0(local_38,local_res8[0]);
    if (iVar2 == 0) {
      FUN_00416ba0(&local_98,local_40,L"_Mode");
      local_d8 = (wchar_t *)0x0;
      (**(code **)(*local_20 + 0x10))(local_20,&local_90,L"Schematic Editor Color Sets",local_98);
      cVar1 = FUN_0043fc50(local_90,0);
      *PTR_DAT_02004e38 = cVar1 == '\x01';
    }
    local_44 = local_44 + 1;
    iVar2 = FUN_00416db0(local_38,local_res8[0]);
    if (iVar2 == 0) break;
    iVar2 = FUN_00416db0(local_38,&DAT_01c83ae8);
  } while (iVar2 != 0);
  FUN_00410f20(local_20);
  if (*(int *)PTR_DAT_02003c30 != 0) {
    local_30 = (longlong *)FUN_007814f0(L"Slate Classico");
    if (local_30 == (longlong *)0x0) {
      FUN_00416ba0(&local_a0,*(undefined8 *)PTR_DAT_020049a0,L"\\SlateClassico.vsf");
      cVar1 = FUN_00440a20(local_a0,1);
      if (cVar1 == '\0') {
        uVar3 = FUN_00781e60(&DAT_0075cd78,PTR_IMAGE_DOS_HEADER_0200c280,L"SLATECLASSICO",
                             L"VCLSTYLE");
        FUN_00782af0(&DAT_0075cd78,uVar3);
      }
      else {
        FUN_00416ba0(&local_a8,*(undefined8 *)PTR_DAT_020049a0,L"\\SlateClassico.vsf");
        uVar3 = FUN_00781ce0(&DAT_0075cd78,local_a8);
        FUN_00782af0(&DAT_0075cd78,uVar3);
      }
    }
    else {
      (**(code **)(*local_30 + 0xa0))(local_30,&local_b0);
      local_50 = local_b0;
      plVar4 = (longlong *)FUN_00781840();
      (**(code **)(*plVar4 + 0xa0))(plVar4,&local_b8);
      local_58 = local_b8;
      if (local_50 == local_b8) {
        local_59 = true;
      }
      else if ((local_50 == 0) || (local_b8 == 0)) {
        local_59 = false;
      }
      else {
        iVar2 = FUN_0043e420(local_50,local_b8);
        local_59 = iVar2 == 0;
      }
      local_21 = local_59 == false;
      (**(code **)(*local_30 + 0xa0))(local_30,&local_c0);
      FUN_00782d70(&DAT_0075cd78,local_c0,0);
    }
  }
  FUN_00414560(&local_c0,10);
  FUN_00414560(&local_40,2);
  FUN_00414480(local_res8);
  return local_21;
}

