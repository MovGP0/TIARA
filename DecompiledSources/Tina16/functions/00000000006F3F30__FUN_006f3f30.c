/* Ghidra address: 006f3f30 */
/* Ghidra symbol: FUN_006f3f30 */


void FUN_006f3f30(longlong *param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined1 auStack_228 [32];
  ulonglong local_208;
  undefined4 local_200;
  undefined1 local_1f8;
  undefined1 local_1f0;
  longlong local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined1 *local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  longlong local_1b8;
  undefined8 local_1b0;
  undefined4 local_1a4;
  undefined4 uStack_1a0;
  int local_19c;
  longlong local_198;
  longlong local_190;
  longlong local_188;
  longlong local_180;
  longlong local_178;
  longlong local_170;
  longlong local_168;
  longlong *local_160;
  uint *local_158;
  longlong local_150;
  uint *local_148;
  longlong local_140;
  longlong local_138;
  longlong local_130;
  undefined1 local_124 [92];
  uint local_c8;
  char local_c1;
  undefined1 local_c0 [4];
  undefined4 local_bc;
  undefined1 local_65;
  undefined4 local_64;
  ulonglong local_60;
  undefined8 local_58;
  undefined8 local_50;
  char local_46;
  char local_45;
  undefined1 local_44 [16];
  int local_34;
  longlong local_30;
  undefined4 local_24;
  longlong local_20;
  
  local_1d0 = auStack_228;
  local_1d8 = 0;
  local_50 = 0;
  lVar6 = *(longlong *)(param_2 + 0x10);
  iVar5 = *(int *)(lVar6 + 0x10);
  if (iVar5 < -0x6c) {
    if (iVar5 == -0x6d) {
      *(undefined4 *)((longlong)param_1 + 0x54c) = *(undefined4 *)(lVar6 + 0x18);
      puVar1 = auStack_228;
      goto LAB_006f57c0;
    }
    if (iVar5 < -0xae) {
      if (iVar5 == -0xaf) goto LAB_006f5362;
      if (-0xb3 < iVar5) {
        if (iVar5 != -0xb1) {
          puVar1 = auStack_228;
          if (iVar5 != -0xb0) goto LAB_006f57c0;
          goto LAB_006f5459;
        }
LAB_006f4ea0:
        local_1d0 = auStack_228;
        local_138 = lVar6;
        local_30 = FUN_006f3cc0(param_1,lVar6 + 0x18);
        local_158 = (uint *)(local_138 + 0x18);
        if ((*local_158 & 1) != 0) {
          if (*(int *)(local_138 + 0x20) == 0) {
            FUN_00442660(*(undefined8 *)(local_138 + 0x30),*(undefined8 *)(local_30 + 0x30),
                         *(int *)(local_138 + 0x38) + -1);
          }
          else {
            local_160 = *(longlong **)(local_30 + 0x10);
            iVar5 = (**(code **)(*local_160 + 0x28))(local_160);
            if (iVar5 < (int)local_158[2]) {
              **(undefined2 **)(local_158 + 6) = 0;
            }
            else {
              (**(code **)(*local_160 + 0x18))(local_160,&local_1d8,local_158[2] - 1);
              FUN_00442660(*(undefined8 *)(local_158 + 6),local_1d8,local_158[8] - 1);
            }
          }
        }
        if ((*local_158 & 2) != 0) {
          if (local_158[2] == 0) {
            FUN_006f71b0(param_1,local_30);
            local_158[9] = *(uint *)(local_30 + 0x18);
            if (param_1[0x98] != 0) {
              local_19c = *(int *)(local_30 + 0x28) + 1;
              local_158[3] = local_19c * 0x1000;
              local_158[4] = 0xf000;
              *local_158 = *local_158 | 8;
            }
          }
          else if ((-1 < (int)(local_158[2] - 1)) &&
                  (iVar5 = (**(code **)(**(longlong **)(local_30 + 0x10) + 0x28))
                                     (*(longlong **)(local_30 + 0x10)),
                  (int)(local_158[2] - 1) < iVar5)) {
            local_c8 = FUN_006ef830(local_30,local_158[2] - 1);
            FUN_006f8810(param_1,local_30,local_158[2] - 1,&local_c8);
            local_158[9] = local_c8;
          }
        }
        puVar1 = local_1d0;
        if ((*local_158 & 0x10) != 0) {
          local_158[0xc] = *(uint *)(local_30 + 0x1c);
        }
        goto LAB_006f57c0;
      }
      if (iVar5 != -0xb3) {
        if (((iVar5 == -0x148) || (puVar1 = auStack_228, iVar5 == -0x134)) &&
           (local_148 = *(uint **)(lVar6 + 0x20), puVar1 = auStack_228, local_140 = lVar6,
           (*local_148 & 1) != 0)) {
          local_1d0 = auStack_228;
          lVar6 = FUN_006f6ca0(param_1,*(undefined4 *)(lVar6 + 0x18));
          if (*(int *)(lVar6 + 0x2c) < (int)local_148[1]) {
            lVar6 = FUN_006f6ca0(param_1,*(undefined4 *)(local_140 + 0x18));
            puVar1 = local_1d0;
            if (*(int *)(lVar6 + 0x28) <= (int)local_148[1]) {
              uVar7 = FUN_006f6ca0(param_1,*(undefined4 *)(local_140 + 0x18));
              lVar6 = FUN_006f6ca0(param_1,*(undefined4 *)(local_140 + 0x18));
              FUN_006ed840(uVar7,*(undefined4 *)(lVar6 + 0x28));
              puVar1 = local_1d0;
            }
          }
          else {
            uVar7 = FUN_006f6ca0(param_1,*(undefined4 *)(local_140 + 0x18));
            lVar6 = FUN_006f6ca0(param_1,*(undefined4 *)(local_140 + 0x18));
            FUN_006ed840(uVar7,*(undefined4 *)(lVar6 + 0x2c));
            puVar1 = local_1d0;
          }
        }
        goto LAB_006f57c0;
      }
    }
    else {
      if (-0x96 < iVar5) {
        if (iVar5 == -0x73) {
          local_1d0 = auStack_228;
          local_178 = lVar6;
          uVar4 = FUN_006f3ee0(auStack_228,*(undefined4 *)(lVar6 + 0x20));
          uVar2 = FUN_006f3ee0(auStack_228,*(undefined4 *)(local_178 + 0x24));
          local_208 = CONCAT71(local_208._1_7_,uVar2);
          (**(code **)(*param_1 + 0x318))
                    (param_1,*(undefined4 *)(local_178 + 0x18),*(undefined4 *)(local_178 + 0x1c),
                     uVar4);
          puVar1 = local_1d0;
        }
        else {
          puVar1 = auStack_228;
          if (iVar5 == -0x71) {
            local_1d0 = auStack_228;
            local_168 = lVar6;
            (**(code **)(*param_1 + 0x310))
                      (param_1,*(undefined4 *)(lVar6 + 0x18),*(undefined4 *)(lVar6 + 0x1c));
            puVar1 = local_1d0;
          }
        }
        goto LAB_006f57c0;
      }
      if (iVar5 == -0x96) goto LAB_006f4ea0;
      if (iVar5 + 0x9eU < 2) {
        puVar1 = auStack_228;
        if (param_1[0xe4] != 0) {
          local_1d0 = auStack_228;
          local_1e0 = FUN_00664d10(*(undefined8 *)PTR_DAT_020054d8);
          FUN_0080ec80(*(undefined8 *)PTR_DAT_02004030,&local_1e0);
          puVar1 = local_1d0;
        }
        goto LAB_006f57c0;
      }
      puVar1 = auStack_228;
      if (iVar5 != -0x98) goto LAB_006f57c0;
    }
    local_1d0 = auStack_228;
    local_170 = lVar6;
    local_46 = FUN_006f3ea0(auStack_228,*(undefined4 *)(lVar6 + 0x20));
    local_60 = 0;
    FUN_00414480(&local_50);
    local_1a4 = 0;
    uStack_1a0 = 0;
    uVar7 = 0;
    local_58 = 0;
    local_65 = 4;
    if ((byte)(local_46 - 1U) == 0xff) {
      local_60 = *(ulonglong *)(local_170 + 0x30);
    }
    else {
      local_58 = uVar7;
      if ((byte)(local_46 - 1U) < 2) {
        if (*(longlong *)(local_170 + 0x28) == 0) {
          FUN_00414480(&local_50);
        }
        else {
          FUN_00442b00(&local_50,*(undefined8 *)(local_170 + 0x28));
        }
      }
      else if (local_46 == '\x03') {
        local_58 = *(undefined8 *)(local_170 + 0x38);
        iVar5 = *(int *)(local_170 + 0x40);
        if (iVar5 == 0x25) {
          local_65 = 0;
        }
        else if (iVar5 == 0x26) {
          local_65 = 2;
        }
        else if (iVar5 == 0x27) {
          local_65 = 1;
        }
        else if (iVar5 == 0x28) {
          local_65 = 3;
        }
      }
    }
    uVar4 = FUN_006f3ea0(auStack_228,*(undefined4 *)(local_170 + 0x20));
    local_208 = local_60;
    local_200 = *(undefined4 *)(local_170 + 0x18);
    local_1f8 = local_65;
    local_1f0 = (*(uint *)(local_170 + 0x20) & 0x20) != 0;
    iVar5 = (**(code **)(*param_1 + 0x308))(param_1,uVar4,local_50,&local_58);
    *(longlong *)(param_2 + 0x18) = (longlong)iVar5;
    puVar1 = local_1d0;
    goto LAB_006f57c0;
  }
  if (iVar5 < -0x65) {
    if (iVar5 == -0x66) {
      local_1d0 = auStack_228;
      uVar7 = FUN_006efcb0(param_1[0x9c],*(undefined4 *)(lVar6 + 0x18));
      pcVar8 = (code *)FUN_00411550(param_1,0xffa5);
      (*pcVar8)(param_1,uVar7);
      puVar1 = local_1d0;
      goto LAB_006f57c0;
    }
    if (-0x69 < iVar5) {
      if (iVar5 == -0x68) {
        *(undefined1 *)(param_1 + 0xf3) = 1;
        local_1d0 = auStack_228;
        local_34 = FUN_006efc30(param_1[0x9c]);
        local_34 = local_34 + -1;
        if (-1 < local_34) {
          do {
            uVar7 = FUN_006efcb0(param_1[0x9c],local_34);
            pcVar8 = (code *)FUN_00411550(param_1,0xffa7);
            (*pcVar8)(param_1,uVar7);
            local_34 = local_34 + -1;
          } while (local_34 != -1);
        }
        *(undefined1 *)(param_1 + 0xf3) = 0;
        *(undefined8 *)(param_2 + 0x18) = 1;
        puVar1 = local_1d0;
      }
      else {
        puVar1 = auStack_228;
        if (iVar5 == -0x67) {
          local_1d0 = auStack_228;
          pcVar8 = (code *)FUN_00411550(param_1,0xffa7);
          (*pcVar8)(param_1,*(undefined8 *)(lVar6 + 0x38));
          *(undefined8 *)(param_2 + 0x18) = 1;
          puVar1 = local_1d0;
        }
      }
      goto LAB_006f57c0;
    }
    if (iVar5 != -0x69) {
      if (iVar5 == -0x6c) {
        local_1d0 = auStack_228;
        uVar7 = FUN_006f8f70(param_1,*(undefined4 *)(lVar6 + 0x1c));
        pcVar8 = (code *)FUN_00411550(param_1,0xffa9);
        (*pcVar8)(param_1,uVar7);
        puVar1 = local_1d0;
        goto LAB_006f57c0;
      }
      puVar1 = auStack_228;
      if (iVar5 != -0x6a) goto LAB_006f57c0;
LAB_006f5459:
      puVar1 = auStack_228;
      local_180 = lVar6;
      if ((*(longlong *)(lVar6 + 0x30) != 0) && (puVar1 = auStack_228, *(int *)(lVar6 + 0x1c) != -1)
         ) {
        local_1d0 = auStack_228;
        pcVar8 = (code *)FUN_00411550(param_1,0xffa6);
        (*pcVar8)(param_1,local_180 + 0x18);
        puVar1 = local_1d0;
      }
      goto LAB_006f57c0;
    }
LAB_006f5362:
    local_1d0 = auStack_228;
    local_30 = FUN_006f3cc0(param_1,lVar6 + 0x18);
    pcVar8 = (code *)FUN_00411550(param_1,0xffab);
    cVar3 = (*pcVar8)(param_1,local_30);
    if (cVar3 == '\0') {
      *(undefined8 *)(param_2 + 0x18) = 1;
    }
    puVar1 = local_1d0;
    if (*(longlong *)(param_2 + 0x18) == 0) {
      local_1b0 = FUN_0065b870(param_1);
      lVar6 = thunk_FUN_041b2403(local_1b0,0x1018,0,0);
      param_1[0xa7] = lVar6;
      local_1b8 = param_1[0xa7];
      lVar6 = thunk_FUN_04118143(local_1b8,0xfffffffc);
      param_1[0xa5] = lVar6;
      local_1c0 = param_1[0xa7];
      local_1c8 = param_1[0xf0];
      thunk_FUN_03c9d277(local_1c0,0xfffffffc,local_1c8);
      puVar1 = local_1d0;
    }
    goto LAB_006f57c0;
  }
  if (-0xc < iVar5) {
    if (iVar5 == -5) {
      *(undefined1 *)((longlong)param_1 + 0x4e9) = 1;
      puVar1 = auStack_228;
    }
    else {
      puVar1 = auStack_228;
      if (iVar5 == -2) {
        *(undefined1 *)(param_1 + 0x9d) = 1;
        puVar1 = auStack_228;
      }
    }
    goto LAB_006f57c0;
  }
  if (iVar5 != -0xc) {
    if (iVar5 == -0x65) {
      puVar1 = auStack_228;
      local_190 = lVar6;
      if (*(char *)((longlong)param_1 + 0x589) == '\0') {
        local_1d0 = auStack_228;
        local_30 = FUN_006efcb0(param_1[0x9c],*(undefined4 *)(lVar6 + 0x18));
        pcVar8 = (code *)FUN_00411550(param_1,0xffaa);
        (*pcVar8)(param_1,local_30,*(undefined4 *)(local_190 + 0x28));
        if (*(int *)(local_190 + 0x28) == 8) {
          if (((*(uint *)(local_190 + 0x24) & 2) == 0) || ((*(uint *)(local_190 + 0x20) & 2) != 0))
          {
            if (((*(uint *)(local_190 + 0x24) & 2) == 0) && ((*(uint *)(local_190 + 0x20) & 2) != 0)
               ) {
              (**(code **)(*param_1 + 0x2e8))(param_1,local_30,1);
            }
          }
          else {
            (**(code **)(*param_1 + 0x2e8))(param_1,local_30,0);
          }
        }
        lVar6 = (**(code **)(*param_1 + 0xd0))(param_1);
        if (((lVar6 != 0) && ((*(ushort *)((longlong)param_1 + 0x34) & 0x10) == 0)) &&
           (param_1[0x18] != 0)) {
          (**(code **)(*(longlong *)param_1[0x18] + 0x30))((longlong *)param_1[0x18],param_1);
        }
        puVar1 = local_1d0;
        if (((param_1[0xea] != 0) && (*(int *)(local_190 + 0x28) == 8)) &&
           ((*(uint *)(local_190 + 0x24) & 0xf000) >> 0xc !=
            (*(uint *)(local_190 + 0x20) & 0xf000) >> 0xc)) {
          (*(code *)param_1[0xea])(param_1[0xeb],param_1,local_30);
          puVar1 = local_1d0;
        }
      }
    }
    else {
      puVar1 = auStack_228;
      if (iVar5 == -100) {
        local_1d0 = auStack_228;
        local_188 = lVar6;
        uVar7 = FUN_006efcb0(param_1[0x9c],*(undefined4 *)(lVar6 + 0x18));
        pcVar8 = (code *)FUN_00411550(param_1,0xffac);
        cVar3 = (*pcVar8)(param_1,uVar7,*(undefined4 *)(local_188 + 0x28));
        puVar1 = local_1d0;
        if (cVar3 == '\0') {
          *(undefined8 *)(param_2 + 0x18) = 1;
        }
      }
    }
    goto LAB_006f57c0;
  }
  local_1e8 = param_1[0x93];
  puVar1 = auStack_228;
  if (local_1e8 == 0) goto LAB_006f57c0;
  local_20 = lVar6;
  FUN_005fdf10(local_1e8);
  *(undefined8 *)(param_2 + 0x18) = 0;
  if ((*(uint *)(local_20 + 0x18) & 0x10000) == 0) {
    (**(code **)(*param_1 + 0xe0))(param_1,local_44);
    iVar5 = *(int *)(local_20 + 0x18);
    if (iVar5 != 1) {
      if (iVar5 == 2) {
        cVar3 = (**(code **)(*param_1 + 0x328))(param_1,0,1);
        if (cVar3 != '\0') {
          (**(code **)(*param_1 + 0x2d0))(param_1,local_44,1);
        }
      }
      else if (iVar5 == 3) {
        cVar3 = (**(code **)(*param_1 + 0x328))(param_1,0,2);
        if (cVar3 != '\0') {
          (**(code **)(*param_1 + 0x2d0))(param_1,local_44,2);
        }
      }
      else if (iVar5 == 4) {
        cVar3 = (**(code **)(*param_1 + 0x328))(param_1,0,3);
        if (cVar3 != '\0') {
          (**(code **)(*param_1 + 0x2d0))(param_1,local_44,3);
        }
      }
      goto code_r0x006f4d8c;
    }
    cVar3 = (**(code **)(*param_1 + 0x328))(param_1,0,0);
    if (cVar3 != '\0') {
      FUN_005ffb10(param_1[0x93],*(undefined8 *)(local_20 + 0x20));
      FUN_005ff880(param_1[0x93],param_1[0x17]);
      FUN_005ff8c0(param_1[0x93],param_1[0x66]);
      local_45 = (**(code **)(*param_1 + 0x2d0))(param_1,local_44,0);
      FUN_005ffb10(param_1[0x93],0);
      if (local_45 == '\0') {
        *(undefined8 *)(param_2 + 0x18) = 4;
        goto LAB_006f4da4;
      }
    }
    cVar3 = (**(code **)(*param_1 + 0x328))(param_1,1,0);
    if (cVar3 == '\0') {
      cVar3 = (**(code **)(*param_1 + 0x328))(param_1,1,2);
      if (cVar3 != '\0') goto LAB_006f438c;
    }
    else {
LAB_006f438c:
      *(undefined8 *)(param_2 + 0x18) = 0x20;
    }
    cVar3 = (**(code **)(*param_1 + 0x328))(param_1,1,1);
    if (cVar3 != '\0') {
      *(ulonglong *)(param_2 + 0x18) = *(ulonglong *)(param_2 + 0x18) | 0x10;
    }
    cVar3 = (**(code **)(*param_1 + 0x328))(param_1,1,3);
    if (cVar3 != '\0') {
      *(ulonglong *)(param_2 + 0x18) = *(ulonglong *)(param_2 + 0x18) | 0x40;
    }
    cVar3 = (**(code **)(*param_1 + 0x328))(param_1,2,0);
    if ((cVar3 != '\0') || (cVar3 = (**(code **)(*param_1 + 0x328))(param_1,2,1), cVar3 != '\0')) {
      *(ulonglong *)(param_2 + 0x18) = *(ulonglong *)(param_2 + 0x18) | 0x20;
    }
  }
  else {
    local_130 = *(longlong *)(param_2 + 0x10);
    local_c1 = (*(uint *)(local_20 + 0x18) & 0x20000) != 0;
    if (((bool)local_c1) && (*(int *)(local_130 + 0x58) == 0)) {
LAB_006f4da4:
      FUN_006f5890(0,local_1d0);
      puVar1 = local_1d0;
      goto LAB_006f57c0;
    }
    local_64 = *(undefined4 *)(local_130 + 0x58);
    FUN_0040d200(local_c0,0x58,0);
    local_bc = *(undefined4 *)(local_20 + 0x38);
    if ((*(uint *)(local_20 + 0x18) & 0x10001) == 0x10001) {
      local_24 = thunk_FUN_0416b813(*(undefined8 *)(local_20 + 0x20));
      FUN_005ffb10(param_1[0x93],*(undefined8 *)(local_20 + 0x20));
      FUN_005ff880(param_1[0x93],param_1[0x17]);
      FUN_005ff8c0(param_1[0x93],param_1[0x66]);
      lVar6 = *(longlong *)(param_1[0x93] + 0x70);
      *(longlong **)(lVar6 + 0x10) = param_1;
      *(code **)(lVar6 + 8) = FUN_006f8450;
      lVar6 = *(longlong *)(param_1[0x93] + 0x80);
      *(longlong **)(lVar6 + 0x10) = param_1;
      *(code **)(lVar6 + 8) = FUN_006f8450;
      *(undefined1 *)((longlong)param_1 + 0x58a) = 0;
      if (local_c1 == '\0') {
        uVar7 = FUN_006f3cc0(param_1,local_c0);
        local_45 = (**(code **)(*param_1 + 0x2d8))(param_1,uVar7,*(undefined2 *)(local_20 + 0x40),0)
        ;
      }
      else {
        uVar7 = FUN_006f3cc0(param_1,local_c0);
        local_208 = local_208 & 0xffffffffffffff00;
        local_45 = (**(code **)(*param_1 + 0x2e0))
                             (param_1,uVar7,local_64,*(undefined2 *)(local_20 + 0x40));
      }
      if (local_45 == '\0') {
        *(ulonglong *)(param_2 + 0x18) = *(ulonglong *)(param_2 + 0x18) | 4;
        FUN_006f5810(0,local_1d0);
        goto LAB_006f4da4;
      }
      if (*(char *)((longlong)param_1 + 0x58a) != '\0') {
        *(undefined1 *)((longlong)param_1 + 0x58a) = 0;
        lVar6 = *(longlong *)(param_1[0x93] + 0x70);
        *(undefined8 *)(lVar6 + 8) = 0;
        *(undefined8 *)(lVar6 + 0x10) = 0;
        lVar6 = *(longlong *)(param_1[0x93] + 0x80);
        *(undefined8 *)(lVar6 + 8) = 0;
        *(undefined8 *)(lVar6 + 0x10) = 0;
        local_150 = local_130;
        uVar4 = FUN_005fbf20(*(undefined4 *)(*(longlong *)(param_1[0x93] + 0x70) + 0x28));
        *(undefined4 *)(local_150 + 0x50) = uVar4;
        local_198 = *(longlong *)(param_1[0x93] + 0x80);
        uVar4 = FUN_005fbf20(*(undefined4 *)(*(longlong *)(local_198 + 0x18) + 0x28));
        *(undefined4 *)(local_150 + 0x54) = uVar4;
        uVar7 = FUN_005fc8c0(*(undefined8 *)(param_1[0x93] + 0x70));
        iVar5 = thunk_FUN_03d2c01a(uVar7,0x5c,local_124);
        if (iVar5 != 0) {
          FUN_005ffb10(param_1[0x93],0);
          if (((local_c1 != '\0') && (*(int *)((longlong)param_1 + 0x5a4) != 0)) &&
             ((int)param_1[0xb5] != 0)) {
            thunk_FUN_041a19a1(*(undefined8 *)(local_20 + 0x20),(longlong)(int)param_1[0xb5]);
            thunk_FUN_0416f828((longlong)*(int *)((longlong)param_1 + 0x5a4));
            *(undefined4 *)((longlong)param_1 + 0x5a4) = 0;
            *(undefined4 *)(param_1 + 0xb5) = 0;
          }
          uVar4 = thunk_FUN_041a15ee(local_124);
          *(undefined4 *)((longlong)param_1 + 0x5a4) = uVar4;
          uVar4 = thunk_FUN_041a19a1(*(undefined8 *)(local_20 + 0x20),
                                     (longlong)*(int *)((longlong)param_1 + 0x5a4));
          *(undefined4 *)(param_1 + 0xb5) = uVar4;
          *(ulonglong *)(param_2 + 0x18) = *(ulonglong *)(param_2 + 0x18) | 2;
        }
      }
      FUN_005ffb10(param_1[0x93],0);
      thunk_FUN_03b994b9(*(undefined8 *)(local_20 + 0x20),local_24);
      if (local_c1 == '\0') {
        cVar3 = (**(code **)(*param_1 + 0x328))(param_1,2,0);
        if (cVar3 != '\0') {
          *(ulonglong *)(param_2 + 0x18) = *(ulonglong *)(param_2 + 0x18) | 0x20;
        }
        cVar3 = (**(code **)(*param_1 + 0x328))(param_1,1,1);
        if (cVar3 != '\0') {
          *(ulonglong *)(param_2 + 0x18) = *(ulonglong *)(param_2 + 0x18) | 0x10;
        }
        cVar3 = (**(code **)(*param_1 + 0x328))(param_1,1,3);
        if (cVar3 != '\0') {
          *(ulonglong *)(param_2 + 0x18) = *(ulonglong *)(param_2 + 0x18) | 0x40;
        }
      }
      else {
        cVar3 = (**(code **)(*param_1 + 0x328))(param_1,2,1);
        if (cVar3 != '\0') {
          *(ulonglong *)(param_2 + 0x18) = *(ulonglong *)(param_2 + 0x18) | 0x10;
        }
        cVar3 = (**(code **)(*param_1 + 0x328))(param_1,2,3);
        if (cVar3 != '\0') {
          *(ulonglong *)(param_2 + 0x18) = *(ulonglong *)(param_2 + 0x18) | 0x40;
        }
      }
    }
    else if ((*(uint *)(local_20 + 0x18) & 0x10002) == 0x10002) {
      local_24 = thunk_FUN_0416b813(*(undefined8 *)(local_20 + 0x20));
      FUN_005ffb10(param_1[0x93],*(undefined8 *)(local_20 + 0x20));
      FUN_005ff880(param_1[0x93],param_1[0x17]);
      FUN_005ff8c0(param_1[0x93],param_1[0x66]);
      if (local_c1 == '\0') {
        uVar7 = FUN_006f3cc0(param_1,local_c0);
        (**(code **)(*param_1 + 0x2d8))(param_1,uVar7,*(undefined2 *)(local_20 + 0x40),1);
      }
      else {
        uVar7 = FUN_006f3cc0(param_1,local_c0);
        local_208 = CONCAT71(local_208._1_7_,1);
        (**(code **)(*param_1 + 0x2e0))(param_1,uVar7,local_64,*(undefined2 *)(local_20 + 0x40));
      }
      FUN_005ffb10(param_1[0x93],0);
      thunk_FUN_03b994b9(*(undefined8 *)(local_20 + 0x20),local_24);
      if ((*(int *)((longlong)param_1 + 0x5a4) != 0) && ((int)param_1[0xb5] != 0)) {
        thunk_FUN_041a19a1(*(undefined8 *)(local_20 + 0x20),(longlong)(int)param_1[0xb5]);
        thunk_FUN_0416f828((longlong)*(int *)((longlong)param_1 + 0x5a4));
        *(undefined4 *)((longlong)param_1 + 0x5a4) = 0;
        *(undefined4 *)(param_1 + 0xb5) = 0;
      }
    }
    else if ((*(uint *)(local_20 + 0x18) & 0x10003) == 0x10003) {
      if (local_c1 == '\0') {
        uVar7 = FUN_006f3cc0(param_1,local_c0);
        (**(code **)(*param_1 + 0x2d8))(param_1,uVar7,*(undefined2 *)(local_20 + 0x40),2);
      }
      else {
        uVar7 = FUN_006f3cc0(param_1,local_c0);
        local_208 = CONCAT71(local_208._1_7_,2);
        (**(code **)(*param_1 + 0x2e0))(param_1,uVar7,local_64,*(undefined2 *)(local_20 + 0x40));
      }
    }
    else if ((*(uint *)(local_20 + 0x18) & 0x10004) == 0x10004) {
      if (local_c1 == '\0') {
        uVar7 = FUN_006f3cc0(param_1,local_c0);
        (**(code **)(*param_1 + 0x2d8))(param_1,uVar7,*(undefined2 *)(local_20 + 0x40),3);
      }
      else {
        uVar7 = FUN_006f3cc0(param_1,local_c0);
        local_208 = CONCAT71(local_208._1_7_,3);
        (**(code **)(*param_1 + 0x2e0))(param_1,uVar7,local_64,*(undefined2 *)(local_20 + 0x40));
      }
    }
  }
code_r0x006f4d8c:
  FUN_005fe090(param_1[0x93]);
  puVar1 = local_1d0;
LAB_006f57c0:
  local_1d0 = puVar1;
  FUN_00414480(&local_1d8);
  FUN_00414480(&local_50);
  return;
}

