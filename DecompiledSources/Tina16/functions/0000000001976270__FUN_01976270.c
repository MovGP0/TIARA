/* Ghidra address: 01976270 */
/* Ghidra symbol: FUN_01976270 */


undefined1 FUN_01976270(longlong *param_1,char param_2)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_b8 [32];
  ulonglong local_98;
  ulonglong local_88;
  undefined8 local_80;
  longlong local_78;
  undefined1 *local_70;
  char local_59;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  longlong local_40;
  undefined1 local_36;
  undefined1 local_35;
  undefined4 local_34;
  undefined8 local_28 [3];
  
  local_70 = auStack_b8;
  local_80 = 0;
  local_88 = 0;
  local_78 = 0;
  local_48 = 0;
  local_50 = 0;
  local_28[0] = 0;
  local_58 = 0;
  cVar1 = FUN_01977c80(param_1);
  if (cVar1 == '\0') {
    *(undefined1 *)(param_1 + 0x58) = 1;
    if (param_2 != '\0') {
      plVar3 = (longlong *)FUN_0196f540(param_1);
      (**(code **)(*plVar3 + 0x28))(plVar3);
    }
    plVar3 = (longlong *)param_1[0x42];
    if (plVar3 != (longlong *)0x0) {
      uVar4 = FUN_0196f540(param_1);
      (**(code **)(*plVar3 + 0x288))(plVar3,param_1,uVar4);
    }
    local_34 = 0;
    (**(code **)(*(longlong *)param_1[0x36] + 0x90))((longlong *)param_1[0x36]);
    *(undefined1 *)(param_1 + 0x51) = 0;
    local_36 = 0;
    local_59 = '\0';
    cVar1 = FUN_019760c0(auStack_b8);
    if (cVar1 != '\0') {
      local_40 = 0;
      FUN_00414b50(local_28,*(undefined8 *)(param_1[0x48] + 0x48));
      lVar2 = param_1[0x35];
      if (*(char *)(lVar2 + 9) != '\0') {
        if (*(char *)(lVar2 + 0x30) == '\0') {
          local_40 = FUN_00410e60(&PTR_FUN_0047cbc0,1);
        }
        else {
          FUN_0180fd00(&local_58,*(undefined8 *)(lVar2 + 0x28));
          local_40 = FUN_004b9860(&PTR_FUN_0047c498,1,local_58,0xff00);
        }
        FUN_00414480(param_1[0x48] + 0x48);
        local_34 = *(undefined4 *)(param_1[0x45] + 0x44);
        local_98 = local_98 & 0xffffffffffffff00;
        (**(code **)(*param_1 + 0x1c8))(param_1,local_40,1,0);
      }
      if (param_1[99] != 0) {
        (*(code *)param_1[99])(param_1[100],param_1);
      }
      cVar1 = FUN_01974ec0(param_1,0);
      if (cVar1 != '\0') {
        if ((char)param_1[0x51] == '\0') {
          local_59 = (**(code **)(*(longlong *)param_1[0x34] + 0xb8))
                               ((longlong *)param_1[0x34],1,0,0);
        }
        if (local_59 == '\0') {
          if (param_1[0x43] != 0) {
            FUN_00805200(param_1[0x43]);
          }
        }
        else {
          if (param_1[0x6b] != 0) {
            (*(code *)param_1[0x6b])(param_1[0x6c],param_1);
          }
          local_36 = 1;
        }
      }
      if (local_40 != 0) {
        (**(code **)(*(longlong *)param_1[0x36] + 0x38))((longlong *)param_1[0x36],&local_48);
        FUN_004b6dc0(local_40,0);
        *(undefined1 *)(param_1 + 0x47) = 1;
        local_35 = *(undefined1 *)(param_1[0x45] + 0x40);
        *(undefined1 *)(param_1 + 0x58) = 0;
        (**(code **)(*param_1 + 0x1c0))(param_1,local_40);
        *(undefined1 *)(param_1 + 0x47) = 0;
        *(undefined1 *)(param_1 + 0x58) = 1;
        FUN_00414ad0(param_1[0x48] + 0x48,local_28[0]);
        lVar2 = param_1[0x45];
        *(undefined4 *)(lVar2 + 0x44) = local_34;
        *(undefined1 *)(lVar2 + 0x40) = local_35;
        FUN_0196f440(param_1);
        FUN_00410f20(local_40);
        if (*(char *)(param_1[0x35] + 0x30) != '\0') {
          FUN_004412f0(local_58);
        }
        (**(code **)(*(longlong *)param_1[0x36] + 0x60))((longlong *)param_1[0x36],local_48);
      }
    }
    (**(code **)(*(longlong *)param_1[0x36] + 0x38))((longlong *)param_1[0x36],&local_78);
    if (local_78 != 0) {
      local_36 = 0;
      uVar4 = FUN_0180bfb0();
      FUN_01809b60(uVar4,&local_80,L"clErrors");
      (**(code **)(*(longlong *)param_1[0x36] + 0x38))((longlong *)param_1[0x36],&local_88);
      local_98 = local_88;
      FUN_00416cd0(&local_50,3,local_80,&LAB_019768e8);
      FUN_0180dc30(param_1,local_50);
    }
    *(undefined1 *)(param_1 + 0x58) = 0;
    FUN_0196f460(param_1);
  }
  else {
    lVar2 = FUN_019810d0(&PTR_FUN_0193ee18,1,param_1,param_2);
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = lVar2 + 0x10;
    }
    FUN_01980800(param_1[0x57],lVar2);
    local_36 = 0;
  }
  FUN_00414560(&local_88,3);
  FUN_00414560(&local_58,3);
  FUN_00414480(local_28);
  return local_36;
}

