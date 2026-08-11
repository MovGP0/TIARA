/* Ghidra address: 00de7660 */
/* Ghidra symbol: FUN_00de7660 */


undefined8 FUN_00de7660(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong local_res10;
  longlong local_res18;
  undefined8 local_res20;
  undefined1 auStack_d8 [32];
  wchar_t *local_b8;
  longlong local_b0;
  wchar_t *local_a8;
  longlong local_a0;
  undefined *local_98;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 *local_50;
  undefined8 local_40;
  int local_34;
  longlong local_30;
  undefined8 local_28;
  longlong local_20;
  
  local_50 = auStack_d8;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_40 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  FUN_00414610(local_res20);
  FUN_0043e130(&local_58,local_res10);
  local_b8 = (wchar_t *)0xa;
  local_28 = FUN_004baae0(&PTR_FUN_0047d7f8,1,PTR_IMAGE_DOS_HEADER_0200c280,local_58);
  local_20 = FUN_00410e60(&PTR_FUN_00de4c40,1);
  FUN_004b6dc0(local_28,0);
  FUN_00de7240(local_20,local_28);
  if (local_res18 == 0) {
    local_30 = *(longlong *)(local_20 + 8);
  }
  else {
    FUN_0043e1a0(&local_68,local_res18);
    cVar1 = FUN_00de7540(*(undefined8 *)(local_20 + 8),local_68,&local_30);
    if (cVar1 == '\0') {
      local_b8 = L"\" is not in Resource of \"";
      local_b0 = local_res10;
      local_a8 = L"\"";
      FUN_00416cd0(&local_70,5,&DAT_00de7af8,local_res18);
      uVar3 = FUN_0044d490(&PTR_FUN_00de74c8,1,local_70);
      FUN_004134c0(uVar3);
    }
  }
  local_34 = 0;
  FUN_0043e1a0(&local_40,local_res20);
  while( true ) {
    iVar2 = FUN_00de5bb0(*(undefined8 *)(local_30 + 0x10));
    if (iVar2 <= local_34) break;
    lVar4 = FUN_00de5bc0(*(undefined8 *)(local_30 + 0x10),local_34);
    FUN_0043e1a0(&local_78,*(undefined8 *)(lVar4 + 8));
    iVar2 = FUN_00416db0(local_78,local_40);
    if (iVar2 == 0) break;
    local_34 = local_34 + 1;
  }
  iVar2 = FUN_00de5bb0(*(undefined8 *)(local_30 + 0x10));
  if (local_34 < iVar2) {
    plVar5 = (longlong *)FUN_00de5bc0(*(undefined8 *)(local_30 + 0x10),local_34);
    (**(code **)(*plVar5 + 8))(plVar5,param_1);
  }
  else {
    local_b8 = L"\" property is not in the \"";
    local_b0 = local_res18;
    local_a8 = L"\"\'s resource of \"";
    local_a0 = local_res10;
    local_98 = &DAT_00de7af8;
    FUN_00416cd0(&local_80,7,&DAT_00de7af8,local_40);
    uVar3 = FUN_0044d490(&PTR_FUN_00de74c8,1,local_80);
    FUN_004134c0(uVar3);
  }
  FUN_00410f20(local_20);
  FUN_00410f20(local_28);
  FUN_00414560(&local_80,6);
  FUN_00414480(&local_40);
  FUN_00414560(&local_res10,3);
  return param_1;
}

