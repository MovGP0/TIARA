/* Ghidra address: 014cc480 */
/* Ghidra symbol: FUN_014cc480 */


void FUN_014cc480(longlong param_1,undefined8 param_2,longlong *param_3,longlong param_4)

{
  longlong *plVar1;
  char cVar2;
  short sVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_2d8 [32];
  int *local_2b8;
  wchar_t *local_2b0;
  undefined *local_2a8;
  undefined *local_2a0;
  undefined8 local_298;
  longlong *local_280;
  longlong local_278;
  longlong local_270;
  longlong *local_268;
  longlong *local_260;
  wchar_t *local_258;
  undefined8 local_250;
  wchar_t *local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  int *local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined *local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined *local_1e8;
  undefined8 local_1e0;
  int *local_1d8;
  undefined8 local_1d0;
  int *local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined *local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined *local_198;
  undefined8 local_190;
  undefined1 local_188 [264];
  undefined8 local_80;
  undefined8 local_78;
  undefined *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined *local_50;
  undefined8 local_48;
  int *local_40;
  int local_38;
  int local_34;
  longlong local_30 [2];
  
  local_250 = 0;
  local_258 = (wchar_t *)0x0;
  local_240 = 0;
  local_248 = (wchar_t *)0x0;
  local_238 = 0;
  local_230 = 0;
  local_220 = 0;
  local_228 = 0;
  local_210 = 0;
  local_218 = (int *)0x0;
  local_1f8 = 0;
  local_200 = (undefined *)0x0;
  local_208 = 0;
  local_1e0 = 0;
  local_1e8 = (undefined *)0x0;
  local_1f0 = 0;
  local_1d0 = 0;
  local_1d8 = (int *)0x0;
  local_1c0 = 0;
  local_1c8 = (int *)0x0;
  local_1a8 = 0;
  local_1b0 = (undefined *)0x0;
  local_1b8 = 0;
  local_190 = 0;
  local_198 = (undefined *)0x0;
  local_1a0 = 0;
  local_40 = (int *)0x0;
  local_48 = 0;
  local_50 = (undefined *)0x0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_70 = (undefined *)0x0;
  local_78 = 0;
  local_80 = 0;
  local_268 = *(longlong **)(param_4 + 8);
  plVar1 = *(longlong **)(*(longlong *)(param_4 + 0x88) + 0x10);
  uVar4 = *(undefined4 *)(param_4 + 0x14);
  local_280 = param_3;
  local_278 = param_4;
  local_270 = param_1;
  local_260 = plVar1;
  FUN_01d03160(plVar1);
  FUN_00414ad0(local_268 + 0x13,local_260[0x13]);
  if (((undefined **)*local_280 == &PTR_FUN_014db5f8) || ((undefined1 *)*local_280 == &LAB_014db6c8)
     ) {
    (**(code **)(*local_260 + 0x240))(local_260,local_188,uVar4);
    FUN_004169a0(&local_40,local_188);
    sVar3 = (**(code **)(*local_268 + 0xf8))(local_268);
    if (sVar3 == 0x40b) {
      FUN_01b20020(&local_190,plVar1,&DAT_014cd160);
      FUN_00416ba0(&local_1a0,local_40,L"_ATOD");
      FUN_014cc240(auStack_2d8,&local_198,local_1a0);
      local_2b8 = local_40;
      local_2b0 = L"_ATOD";
      local_2a8 = local_198;
      FUN_00416cd0(local_268 + 0x13,5,local_190,&DAT_014cd170);
    }
    else {
      FUN_01b20020(&local_1a8,plVar1,&DAT_014cd160);
      FUN_00416ba0(&local_1b8,local_40,L"_DTOA");
      FUN_014cc240(auStack_2d8,&local_1b0,local_1b8);
      local_2b8 = local_40;
      local_2b0 = L"_DTOA";
      local_2a8 = local_1b0;
      FUN_00416cd0(local_268 + 0x13,5,local_1a8,&DAT_014cd170);
    }
    if (*(longlong *)PTR_DAT_020023c0 != 0) {
      (**(code **)(*local_260 + 0x288))(local_260,&local_1c8);
      local_2b8 = local_1c8;
      FUN_00416cd0(&local_1c0,3,local_40,&DAT_014cd1b0);
      FUN_01530e60(*(undefined8 *)PTR_DAT_020023c0,local_1c0,local_268);
    }
    if ((undefined1 *)*local_280 == &LAB_014db6c8) {
      (**(code **)(*local_260 + 0x288))(local_260,&local_1d8);
      local_2b8 = local_1d8;
      FUN_00416cd0(&local_1d0,3,local_40,&DAT_014cd1b0);
      FUN_014e5500(local_280,local_1d0,local_268);
    }
    goto LAB_014cd0cd;
  }
  lVar5 = FUN_017ff620(local_260);
  if (lVar5 != 0) {
    lVar5 = FUN_017ff620(local_260);
    cVar2 = FUN_01d04d40(lVar5);
    if ((cVar2 != '\0') && (*(char *)(lVar5 + 0x1a0) == '\x02')) {
      (**(code **)(*local_260 + 0x240))(local_260,local_188,uVar4);
      FUN_004169a0(&local_40,local_188);
      sVar3 = (**(code **)(*local_268 + 0xf8))(local_268);
      if (sVar3 == 0x40b) {
        FUN_01b20020(&local_1e0,plVar1,&DAT_014cd160);
        FUN_00416ba0(&local_1f0,local_40,L"_ATOD");
        FUN_014cc240(auStack_2d8,&local_1e8,local_1f0);
        local_2b8 = local_40;
        local_2b0 = L"_ATOD";
        local_2a8 = local_1e8;
        FUN_00416cd0(local_268 + 0x13,5,local_1e0,&DAT_014cd170);
      }
      else {
        FUN_01b20020(&local_1f8,plVar1,&DAT_014cd160);
        FUN_00416ba0(&local_208,local_40,L"_DTOA");
        FUN_014cc240(auStack_2d8,&local_200,local_208);
        local_2b8 = local_40;
        local_2b0 = L"_DTOA";
        local_2a8 = local_200;
        FUN_00416cd0(local_268 + 0x13,5,local_1f8,&DAT_014cd170);
      }
      (**(code **)(*local_260 + 0x288))(local_260,&local_218);
      local_2b8 = local_218;
      FUN_00416cd0(&local_210,3,local_40,&DAT_014cd1b0);
      FUN_01770630(*(undefined8 *)(lVar5 + 0x1a8),local_210,local_268);
      goto LAB_014cd0cd;
    }
  }
  lVar5 = FUN_017ff620(local_260);
  if (lVar5 != 0) {
    plVar6 = (longlong *)FUN_017ff620(local_260);
    if (*(longlong *)(local_278 + 0x90) != 0) {
      sVar3 = (**(code **)(*plVar6 + 0xf8))(plVar6);
      if (sVar3 == 0x39) {
        cVar2 = FUN_01d04d40(plVar6);
        if ((cVar2 != '\0') && ((char)plVar6[0x34] == '\x04')) {
          (**(code **)(**(longlong **)(local_278 + 0x90) + 0x288))
                    (*(longlong **)(local_278 + 0x90),&local_220);
          FUN_0043f750(&local_228,*(undefined4 *)(local_278 + 0x84));
          local_2b8 = (int *)local_228;
          FUN_00416cd0(&local_40,3,local_220,&DAT_014cd1c0);
          (**(code **)(*local_260 + 0x288))(local_260,&local_68);
          lVar5 = FUN_017ff620(*(undefined8 *)(local_278 + 0x90));
          if (lVar5 == 0) {
LAB_014ccc2f:
            FUN_00414b50(&local_50,L"FALSE");
            uVar4 = FUN_014cc350(auStack_2d8,plVar6,*(undefined8 *)(local_278 + 0x90),
                                 *(undefined4 *)(local_278 + 0x84));
            FUN_0043f750(&local_58,uVar4);
            FUN_00414b50(&local_60,L"NONE");
          }
          else {
            cVar2 = FUN_01d04d40(lVar5);
            if ((cVar2 == '\0') || (*(char *)(lVar5 + 0x1a0) != '\x04')) goto LAB_014ccc2f;
            FUN_00414b50(&local_50,L"TRUE");
            FUN_0043f750(&local_58,*(undefined4 *)(local_278 + 0x84));
            (**(code **)(**(longlong **)(local_278 + 0x90) + 0x288))
                      (*(longlong **)(local_278 + 0x90),&local_60);
          }
          local_2b8 = (int *)local_58;
          local_2b0 = L",";
          local_2a8 = local_50;
          local_2a0 = &DAT_014cd218;
          local_298 = local_68;
          FUN_00416cd0(&local_48,7,local_60,&DAT_014cd218);
          sVar3 = (**(code **)(*local_268 + 0xf8))(local_268);
          if (sVar3 == 0x40b) {
            FUN_01b20020(&local_230,plVar1,&DAT_014cd160);
            local_2b8 = local_40;
            local_2b0 = L"_ATOD";
            FUN_00416cd0(local_268 + 0x13,4,local_230,&DAT_014cd170);
          }
          else {
            FUN_01b20020(&local_238,plVar1,&DAT_014cd160);
            local_2b8 = local_40;
            local_2b0 = L"_DTOA";
            FUN_00416cd0(local_268 + 0x13,4,local_238,&DAT_014cd170);
          }
          FUN_01778150(plVar6[0x35],local_48,local_268);
          goto LAB_014cd0cd;
        }
      }
    }
  }
  FUN_015755e0(*(undefined8 *)(*(longlong *)(local_270 + 0x12a0) + 0x8d0),
               *(undefined4 *)(local_278 + 0x18),local_30);
  FUN_004ae7e0(*(undefined8 *)(local_30[0] + 0x20),local_268);
  local_2b8 = &local_38;
  FUN_01575150(local_30[0],local_260,uVar4,&local_34);
  if ((local_34 != 0) || (local_38 != 0)) {
    *(int *)((longlong)local_268 + 0xc) = local_34 + -0x18;
    *(int *)(local_268 + 2) = local_38;
    if ((longlong *)local_260[0xa5] != (longlong *)0x0) {
      local_260 = (longlong *)local_260[0xa5];
    }
    lVar5 = FUN_017ff620(local_260);
    if (lVar5 != 0) {
      local_260 = (longlong *)FUN_017ff620(local_260);
      if (local_260 != (longlong *)0x0) {
        cVar2 = FUN_01d04d40(local_260);
        if (((cVar2 != '\0') && ((char)local_260[0x34] == '\x01')) &&
           (*(longlong *)(local_260[0x35] + 8) != 0)) {
          local_280 = *(longlong **)(local_260[0x35] + 8);
        }
      }
    }
    cVar2 = FUN_01d04d40(local_260);
    if (((cVar2 != '\0') && ((char)local_260[0x34] == '\x03')) &&
       (*(int *)(*(longlong *)(local_270 + 0x12a0) + 0x7e8) != 0)) {
      FUN_0156b640(*(undefined8 *)(local_270 + 0x12a0),local_260,uVar4,
                   *(undefined4 *)(local_278 + 0x18));
    }
    if (*(char *)(local_278 + 0x98) == '\0') {
      FUN_00414b50(&local_70,&DAT_014cd23c);
    }
    else {
      FUN_00414b50(&local_70,&DAT_014cd228);
    }
    if (*(char *)(local_278 + 0x99) == '\0') {
      FUN_00414480(&local_78);
    }
    else {
      FUN_00416ba0(&local_78,&DAT_014cd170,*(undefined8 *)PTR_PTR_02002be0);
    }
    sVar3 = (**(code **)(*local_268 + 0xf8))(local_268);
    if (sVar3 == 0x40b) {
      FUN_01b20020(&local_240,plVar1,&DAT_014cd160);
      FUN_014cc3d0(auStack_2d8,&local_248,plVar1,uVar4);
      local_2b8 = (int *)&DAT_014cd170;
      local_2b0 = local_248;
      local_2a8 = &DAT_014cd170;
      local_2a0 = local_70;
      local_298 = local_78;
      FUN_00416cd0(local_268 + 0x13,7,&DAT_014cd250,local_240);
    }
    else {
      FUN_01b20020(&local_250,plVar1,&DAT_014cd160);
      FUN_014cc3d0(auStack_2d8,&local_258,plVar1,uVar4);
      local_2b8 = (int *)&DAT_014cd170;
      local_2b0 = local_258;
      local_2a8 = &DAT_014cd170;
      local_2a0 = local_70;
      local_298 = local_78;
      FUN_00416cd0(local_268 + 0x13,7,&LAB_014cd264,local_250);
    }
    (**(code **)(*local_280 + 0x20))(local_280,local_268);
    FUN_004ae7e0(*(undefined8 *)(local_270 + 0x18),local_268);
  }
LAB_014cd0cd:
  FUN_00414560(&local_258,0x1a);
  FUN_004144d0(&local_80);
  FUN_00414560(&local_78,8);
  return;
}

