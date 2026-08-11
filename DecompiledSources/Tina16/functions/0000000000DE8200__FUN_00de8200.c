/* Ghidra address: 00de8200 */
/* Ghidra symbol: FUN_00de8200 */


undefined8 *
FUN_00de8200(undefined8 *param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
            undefined8 param_5,char param_6,int param_7)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_res10;
  longlong local_res18;
  undefined8 local_res20;
  undefined1 auStack_e8 [32];
  wchar_t *local_c8;
  undefined8 local_c0;
  undefined *local_b8;
  undefined8 local_a8;
  undefined8 local_a0;
  wchar_t *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 *local_50;
  undefined8 local_40;
  int local_38;
  int local_34;
  longlong local_30;
  undefined8 local_28;
  longlong local_20;
  
  local_50 = auStack_e8;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = (wchar_t *)0x0;
  local_90 = 0;
  local_88 = 0;
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
  FUN_00414610(param_5);
  FUN_0043e130(&local_58,local_res10);
  local_c8 = (wchar_t *)0xa;
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
      local_c8 = L"\" is not in Resource of \"";
      local_c0 = local_res10;
      local_b8 = &DAT_00de8808;
      FUN_00416cd0(&local_70,5,&DAT_00de8808,local_res18);
      uVar3 = FUN_0044d490(&PTR_FUN_00de74c8,1,local_70);
      FUN_004134c0(uVar3);
    }
  }
  local_34 = 0;
  FUN_0043e1a0(&local_78,local_res20);
  FUN_00416ba0(&local_40,local_78,L".strings");
  while( true ) {
    iVar2 = FUN_00de5bb0(*(undefined8 *)(local_30 + 0x10));
    if (iVar2 <= local_34) break;
    lVar4 = FUN_00de5bc0(*(undefined8 *)(local_30 + 0x10),local_34);
    FUN_0043e1a0(&local_80,*(undefined8 *)(lVar4 + 8));
    iVar2 = FUN_00416db0(local_80,local_40);
    if (iVar2 == 0) break;
    local_34 = local_34 + 1;
  }
  iVar2 = FUN_00de5bb0(*(undefined8 *)(local_30 + 0x10));
  if (local_34 == iVar2) {
    FUN_00416ba0(&local_88,L"Not found : ",local_40);
    uVar3 = FUN_0044d490(&PTR_FUN_00de74c8,1,local_88);
    FUN_004134c0(uVar3);
  }
  local_34 = local_34 + 1;
  local_38 = 0;
  while( true ) {
    iVar2 = FUN_00de5bb0(*(undefined8 *)(local_30 + 0x10));
    if (iVar2 <= local_34) break;
    lVar4 = FUN_00de5bc0(*(undefined8 *)(local_30 + 0x10),local_34);
    FUN_0043e1a0(&local_a8,*(undefined8 *)(lVar4 + 8));
    iVar2 = FUN_00416db0(local_a8,local_40);
    if (iVar2 != 0) break;
    plVar5 = (longlong *)FUN_00de5bc0(*(undefined8 *)(local_30 + 0x10),local_34);
    (**(code **)(*plVar5 + 8))(plVar5,&local_90);
    FUN_00416ad0(param_1,local_90);
    if (param_6 != '\0') {
      FUN_0043f750(&local_98,local_38 + param_7);
      local_c8 = local_98;
      FUN_00416cd0(param_1,3,*param_1,&DAT_00de88a0);
    }
    local_38 = local_38 + 1;
    local_34 = local_34 + 1;
    iVar2 = FUN_00de5bb0(*(undefined8 *)(local_30 + 0x10));
    if (local_34 < iVar2) {
      lVar4 = FUN_00de5bc0(*(undefined8 *)(local_30 + 0x10),local_34);
      FUN_0043e1a0(&local_a0,*(undefined8 *)(lVar4 + 8));
      iVar2 = FUN_00416db0(local_a0,local_40);
      if (iVar2 == 0) {
        FUN_00416ad0(param_1,param_5);
      }
    }
  }
  FUN_00410f20(local_20);
  FUN_00410f20(local_28);
  FUN_00414560(&local_a8,0xb);
  FUN_00414480(&local_40);
  FUN_00414560(&local_res10,4);
  return param_1;
}

