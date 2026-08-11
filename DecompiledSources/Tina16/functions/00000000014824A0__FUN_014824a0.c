/* Ghidra address: 014824a0 */
/* Ghidra symbol: FUN_014824a0 */


void FUN_014824a0(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_1b8 [32];
  undefined8 local_198;
  undefined8 local_188;
  undefined8 local_180;
  undefined1 local_178;
  undefined8 local_170;
  undefined1 local_168;
  undefined8 local_160;
  undefined1 local_158;
  undefined8 local_150;
  undefined1 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined1 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined1 *local_100;
  longlong local_f8;
  longlong local_f0;
  longlong local_e8;
  longlong local_e0;
  longlong *local_d8;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  longlong local_b0;
  undefined8 local_a8;
  int local_a0;
  uint local_9c;
  longlong local_98;
  longlong local_90;
  undefined8 local_88;
  longlong local_80;
  undefined8 local_78;
  undefined8 local_70;
  longlong local_68;
  longlong local_60;
  undefined8 local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined8 local_30;
  longlong *local_28;
  longlong *local_20;
  
  local_100 = auStack_1b8;
  local_188 = 0;
  local_140 = 0;
  local_138 = 0;
  local_130 = 0;
  local_118 = 0;
  local_110 = 0;
  local_108 = 0;
  local_88 = 0;
  local_a8 = 0;
  local_c0 = 0;
  local_c8 = 0;
  local_48 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  local_50 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  local_58 = FUN_01486ea0(&PTR_FUN_01485680,1,0);
  uVar3 = FUN_0045ae90();
  (**(code **)(*local_48 + 0xe0))(local_48,param_1,uVar3);
  uVar3 = FUN_0045ae90();
  (**(code **)(*local_50 + 0xe0))(local_50,param_2,uVar3);
  (**(code **)(*local_48 + 0x38))(local_48,&local_108);
  uVar3 = FUN_00f30500(local_108,0,0);
  local_60 = FUN_004113f0(uVar3,&LAB_00f23b78);
  (**(code **)(*local_50 + 0x38))(local_50,&local_110);
  uVar3 = FUN_00f30500(local_110,0,0);
  local_68 = FUN_004113f0(uVar3,&LAB_00f23b78);
  if ((local_60 == 0) || (local_68 == 0)) {
    uVar3 = FUN_0044d490(&PTR_FUN_004334c0,1,&DAT_01483090);
    FUN_004134c0(uVar3);
  }
  local_70 = FUN_014860a0(local_60,L"connections");
  local_78 = FUN_014860a0(local_68,L"connections");
  local_40 = (longlong *)FUN_00f32d30(&DAT_00f238f8,1,local_70);
  while( true ) {
    local_d8 = local_40;
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    local_e0 = local_40[2];
    if (*(int *)(*(longlong *)(local_e0 + 0x10) + 0x10) <= (int)local_40[1]) break;
    local_e8 = *(longlong *)(local_40[2] + 0x10);
    uVar4 = (ulonglong)(int)local_40[1];
    lVar5 = *(longlong *)(local_e8 + 8);
    if ((lVar5 == 0) || (*(ulonglong *)(lVar5 + -8) <= uVar4)) {
      uVar4 = FUN_00410a90();
    }
    local_80 = *(longlong *)(lVar5 + uVar4 * 8);
    (**(code **)(**(longlong **)(local_80 + 0x10) + 0x18))
              (*(longlong **)(local_80 + 0x10),&local_88);
    cVar2 = FUN_01488350(local_78,local_88,&local_b8);
    if (cVar2 == '\0') {
      local_b0 = FUN_004113f0(*(undefined8 *)(local_80 + 0x18),&LAB_00f23b78);
      local_a0 = FUN_014861f0(local_b0,L"classID",local_a0);
      if (local_b0 != 0) {
        cVar2 = FUN_014883d0(local_b0,L"pin_count",&local_9c);
        if (((cVar2 != '\0') && (local_a0 != 5)) && (1 < (int)local_9c)) {
          local_128 = local_88;
          local_120 = 0x11;
          FUN_00442f70(&local_118,L"Original \"%s\" component exists, but missing in second file",
                       &local_128,0);
          (**(code **)(*param_3 + 0x78))(param_3,local_118);
        }
      }
    }
    else {
      local_b0 = FUN_004113f0(*(undefined8 *)(local_80 + 0x18),&LAB_00f23b78);
      local_90 = FUN_014860c0(local_b0,L"comps");
      local_98 = FUN_014860c0(local_b8,L"comps");
      local_30 = FUN_01486ea0(&PTR_FUN_01485680,1,0);
      local_38 = FUN_01486ea0(&PTR_FUN_01485680,1,0);
      iVar6 = *(int *)(*(longlong *)(local_90 + 0x10) + 0x10);
      local_9c = 0;
      if (-1 < iVar6 + -1) {
        do {
          local_f0 = *(longlong *)(local_90 + 0x10);
          if (*(uint *)(local_f0 + 0x10) <= local_9c) {
            FUN_00594f90();
          }
          plVar1 = *(longlong **)(*(longlong *)(local_f0 + 8) + (longlong)(int)local_9c * 8);
          (**(code **)(*plVar1 + 0x18))(plVar1,&local_130);
          FUN_01487760(local_30,local_130,1);
          local_9c = local_9c + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      iVar6 = *(int *)(*(longlong *)(local_98 + 0x10) + 0x10);
      local_9c = 0;
      if (-1 < iVar6 + -1) {
        do {
          local_f8 = *(longlong *)(local_98 + 0x10);
          if (*(uint *)(local_f8 + 0x10) <= local_9c) {
            FUN_00594f90();
          }
          plVar1 = *(longlong **)(*(longlong *)(local_f8 + 8) + (longlong)(int)local_9c * 8);
          (**(code **)(*plVar1 + 0x18))(plVar1,&local_138);
          FUN_01487760(local_38,local_138,1);
          local_9c = local_9c + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      uVar3 = FUN_014879d0(local_30);
      local_20 = (longlong *)FUN_01487b20(uVar3);
      while (cVar2 = thunk_FUN_01487cc3(local_20), cVar2 != '\0') {
        FUN_01487b70(local_20,&local_a8);
        cVar2 = FUN_01487880(local_38,local_a8);
        if (cVar2 == '\0') {
          local_198 = local_a8;
          FUN_00416cd0(&local_c0,3,local_88,&DAT_014831c0);
          local_198 = local_88;
          FUN_00416cd0(&local_c8,3,local_a8,&DAT_014831c0);
          cVar2 = FUN_01487880(local_58,local_c0);
          if (((cVar2 == '\0') && (cVar2 = FUN_01487880(local_58,local_c8), cVar2 == '\0')) &&
             ((cVar2 = FUN_014822e0(auStack_1b8,local_70,local_88), cVar2 != '\0' &&
              (cVar2 = FUN_014822e0(auStack_1b8,local_70,local_a8), cVar2 != '\0')))) {
            local_180 = local_88;
            local_178 = 0x11;
            local_170 = local_a8;
            local_168 = 0x11;
            local_160 = local_88;
            local_158 = 0x11;
            local_150 = local_a8;
            local_148 = 0x11;
            FUN_00442f70(&local_140,
                         L"Original \"%s\" component has a connection to \"%s\", second file \"%s\" not connected to \"%s\""
                         ,&local_180,3);
            (**(code **)(*param_3 + 0x78))(param_3,local_140);
            FUN_01487760(local_58,local_c0,1);
            FUN_01487760(local_58,local_c8,1);
          }
        }
      }
      if (local_20 != (longlong *)0x0) {
        (**(code **)(*local_20 + -0x20))(local_20,1);
      }
      uVar3 = FUN_014879d0(local_38);
      local_28 = (longlong *)FUN_01487b20(uVar3);
      while (cVar2 = thunk_FUN_01487cc3(local_28), cVar2 != '\0') {
        FUN_01487b70(local_28,&local_a8);
        cVar2 = FUN_01487880(local_30,local_a8);
        if (cVar2 == '\0') {
          local_198 = local_a8;
          FUN_00416cd0(&local_c0,3,local_88,&DAT_014831c0);
          local_198 = local_88;
          FUN_00416cd0(&local_c8,3,local_a8,&DAT_014831c0);
          cVar2 = FUN_01487880(local_58,local_c0);
          if ((((cVar2 == '\0') && (cVar2 = FUN_01487880(local_58,local_c8), cVar2 == '\0')) &&
              (cVar2 = FUN_014822e0(auStack_1b8,local_78,local_88), cVar2 != '\0')) &&
             (cVar2 = FUN_014822e0(auStack_1b8,local_78,local_a8), cVar2 != '\0')) {
            local_180 = local_88;
            local_178 = 0x11;
            local_170 = local_a8;
            local_168 = 0x11;
            local_160 = local_88;
            local_158 = 0x11;
            local_150 = local_a8;
            local_148 = 0x11;
            FUN_00442f70(&local_188,
                         L"Second file \"%s\" component has a connection to \"%s\", original \"%s\" not connected to \"%s\""
                         ,&local_180,3);
            (**(code **)(*param_3 + 0x78))(param_3,local_188);
            FUN_01487760(local_58,local_c0,1);
            FUN_01487760(local_58,local_c8,1);
          }
        }
      }
      if (local_28 != (longlong *)0x0) {
        (**(code **)(*local_28 + -0x20))(local_28,1);
      }
      FUN_00410f20(local_30);
      FUN_00410f20(local_38);
    }
  }
  if (local_40 != (longlong *)0x0) {
    (**(code **)(*local_40 + -0x20))(local_40,1);
  }
  FUN_00410f20(local_48);
  FUN_00410f20(local_50);
  FUN_00410f20(local_58);
  FUN_00410f20(local_60);
  FUN_00410f20(local_68);
  FUN_00414480(&local_188);
  FUN_00414560(&local_140,3);
  FUN_00414560(&local_118,3);
  FUN_00414560(&local_c8,2);
  FUN_00414480(&local_a8);
  FUN_00414480(&local_88);
  return;
}

