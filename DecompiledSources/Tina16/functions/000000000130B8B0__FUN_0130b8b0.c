/* Ghidra address: 0130b8b0 */
/* Ghidra symbol: FUN_0130b8b0 */


char FUN_0130b8b0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 longlong param_5,char param_6,undefined1 param_7,undefined4 param_8,
                 longlong param_9,undefined8 param_10,undefined4 param_11)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auStack_218 [32];
  double *local_1f8;
  double *local_1f0;
  undefined1 *local_1e8;
  undefined1 *local_1e0;
  undefined1 *local_1d8;
  longlong local_1c0;
  undefined1 *local_1b8;
  longlong *local_1b0;
  longlong *local_1a8;
  char local_199;
  undefined8 local_198;
  longlong *local_190;
  char local_181;
  undefined8 local_180;
  int local_178;
  int local_174;
  double local_170;
  undefined8 local_168;
  undefined8 local_160 [2];
  longlong local_150;
  undefined8 local_148;
  double local_140;
  double local_138;
  double local_130;
  undefined8 local_128;
  double local_120;
  double local_118;
  undefined1 local_110 [8];
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  double local_f8;
  double local_f0;
  undefined8 local_e1;
  undefined8 local_d9;
  undefined8 local_d0;
  int local_c4;
  double local_c0;
  double local_b8;
  undefined1 local_b0 [8];
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  longlong *local_88;
  longlong local_80;
  int local_74;
  undefined1 *local_70;
  
  local_168 = 0;
  local_160[0] = 0;
  local_d0 = 0;
  local_150 = 0;
  local_80 = 0;
  local_90 = 0.0;
  local_98 = 0.0;
  local_a0 = 0.0;
  local_a8 = 0.0;
  local_b8 = 0.0;
  local_c0 = 0.0;
  local_118 = 0.0;
  local_120 = 0.0;
  local_181 = '\0';
  local_88 = (longlong *)0x0;
  local_1b0 = (longlong *)0x0;
  local_1a8 = (longlong *)0x0;
  local_190 = (longlong *)0x0;
  local_70 = (undefined1 *)0x0;
  local_1b8 = (undefined1 *)0x0;
  local_1c0 = param_1;
  local_198 = param_3;
  local_180 = param_4;
  lVar7 = FUN_0131cb30(&DAT_01307750,1);
  FUN_01cc0ae0(param_2,local_160);
  FUN_00414ad0(lVar7 + 8,local_160[0]);
  local_199 = '\0';
  local_c4 = 0;
  cVar1 = FUN_012e57a0(param_10);
  if (cVar1 != '\0') {
    local_90 = (double)FUN_012e5730(param_10);
    local_98 = (double)FUN_012e5750(param_10);
  }
  cVar1 = FUN_012e5f30(param_10,param_8);
  if (cVar1 != '\0') {
    local_90 = (double)FUN_012e6090(param_10,param_8);
    local_98 = (double)FUN_012e6110(param_10,param_8);
  }
  if (param_5 != 0) {
    iVar2 = FUN_012e6020(param_10,param_8);
    if (iVar2 == 2) {
      if (param_6 == '\x04') {
        local_190 = (longlong *)FUN_01cc6f70(&PTR_FUN_01cba328,1,param_5);
      }
      else {
        local_1b0 = (longlong *)FUN_01cc6f70(&PTR_FUN_01cb8940,1,param_5);
      }
    }
  }
  dVar11 = 0.0;
  if (((param_5 == 0) || (iVar2 = FUN_012e6020(param_10,param_8), iVar2 != 2)) ||
     (param_6 == '\x04')) {
    lVar9 = FUN_013021e0(*(undefined8 *)PTR_DAT_02002f98);
    if ((lVar9 != 0) && (param_9 != 0)) {
      dVar11 = (double)FUN_012dd2f0(param_9,1,param_8,param_11);
      if (dVar11 == 0.0) {
        dVar11 = (double)FUN_012dd2f0(param_9,2,param_8,param_11);
      }
      if (dVar11 == 0.0) {
        dVar11 = (double)FUN_012dd2f0(param_9,0,param_8,param_11);
      }
      uVar8 = FUN_013021e0(*(undefined8 *)PTR_DAT_02002f98);
      FUN_012dd160(param_9,&local_168,L"PARAMETER_UNIT",param_8);
      dVar11 = (double)FUN_012e0e20(uVar8,dVar11,local_168);
    }
  }
  else {
    (**(code **)(*local_1b0 + 0x70))(local_1b0,local_198);
    dVar10 = (double)FUN_0040c850();
    (**(code **)(*local_1b0 + 0x68))(local_1b0,local_198);
    dVar11 = (double)FUN_0040c850();
    if (dVar11 < dVar10) {
      dVar11 = dVar10;
    }
    if (dVar11 < 1e-15) {
      dVar11 = 1e-15;
    }
  }
  uVar3 = FUN_012e5710(param_10);
  uVar4 = FUN_012e6020(param_10,param_8);
  uVar5 = FUN_012e5fd0(param_10,param_8);
  local_174 = FUN_01305380(*(undefined8 *)PTR_DAT_02002f98,uVar3,uVar4,uVar5);
  if (param_6 != '\x03') {
    if (param_6 != '\x04') {
      local_88 = (longlong *)FUN_01cc6f70(&PTR_FUN_01cb8940,1,local_180);
      (**(code **)(*local_88 + 0x10))(local_88,param_2,0);
      FUN_0113f830(param_2,local_88,&local_b8,&local_c0);
      FUN_012e61d0(param_10,param_8,local_b8);
      FUN_012e6250(param_10,param_8,local_c0);
      local_74 = FUN_01cc7250(local_88,param_2);
      local_70 = (undefined1 *)FUN_00409570((longlong)(local_74 << 4));
      if (param_5 == 0) {
LAB_0130cede:
        local_199 = '\x01';
      }
      else {
        iVar2 = FUN_012e6020(param_10,param_8);
        if (iVar2 != 2) goto LAB_0130cede;
        (**(code **)(*local_1b0 + 0x10))(local_1b0,local_198,0);
        iVar2 = FUN_01cc7250(local_1b0,local_198);
        if (local_74 == iVar2) {
          local_1b8 = (undefined1 *)FUN_00409570((longlong)(local_74 << 4));
          local_199 = '\x01';
        }
      }
      if (local_199 == '\0') {
        local_1f8 = (double *)0x130d5e8;
        local_1f0 = (double *)((ulonglong)local_1f0 & 0xffffffffffffff00);
        FUN_0130ea10(local_1c0,8,1,param_7);
      }
      else if ((local_174 == 8) || (local_174 == 9)) {
        if (local_174 == 8) {
          local_170 = (double)FUN_0130b5a0(auStack_218);
        }
        else if (local_174 == 9) {
          local_170 = (double)FUN_0130b610(auStack_218);
        }
        local_181 = '\x01';
      }
      else if (local_174 == 7) {
        dVar10 = 0.0;
        local_178 = 0;
        iVar2 = local_74;
        if (-1 < local_74 + -1) {
          do {
            (**(code **)(*local_88 + 0x30))
                      (local_88,local_b0,local_70 + (longlong)local_178 * 0x10,0);
            *(undefined8 *)(local_70 + (longlong)local_178 * 0x10 + 8) = 0;
            if ((param_5 != 0) && (iVar6 = FUN_012e6020(param_10,param_8), iVar6 == 2)) {
              (**(code **)(*local_1b0 + 0x30))
                        (local_1b0,local_b0,local_1b8 + (longlong)local_178 * 0x10);
              *(undefined8 *)(local_1b8 + (longlong)local_178 * 0x10 + 8) = 0;
            }
            if ((param_5 == 0) || (iVar6 = FUN_012e6020(param_10,param_8), iVar6 != 2)) {
              dVar12 = (dVar11 - *(double *)(local_70 + (longlong)local_178 * 0x10)) / dVar11;
              dVar12 = dVar12 * dVar12;
            }
            else {
              dVar12 = (*(double *)(local_1b8 + (longlong)local_178 * 0x10) -
                       *(double *)(local_70 + (longlong)local_178 * 0x10)) / dVar11;
              dVar12 = dVar12 * dVar12;
            }
            dVar10 = dVar10 + dVar12;
            local_178 = local_178 + 1;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
        dVar10 = (double)FUN_0040c760(dVar10 / (double)local_74);
        *(double *)(*(longlong *)(local_1c0 + 0x18) + 0x10) = dVar10 * 100.0;
        *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)(*(longlong *)(local_1c0 + 0x18) + 0x10);
        *(undefined4 *)(lVar7 + 0x28) = param_8;
        FUN_004ae7e0(*(undefined8 *)(local_1c0 + 0x60),lVar7);
      }
      goto LAB_0130d160;
    }
    local_1a8 = (longlong *)FUN_01cc6f70(&PTR_FUN_01cba328,1,local_180);
    (**(code **)(*local_1a8 + 0x10))(local_1a8,param_2,0);
    local_b8 = (double)FUN_01cc92d0(local_1a8,param_2);
    local_c0 = (double)(**(code **)(*local_1a8 + 0xa0))(local_1a8,param_2);
    FUN_012e61d0(param_10,param_8,local_b8);
    FUN_012e6250(param_10,param_8,local_c0);
    local_1f8 = &local_98;
    FUN_0130b840(auStack_218,local_b8,local_c0,&local_90);
    if (param_5 == 0) {
LAB_0130c447:
      local_199 = '\x01';
    }
    else {
      iVar2 = FUN_012e6020(param_10,param_8);
      if (iVar2 != 2) goto LAB_0130c447;
      (**(code **)(*local_190 + 0x10))(local_190,local_198,0);
      local_a0 = (double)FUN_01cc92d0(local_190,local_198);
      local_a8 = (double)(**(code **)(*local_190 + 0xa0))(local_190,local_198);
      cVar1 = FUN_0130b4f0(auStack_218,local_90,local_a0,0x3f847ae147ae147b);
      if ((cVar1 == '\0') ||
         (cVar1 = FUN_0130b4f0(auStack_218,local_98,local_a8,0x3f847ae147ae147b), cVar1 == '\0')) {
        local_199 = '\0';
      }
      else {
        local_199 = '\x01';
      }
    }
    if (local_199 == '\0') {
      local_1f8 = (double *)0x130d538;
      local_1f0 = (double *)((ulonglong)local_1f0 & 0xffffffffffffff00);
      FUN_0130ea10(local_1c0,8,8,param_7);
    }
    else {
      iVar2 = FUN_01cc7250(local_88,param_2);
      FUN_00419260(&local_80,&DAT_0130b498,1,(longlong)iVar2);
      iVar2 = FUN_01cc7250(local_88,param_2);
      local_178 = 0;
      if (-1 < iVar2 + -1) {
        do {
          (**(code **)(*local_1a8 + 0x90))(local_1a8,local_128,&local_130,&local_138);
          lVar9 = (longlong)local_178;
          *(undefined8 *)(local_80 + lVar9 * 0x18) = local_128;
          uVar8 = FUN_00c44470(local_130,0xc059000000000000);
          *(undefined8 *)(local_80 + 8 + lVar9 * 0x18) = uVar8;
          *(double *)(local_80 + 0x10 + lVar9 * 0x18) = local_138 * 57.29577951308232;
          local_178 = local_178 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      if ((((((local_174 == 2) || (local_174 == 3)) || (local_174 == 5)) ||
           ((local_174 == 6 || (local_174 == 4)))) || (local_174 == 8)) ||
         ((local_174 == 9 || (local_174 == 0xb)))) {
        if (local_174 == 2) {
          if (PTR_DAT_02004010[0x913] == '\x01') {
            iVar2 = -0xb4;
          }
          else {
            iVar2 = 0;
          }
          local_1f8 = &local_120;
          FUN_01abe9a0(local_180,param_2,(double)iVar2,&local_118);
          local_170 = local_120;
        }
        else if (local_174 == 3) {
          if (PTR_DAT_02004010[0x913] == '\x01') {
            iVar2 = -0xb4;
          }
          else {
            iVar2 = 0;
          }
          local_1f8 = &local_120;
          FUN_01abeac0(local_180,param_2,(double)iVar2,&local_118);
          local_170 = local_120;
        }
        else if ((local_174 == 5) || (local_174 == 6)) {
          FUN_01cc0aa0(param_2,&local_e1);
          local_1f8 = &local_118;
          local_1f0 = &local_120;
          FUN_01abe230(local_88,param_2,local_e1,local_d9);
          if (local_174 == 5) {
            local_170 = local_118;
          }
          else if (local_174 == 6) {
            local_170 = local_120;
          }
        }
        else if (local_174 == 4) {
          FUN_01abe920(local_180,param_2,&local_118);
          local_170 = local_118;
        }
        else if (local_174 == 8) {
          local_170 = (double)FUN_0130b680(auStack_218);
        }
        else if (local_174 == 9) {
          local_170 = (double)FUN_0130b710(auStack_218,&local_c4);
        }
        else if (local_174 == 0xb) {
          FUN_0130b7b0(auStack_218);
          FUN_0130b710(auStack_218,&local_c4);
          (**(code **)(*local_1a8 + 0x98))
                    (local_1a8,*(undefined8 *)(local_80 + 8 + (longlong)local_c4 * 0x18),
                     *(undefined8 *)(local_80 + 0x10 + (longlong)local_c4 * 0x18));
          (**(code **)(*local_1a8 + 0x98))(local_1a8,0x4062d1d6ae4ff096,0x3ff536f45a0d71bc);
          (**(code **)(*local_1a8 + 0x60))(local_1a8,param_2);
          local_170 = (double)(**(code **)(*local_1a8 + 0x80))(local_1a8,param_2);
        }
        local_181 = '\x01';
      }
      else if (local_174 == 7) {
        iVar2 = FUN_01cc7250(local_1b0,local_198);
        FUN_00419260(&local_150,&DAT_0130b440,1,(longlong)iVar2);
        iVar2 = FUN_01cc7250(local_1b0,local_198);
        FUN_00419260(&local_80,&DAT_0130b498,1,(longlong)iVar2);
        iVar2 = FUN_01cc7250(local_1b0,local_198);
        local_178 = 0;
        if (-1 < iVar2 + -1) {
          do {
            (**(code **)(*local_190 + 0x88))(local_190,&local_128,&local_148);
            lVar9 = (longlong)local_178;
            *(undefined8 *)(local_150 + lVar9 * 0x18) = local_128;
            uVar8 = FUN_00c44470(local_148,0xc059000000000000);
            *(undefined8 *)(local_150 + 8 + lVar9 * 0x18) = uVar8;
            *(double *)(local_150 + 0x10 + lVar9 * 0x18) = local_140 * 57.29577951308232;
            (**(code **)(*local_1a8 + 0x90))(local_1a8,local_128,&local_130,&local_138);
            *(undefined8 *)(local_80 + lVar9 * 0x18) = local_128;
            uVar8 = FUN_00c44470(local_130,0xc059000000000000);
            *(undefined8 *)(local_80 + 8 + lVar9 * 0x18) = uVar8;
            *(double *)(local_80 + 0x10 + lVar9 * 0x18) = local_138 * 57.29577951308232;
            local_178 = local_178 + 1;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
        dVar13 = 0.0;
        dVar14 = 0.0;
        local_138 = 0.0;
        iVar2 = FUN_01cc7250(local_1b0,local_198);
        local_178 = 0;
        dVar10 = 0.0;
        dVar12 = 0.0;
        if (-1 < iVar2 + -1) {
          do {
            lVar9 = (longlong)local_178;
            local_130 = (double)FUN_0040c850(*(double *)(local_150 + 8 + lVar9 * 0x18) -
                                             *(double *)(local_80 + 8 + lVar9 * 0x18));
            dVar10 = (double)FUN_0040c850(*(undefined8 *)(local_150 + 8 + lVar9 * 0x18));
            local_130 = local_130 / (dVar10 + 1e-06);
            local_130 = local_130 * local_130;
            local_138 = local_138 + local_130;
            dVar10 = (double)FUN_0040c850(*(undefined8 *)(local_150 + 8 + lVar9 * 0x18));
            dVar12 = (double)FUN_0040c850(*(undefined8 *)(local_80 + 8 + lVar9 * 0x18));
            if (dVar10 <= dVar12) {
              dVar10 = dVar12;
            }
            dVar12 = (double)FUN_0040c850(*(double *)(local_150 + 8 + lVar9 * 0x18) -
                                          *(double *)(local_80 + 8 + (longlong)local_178 * 0x18));
            dVar12 = dVar12 / (dVar10 + 1e-06);
            dVar13 = dVar13 + dVar12 * dVar12;
            dVar12 = (double)FUN_0040c850(*(undefined8 *)(local_150 + 0x10 + lVar9 * 0x18));
            dVar10 = (double)FUN_0040c850(*(undefined8 *)
                                           (local_80 + 0x10 + (longlong)local_178 * 0x18));
            if (dVar10 < dVar12) {
              dVar10 = dVar12;
            }
            dVar10 = (*(double *)(local_150 + 0x10 + (longlong)local_178 * 0x18) -
                     *(double *)(local_80 + 0x10 + (longlong)local_178 * 0x18)) / (dVar10 + 1e-06);
            dVar14 = dVar14 + dVar10 * dVar10;
            local_178 = local_178 + 1;
            iVar2 = iVar2 + -1;
            dVar10 = dVar13;
            dVar12 = dVar14;
          } while (iVar2 != 0);
        }
        local_74 = FUN_01cc7250(local_1b0,local_198);
        dVar13 = (double)FUN_0040c760(dVar10 / (double)local_74);
        dVar13 = dVar13 * 100.0;
        dVar10 = (double)FUN_0040c760(dVar12 / (double)local_74);
        dVar10 = dVar10 * 100.0;
        if (*(char *)(local_1c0 + 0x10) == '\0') {
          if (dVar10 < dVar13) {
            dVar10 = dVar13;
          }
          *(double *)(*(longlong *)(local_1c0 + 0x18) + 0x10) = dVar10;
        }
        else {
          *(double *)(*(longlong *)(local_1c0 + 0x18) + 0x10) = dVar13;
          *(double *)(*(longlong *)(local_1c0 + 0x18) + 0x18) = dVar10;
        }
        *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)(*(longlong *)(local_1c0 + 0x18) + 0x10);
        *(undefined4 *)(lVar7 + 0x28) = param_8;
        FUN_004ae7e0(*(undefined8 *)(local_1c0 + 0x60),lVar7);
        FUN_00419430(&local_150,&DAT_0130b440);
        FUN_00419430(&local_80,&DAT_0130b498);
      }
    }
    goto LAB_0130d160;
  }
  local_74 = FUN_012e5880(param_10);
  local_88 = (longlong *)FUN_01cc6f70(&PTR_FUN_01cb8940,1,local_180);
  (**(code **)(*local_88 + 0x10))(local_88,param_2,0);
  FUN_0113f830(param_2,local_88,&local_b8,&local_c0);
  FUN_012e61d0(param_10,param_8,local_b8);
  FUN_012e6250(param_10,param_8,local_c0);
  if (param_5 != 0) {
    iVar2 = FUN_012e6020(param_10,param_8);
    if (iVar2 == 2) {
      if (local_b8 <= local_90) {
        local_b8 = local_90;
      }
      if (local_c0 <= local_98) {
        local_c0 = local_98;
      }
    }
  }
  local_1f8 = &local_98;
  FUN_0130b840(auStack_218,local_b8,local_c0,&local_90);
  if (param_5 == 0) {
LAB_0130bec4:
    local_199 = '\x01';
  }
  else {
    iVar2 = FUN_012e6020(param_10,param_8);
    if (iVar2 != 2) goto LAB_0130bec4;
    FUN_0113f830(local_198,local_1b0,&local_a0,&local_a8);
    local_1f8 = &local_a8;
    FUN_0130b840(auStack_218,local_b8,local_c0,&local_a0);
    cVar1 = FUN_0130b4f0(auStack_218,local_90,local_a0,0x3f847ae147ae147b);
    if ((cVar1 == '\0') ||
       (cVar1 = FUN_0130b4f0(auStack_218,local_98,local_a8,0x3f847ae147ae147b), cVar1 == '\0')) {
      local_199 = '\0';
    }
    else {
      local_199 = '\x01';
    }
  }
  if (local_199 == '\0') {
    local_1f8 = (double *)0x130d490;
    local_1f0 = (double *)((ulonglong)local_1f0 & 0xffffffffffffff00);
    FUN_0130ea10(local_1c0,8,6,param_7);
  }
  else {
    local_70 = (undefined1 *)FUN_00409570((longlong)((local_74 + 1) * 0x10));
    if (param_5 != 0) {
      iVar2 = FUN_012e6020(param_10,param_8);
      if (iVar2 == 2) {
        local_1b8 = (undefined1 *)FUN_00409570((longlong)((local_74 + 1) * 0x10));
      }
    }
    uVar8 = FUN_0113e810(&DAT_0113e408,1,0,0);
    local_1f8 = (double *)((local_98 - local_90) / (double)local_74);
    local_1f0 = (double *)CONCAT44(local_1f0._4_4_,local_74);
    local_1e8 = local_70;
    local_1e0 = (undefined1 *)((ulonglong)local_1e0 & 0xffffffffffffff00);
    FUN_0113eac0(uVar8,param_2,local_88,local_90);
    if ((param_5 != 0) && (iVar2 = FUN_012e6020(param_10,param_8), iVar2 == 2)) {
      local_1f8 = (double *)((local_a8 - local_a0) / (double)local_74);
      local_1f0 = (double *)CONCAT44(local_1f0._4_4_,local_74);
      local_1e8 = local_1b8;
      local_1e0 = (undefined1 *)((ulonglong)local_1e0 & 0xffffffffffffff00);
      FUN_0113eac0(uVar8,local_198,local_1b0,local_a0);
    }
    FUN_00410f20(uVar8);
    dVar10 = 0.0;
    if ((((local_174 == 5) || (local_174 == 6)) || (local_174 == 8)) || (local_174 == 9)) {
      if ((local_174 == 5) || (local_174 == 6)) {
        FUN_01cc0aa0(param_2,&local_e1);
        local_1f8 = &local_118;
        local_1f0 = &local_120;
        FUN_01abe230(local_88,param_2,local_e1,local_d9);
        if (local_174 == 5) {
          local_170 = local_118;
        }
        else if (local_174 == 6) {
          local_170 = local_120;
        }
      }
      else if (local_174 == 8) {
        local_170 = (double)FUN_0130b5a0(auStack_218);
      }
      else if (local_174 == 9) {
        local_170 = (double)FUN_0130b610(auStack_218);
      }
      local_181 = '\x01';
    }
    else if (local_174 == 7) {
      local_178 = 0;
      iVar2 = local_74;
      if (-1 < local_74 + -1) {
        do {
          if ((param_5 == 0) || (iVar6 = FUN_012e6020(param_10,param_8), iVar6 != 2)) {
            dVar12 = (dVar11 - *(double *)(local_70 + (longlong)local_178 * 0x10)) / dVar11;
            dVar12 = dVar12 * dVar12;
          }
          else {
            dVar12 = (*(double *)(local_1b8 + (longlong)local_178 * 0x10) -
                     *(double *)(local_70 + (longlong)local_178 * 0x10)) / dVar11;
            dVar12 = dVar12 * dVar12;
          }
          dVar10 = dVar10 + dVar12;
          local_178 = local_178 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      dVar10 = (double)FUN_0040c760(dVar10 / (double)local_74);
      *(double *)(*(longlong *)(local_1c0 + 0x18) + 0x10) = dVar10 * 100.0;
      *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)(*(longlong *)(local_1c0 + 0x18) + 0x10);
      *(undefined4 *)(lVar7 + 0x28) = param_8;
      FUN_004ae7e0(*(undefined8 *)(local_1c0 + 0x60),lVar7);
    }
  }
LAB_0130d160:
  if (local_70 != (undefined1 *)0x0) {
    FUN_004095f0(local_70);
  }
  if (((param_5 != 0) && (iVar2 = FUN_012e6020(param_10,param_8), iVar2 == 2)) &&
     (local_1b8 != (undefined1 *)0x0)) {
    FUN_004095f0(local_1b8);
  }
  if ((local_174 == 7) && (param_6 != '\x04')) {
    local_1f8 = &local_f0;
    local_1f0 = &local_f8;
    local_1e8 = local_100;
    local_1e0 = local_108;
    local_1d8 = local_110;
    FUN_01abde90(local_88,param_2,local_90,local_98);
    *(double *)(lVar7 + 0x20) = local_f0;
  }
  if (local_181 != '\0') {
    if (local_170 == 0.0) {
      *(undefined8 *)(*(longlong *)(local_1c0 + 0x18) + 0x10) = 0x4059000000000000;
    }
    else {
      dVar11 = (double)FUN_0040c850(local_170 / dVar11);
      *(double *)(*(longlong *)(local_1c0 + 0x18) + 0x10) = (1.0 - dVar11) * 100.0;
    }
    *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)(*(longlong *)(local_1c0 + 0x18) + 0x10);
    *(double *)(lVar7 + 0x20) = local_170;
    *(undefined4 *)(lVar7 + 0x28) = param_8;
    FUN_004ae7e0(*(undefined8 *)(local_1c0 + 0x60),lVar7);
    local_199 = '\x01';
  }
  if (local_199 != '\0') {
    if (param_6 == '\x04') {
      FUN_00410f20(local_1a8);
    }
    else {
      FUN_00410f20(local_88);
    }
  }
  if (param_6 == '\x04') {
    if (param_5 != 0) {
      FUN_00410f20(local_190);
    }
  }
  else if (param_5 != 0) {
    FUN_00410f20(local_1b0);
  }
  FUN_00414560(&local_168,2);
  FUN_00419430(&local_150,&DAT_0130b440);
  FUN_00414480(&local_d0);
  FUN_00419430(&local_80,&DAT_0130b498);
  return local_199;
}

