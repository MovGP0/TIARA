/* Ghidra address: 00984560 */
/* Ghidra symbol: FUN_00984560 */


void FUN_00984560(longlong *param_1,longlong *param_2,char param_3,undefined1 param_4)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined4 local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  undefined8 local_90;
  longlong local_88;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 *local_60;
  undefined1 local_51;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_60 = auStack_e8;
  local_70 = 0;
  local_68 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  puVar1 = auStack_e8;
  if (param_2 == (longlong *)0x0) {
    uVar4 = FUN_0044d490(&PTR_FUN_004361b8,1,L"Document type declaration not specified.");
    FUN_004134c0(uVar4);
    puVar1 = local_60;
  }
  local_60 = puVar1;
  if (param_1[0xf] == 0) {
    uVar4 = FUN_0044d490(&PTR_FUN_004361b8,1,L"DOM implementation not specified.");
    FUN_004134c0(uVar4);
  }
  lVar5 = (**(code **)(*param_1 + 0xa0))(param_1);
  if (lVar5 == 0) {
    uVar4 = FUN_0044d490(&PTR_FUN_004361b8,1,L"Target DTD model not specified.");
    FUN_004134c0(uVar4);
  }
  lVar5 = (**(code **)(*param_2 + 0x188))(param_2);
  if (lVar5 == 0) {
    uVar4 = FUN_0044d490(&PTR_FUN_009018b0,1,L"Wrong DOM implementation error.");
    FUN_004134c0(uVar4);
  }
  else {
    lVar5 = (**(code **)(*param_2 + 0x188))(param_2);
    if (*(longlong *)(lVar5 + 0xa0) != param_1[0xf]) {
      uVar4 = FUN_0044d490(&PTR_FUN_009018b0,1,L"Wrong DOM implementation error.");
      FUN_004134c0(uVar4);
    }
    lVar5 = (**(code **)(*param_2 + 0x188))(param_2);
    FUN_00414be0(&local_38,*(undefined8 *)(lVar5 + 0x98));
  }
  (**(code **)(*param_1 + 0xd8))(param_1);
  lVar5 = (**(code **)(*param_2 + 0x118))(param_2);
  if (lVar5 == 0) {
    local_51 = 2;
  }
  else {
    lVar5 = (**(code **)(*param_2 + 0x118))(param_2);
    local_51 = *(undefined1 *)(lVar5 + 200);
  }
  (**(code **)(*param_2 + 0x2b8))(param_2,&local_68);
  iVar3 = FUN_00416420(local_68,0);
  if (iVar3 == 0) {
    plVar6 = (longlong *)(**(code **)(*param_1 + 0xa0))(param_1);
    (**(code **)(*plVar6 + 8))(plVar6,7);
  }
  else {
    (**(code **)(*param_2 + 0x2b8))(param_2,&local_70);
    local_c8 = local_38;
    local_c0 = (undefined4)param_1[0x11];
    local_b8 = param_2[0x13];
    local_b0 = param_2[0x12];
    local_a8 = param_2[0x11];
    local_a0 = 0;
    local_98 = param_2[0x14];
    local_20 = FUN_00960220(&PTR_FUN_00914aa8,1,local_70,0);
    (**(code **)(*param_1 + 0xd0))(param_1,local_20,local_51,param_3);
    FUN_00410f20(local_20);
  }
  lVar5 = (**(code **)(*param_1 + 0xa0))(param_1);
  if (*(byte *)(lVar5 + 0x21) < 8) {
    bVar7 = ((int)CONCAT71((int7)((ulonglong)lVar5 >> 8),1) << (*(byte *)(lVar5 + 0x21) & 0x1f) &
            0xa0U) != 0;
  }
  else {
    bVar7 = false;
  }
  if (bVar7) {
    (**(code **)(*param_2 + 0x2c8))(param_2,&local_40);
    (**(code **)(*param_2 + 0x2d0))(param_2,&local_48);
    iVar3 = FUN_00416420(local_40,0);
    if (iVar3 == 0) {
      iVar3 = FUN_00416420(local_48,0);
      if (iVar3 == 0) {
        lVar5 = (**(code **)(*param_1 + 0xa0))(param_1);
        if (*(char *)(lVar5 + 0x21) == '\x05') {
          plVar6 = (longlong *)(**(code **)(*param_1 + 0xa0))(param_1);
          (**(code **)(*plVar6 + 8))(plVar6,6);
        }
        goto code_r0x00984bea;
      }
    }
    if (param_3 == '\0') {
      lVar5 = (**(code **)(*param_1 + 0xa0))(param_1);
      if (*(char *)(lVar5 + 0x21) == '\x05') {
        plVar6 = (longlong *)(**(code **)(*param_1 + 0xa0))(param_1);
        (**(code **)(*plVar6 + 8))(plVar6,2);
      }
    }
    else {
      cVar2 = FUN_008fa620(local_48);
      if (cVar2 == '\0') {
        (**(code **)(*param_1 + 0xa8))(param_1,7);
      }
      else {
        iVar3 = FUN_00417170(&LAB_00984e14,local_48,1);
        if (0 < iVar3) {
          (**(code **)(*param_1 + 0xa8))(param_1,6);
        }
      }
      local_30 = (**(code **)(*(longlong *)param_1[0xf] + 0xf8))
                           ((longlong *)param_1[0xf],local_38,&local_40,&local_48);
      if (local_30 == 0) {
        (**(code **)(*param_1 + 0xa8))(param_1,0x2e);
        plVar6 = (longlong *)(**(code **)(*param_1 + 0xa0))(param_1);
        (**(code **)(*plVar6 + 8))(plVar6,4);
      }
      else {
        FUN_008fdec0(local_38,local_48,&local_50);
        local_c8 = local_50;
        local_c0 = (undefined4)param_1[0x11];
        local_b8 = 0;
        local_b0 = CONCAT71(local_b0._1_7_,param_4);
        local_a8 = param_2[0x13];
        local_a0 = param_2[0x12];
        local_98 = param_2[0x11];
        local_90 = 0;
        local_88 = param_2[0x14];
        local_28 = FUN_00960500(&PTR_FUN_00915170,1,local_30,local_40);
        (**(code **)(*param_1 + 200))(param_1,local_28);
        FUN_00410f20(local_28);
        FUN_00410f20(local_30);
      }
    }
  }
code_r0x00984bea:
  FUN_004145c0(&local_70,2);
  FUN_004145c0(&local_50,4);
  return;
}

