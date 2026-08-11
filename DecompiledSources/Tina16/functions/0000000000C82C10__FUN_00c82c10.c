/* Ghidra address: 00c82c10 */
/* Ghidra symbol: FUN_00c82c10 */


void FUN_00c82c10(longlong param_1,char param_2,wchar_t *param_3)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  wchar_t *local_res18 [2];
  undefined1 auStack_b8 [32];
  wchar_t *local_98;
  wchar_t *local_90;
  char local_79;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  int local_34;
  longlong *local_30;
  undefined4 local_24;
  undefined8 local_20;
  
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_20 = 0;
  local_res18[0] = param_3;
  local_79 = param_2;
  FUN_00414610(param_3);
  FUN_00bac3d0(&local_40);
  FUN_0041b840(param_1 + 0x38,local_40);
  local_30 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  plVar3 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  if (local_79 == '\0') {
    FUN_01b1edb0(local_30);
    local_98 = L"COMPREGY";
    local_90 = L".xml";
    FUN_00416cd0(&local_48,4,*(undefined8 *)PTR_DAT_020049a0,&DAT_00c82fc0);
    cVar1 = FUN_00440a20(local_48,1);
    if (cVar1 != '\0') {
      local_98 = L"COMPREGY";
      local_90 = L".xml";
      FUN_00416cd0(&local_50,4,*(undefined8 *)PTR_DAT_020049a0,&DAT_00c82fc0);
      FUN_00c821a0(auStack_b8,local_50,*(undefined8 *)(param_1 + 0x38));
    }
  }
  else {
    local_98 = local_res18[0];
    local_90 = L".tcr";
    FUN_00416cd0(&local_58,4,*(undefined8 *)PTR_DAT_020049a0,&DAT_00c82fc0);
    cVar1 = FUN_00440a20(local_58,1);
    if (cVar1 != '\0') {
      local_98 = local_res18[0];
      local_90 = L".tcr";
      FUN_00416cd0(&local_60,4,*(undefined8 *)PTR_DAT_020049a0,&DAT_00c82fc0);
      (**(code **)(*local_30 + 0x78))(local_30,local_60);
    }
    local_98 = local_res18[0];
    local_90 = L".xml";
    FUN_00416cd0(&local_68,4,*(undefined8 *)PTR_DAT_020049a0,&DAT_00c82fc0);
    cVar1 = FUN_00440a20(local_68,1);
    if (cVar1 != '\0') {
      local_98 = local_res18[0];
      local_90 = L".xml";
      FUN_00416cd0(&local_70,4,*(undefined8 *)PTR_DAT_020049a0,&DAT_00c82fc0);
      FUN_00c821a0(auStack_b8,local_70,*(undefined8 *)(param_1 + 0x38));
    }
  }
  local_34 = 0;
  while( true ) {
    iVar2 = (**(code **)(*local_30 + 0x28))(local_30);
    if (iVar2 <= local_34) break;
    (**(code **)(*local_30 + 0x18))(local_30,&local_78,local_34);
    (**(code **)(*plVar3 + 0xd8))(plVar3,local_78);
    local_24 = 0;
    FUN_00c82720(auStack_b8,plVar3,0);
    local_34 = local_34 + 1;
  }
  FUN_00410f20(plVar3);
  FUN_00410f20(local_30);
  FUN_00414560(&local_78,7);
  FUN_0041b800(&local_40);
  FUN_00414480(&local_20);
  FUN_00414480(local_res18);
  return;
}

