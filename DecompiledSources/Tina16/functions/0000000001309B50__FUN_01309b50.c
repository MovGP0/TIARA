/* Ghidra address: 01309b50 */
/* Ghidra symbol: FUN_01309b50 */


longlong FUN_01309b50(longlong param_1,char param_2,longlong param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6,longlong param_7,undefined1 param_8,
                     undefined8 param_9)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong local_res8;
  undefined8 local_res20;
  undefined1 auStack_e8 [32];
  undefined *local_c8;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 *local_50;
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  longlong *local_28;
  longlong *local_20 [2];
  
  local_50 = auStack_e8;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_80 = 0;
  local_88 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_58 = 0;
  local_60 = 0;
  local_20[0] = (longlong *)0x0;
  local_28 = (longlong *)0x0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_res20 = param_4;
  FUN_00414610(param_4);
  FUN_00414610(param_5);
  FUN_00414610(param_6);
  FUN_00414610(param_7);
  FUN_00414610(param_9);
  local_res8 = param_1;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
  }
  *(longlong *)(local_res8 + 8) = param_3;
  *(undefined1 *)(local_res8 + 0x10) = param_8;
  if (param_3 == 0) {
    FUN_00414ad0(local_res8 + 0x28,param_9);
  }
  else {
    FUN_00414ad0(local_res8 + 0x28,*(undefined8 *)(*(longlong *)(param_3 + 0xa0) + 0x360));
  }
  FUN_00414b50(&local_40,param_6);
  iVar3 = FUN_004170c0(&DAT_0130a2dc,local_40,1);
  if (0 < iVar3) {
    iVar3 = FUN_004170c0(&DAT_0130a2dc,local_40,1);
    FUN_00416dc0(&local_60,local_40,1,iVar3 + -1);
    FUN_0043ea00(&local_58,local_60);
    FUN_00414b50(&local_40,local_58);
  }
  FUN_00bac3d0(local_20);
  cVar1 = (**(code **)(*local_20[0] + 0x170))(local_20[0],param_5);
  if (cVar1 != '\0') {
    (**(code **)(*local_20[0] + 0x100))(local_20[0],&local_68);
    if (local_68 != 0) {
      (**(code **)(*local_20[0] + 0x100))(local_20[0],&local_28);
      local_c8 = &DAT_0130a324;
      FUN_00416cd0(&local_70,3,L"/testbench/testcase[",local_40);
      (**(code **)(*local_28 + 0xd8))(local_28,&local_30,local_70);
      FUN_0041b890(&local_78,local_30,&DAT_0130a328);
      uVar4 = FUN_012f2450(local_78);
      *(undefined8 *)(local_res8 + 0x20) = uVar4;
      (**(code **)(*local_28 + 0x100))(local_28,&local_88,L"rootFolder");
      FUN_0044f8b0(&local_80,local_88);
      FUN_00414ad0(local_res8 + 0x38,local_80);
      (**(code **)(*local_28 + 0x100))(local_28,&local_90,L"resultFolder");
      FUN_0044f8b0(&local_38,local_90);
      if (local_38 == 0) {
        FUN_00414ad0(local_res8 + 0x40,*(undefined8 *)(local_res8 + 0x38));
      }
      else {
        FUN_00414ad0(local_res8 + 0x40,local_38);
      }
      (**(code **)(*local_28 + 0x100))(local_28,&local_98,L"filterGood");
      uVar2 = FUN_0043fed0(local_98,1);
      *(undefined1 *)(local_res8 + 0x58) = uVar2;
      (**(code **)(*local_28 + 0x100))(local_28,&local_a0,L"saveTest");
      uVar2 = FUN_0043fed0(local_a0,0);
      *(undefined1 *)(local_res8 + 0x59) = uVar2;
      (**(code **)(*local_28 + 0x100))(local_28,&local_a8,L"saveAsImage");
      uVar2 = FUN_0043fed0(local_a8,0);
      *(undefined1 *)(local_res8 + 0x5a) = uVar2;
      (**(code **)(*local_28 + 0x100))(local_28,&local_b0,L"saveAsText");
      uVar2 = FUN_0043fed0(local_b0,0);
      *(undefined1 *)(local_res8 + 0x5b) = uVar2;
      if (param_7 == 0) {
        FUN_00414ad0(local_res8 + 0x48,*(undefined8 *)(local_res8 + 0x40));
      }
      else {
        FUN_0044f8b0(&local_b8,param_7);
        FUN_00414ad0(local_res8 + 0x48,local_b8);
      }
    }
  }
  FUN_00414ad0(local_res8 + 0x30,local_res20);
  FUN_00414ad0(local_res8 + 0x50,param_6);
  uVar4 = FUN_00418560(0x40,&DAT_01307478);
  *(undefined8 *)(local_res8 + 0x18) = uVar4;
  FUN_0040d200(uVar4,0x40,0);
  uVar4 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *(undefined8 *)(local_res8 + 0x60) = uVar4;
  FUN_00414560(&local_b8,8);
  FUN_0041b800(&local_78);
  FUN_00414480(&local_70);
  FUN_0041b800(&local_68);
  FUN_00414560(&local_60,2);
  FUN_00414560(&local_40,2);
  FUN_0041b800(&local_30);
  FUN_0041b800(&local_28);
  FUN_0041b800(local_20);
  FUN_00414560(&local_res20,4);
  FUN_00414480(&param_9);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

