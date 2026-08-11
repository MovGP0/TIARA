/* Ghidra address: 01cfe960 */
/* Ghidra symbol: FUN_01cfe960 */


void FUN_01cfe960(longlong *param_1)

{
  double dVar1;
  double dVar2;
  undefined1 uVar3;
  char cVar4;
  ushort uVar5;
  undefined2 uVar6;
  int iVar7;
  short sVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_268 [32];
  char *local_248;
  undefined1 *local_240;
  longlong *local_238;
  int local_22c;
  undefined2 local_226;
  int local_224;
  longlong *local_220;
  char local_213;
  short local_212;
  short local_210;
  short local_20e;
  char local_20b;
  short local_20a;
  short local_208;
  byte local_205;
  ushort local_204;
  short local_202;
  short local_200;
  byte local_1fd;
  short local_1fc;
  short local_1fa;
  double local_1f8;
  undefined1 local_1f0 [256];
  undefined8 local_f0;
  undefined8 local_e8;
  byte local_df [42];
  undefined4 local_b5 [10];
  ushort local_8c;
  ushort local_8a;
  longlong local_88;
  longlong local_80;
  double local_78;
  ushort local_6a;
  double *local_68;
  int local_5c;
  longlong *local_58;
  undefined1 local_4b;
  char local_4a;
  undefined1 local_49 [41];
  
  local_f0 = 0;
  local_e8 = 0;
  local_226 = *(undefined2 *)((longlong)param_1 + 0xec);
  local_238 = param_1;
  local_220 = param_1;
  local_213 = FUN_01cffd90(param_1,param_1);
  local_224 = 0;
  local_205 = 0;
  local_212 = 1;
  FUN_01d3d920(local_220,0xe,0,&local_8a);
  local_20e = -1;
  sVar8 = 1;
  local_208 = local_8a - 1;
  cVar4 = FUN_01d3ee20(local_220);
  if (cVar4 != '\0') {
    sVar8 = 2;
    local_20e = local_8a - 2;
  }
  local_210 = local_8a - (sVar8 + 1);
  local_20a = local_8a - (sVar8 + 2);
  local_58 = (longlong *)FUN_01d013c0(local_238,0);
  local_20b = FUN_01d03590(local_220);
  local_202 = FUN_01d03160(local_238);
  cVar4 = FUN_01d3f8b0(local_202,local_df);
  if (cVar4 == '\0') {
    local_204 = FUN_01d03430(local_238);
  }
  else {
    local_204 = (ushort)local_df[0];
  }
  local_1fd = 0;
  cVar4 = FUN_01d3d5e0(local_202);
  if (cVar4 != '\0') {
    local_1fd = 1;
    local_22c = 0;
  }
  do {
    local_200 = FUN_01d03160(local_58);
    if ((local_1fd & local_200 == 0x3f6) != 0) {
      local_22c = local_22c + 1;
    }
    iVar7 = FUN_01cfd2d0();
    local_5c = 0;
    if (-1 < iVar7 + -1) {
      do {
        cVar4 = (**(code **)(*local_58 + 0x2d0))(local_58,local_5c,&local_80);
        FUN_01d3d920(local_58,0xe,0,&local_8c);
        sVar8 = local_8c - 2;
        local_1fa = local_8c - 3;
        local_1fc = local_8c - 4;
        if (cVar4 == '\x04') {
          cVar4 = FUN_01d3d5c0(local_202);
          if (cVar4 == '\0') {
            if (local_202 == 15000) {
              cVar4 = FUN_01d3d590(local_200);
              if (cVar4 != '\0') {
                if (local_22c == 1) {
                  local_248 = &local_4a;
                  local_240 = &local_4b;
                  local_68 = (double *)FUN_01cfde70(local_220,(longlong)local_212,1,local_49);
                  dVar1 = *local_68;
                  local_248 = &local_4a;
                  local_240 = &local_4b;
                  local_68 = (double *)FUN_01cfde70(local_220,(longlong)local_212,2,local_49);
                  dVar2 = *local_68;
                  if (local_202 == 15000) {
                    local_1f8 = (double)FUN_0040c2f0(0x4000000000000000);
                    local_1f8 = dVar1 * dVar2 * local_1f8;
                  }
                  else if (local_202 == 0x3a99) {
                    local_1f8 = (dVar1 + 1e-12) * 0.28 * dVar2 * (0.7 / dVar2 + 1.0);
                  }
                  local_248 = &local_4a;
                  local_240 = &local_4b;
                  local_68 = (double *)FUN_01cfde70(local_58,local_5c + 1,1,local_49);
                  *local_68 = local_1f8;
                  local_248 = &local_4a;
                  local_240 = &local_4b;
                  local_68 = (double *)FUN_01cfde70(local_58,local_5c + 1,2,local_49);
                  *local_68 = local_1f8;
                }
                local_248 = &local_4a;
                local_240 = &local_4b;
                local_68 = (double *)FUN_01cfde70(local_58,local_5c + 1,3,local_49);
                *(ushort *)local_68 = local_204;
              }
              local_b5[0] = 0x4c545403;
              local_4b = FUN_01d3d860(local_b5);
              FUN_01d03190(local_58,local_4b,2);
            }
            else if (local_202 == 0x3a99) {
              if (*(short *)((longlong)local_238 + 0xec) == 7) {
                local_248 = &local_4a;
                local_240 = &local_4b;
                local_68 = (double *)FUN_01cfde70(local_220,(longlong)local_212,1,local_49);
                dVar1 = *local_68;
                local_248 = &local_4a;
                local_240 = &local_4b;
                local_68 = (double *)FUN_01cfde70(local_220,(longlong)local_212,2,local_49);
                local_1f8 = (dVar1 + 1e-12) * 0.28 * *local_68 * (0.7 / *local_68 + 1.0);
                local_248 = &local_4a;
                local_240 = &local_4b;
                local_68 = (double *)FUN_01cfde70(local_58,local_5c + 1,1,local_49);
                *local_68 = local_1f8;
              }
              local_b5[0] = 0x4c545403;
              local_4b = FUN_01d3d860(local_b5);
              FUN_01d03190(local_58,local_4b,2);
            }
            else {
              cVar4 = FUN_01d3d590(local_200);
              if (((cVar4 != '\0') && (cVar4 = FUN_01d40050(local_200), cVar4 == '\0')) &&
                 (local_204 != 0xffff)) {
                local_205 = *(byte *)(*(longlong *)(local_80 + 0x26) + 0x21);
                local_248 = &local_4a;
                local_240 = &local_4b;
                local_68 = (double *)FUN_01cfde70(local_58,local_5c + 1,local_205,local_49);
                if (local_4a == '\x02') {
                  *(ushort *)local_68 = local_204;
                }
              }
              if (local_213 != '\0') {
                (**(code **)(*local_220 + 0x2d0))(local_220,local_212 + -1,&local_88);
              }
              if (local_213 == '\0') {
                cVar4 = FUN_01d013a0(local_58);
                if ((cVar4 != '\0') && (cVar4 = FUN_01d3d560(local_200), cVar4 != '\0')) {
                  local_6a = FUN_01d03330(local_238);
                  local_205 = *(byte *)(*(longlong *)(local_80 + 0x26) + 0x21);
                  local_248 = &local_4a;
                  local_240 = &local_4b;
                  local_68 = (double *)FUN_01cfde70(local_58,local_5c + 1,local_205,local_49);
                  if (local_4a == '\x02') {
                    *(ushort *)local_68 = local_6a;
                  }
                }
              }
              else if (((local_200 != 0x889) && (cVar4 = FUN_01d013a0(local_58), cVar4 != '\0')) &&
                      (cVar4 = FUN_01d3d560(local_200), cVar4 != '\0')) {
                local_205 = *(undefined1 *)(*(longlong *)(local_88 + 0x26) + 0x21);
                local_248 = &local_4a;
                local_240 = &local_4b;
                local_68 = (double *)FUN_01cfde70(local_220,(longlong)local_212,local_205,local_49);
                if (local_4a == '\x02') {
                  local_6a = *(ushort *)local_68;
                }
                local_205 = *(byte *)(*(longlong *)(local_80 + 0x26) + 0x21);
                local_248 = &local_4a;
                local_240 = &local_4b;
                local_68 = (double *)FUN_01cfde70(local_58,local_5c + 1,local_205,local_49);
                if (local_4a == '\x02') {
                  *(ushort *)local_68 = local_6a;
                }
              }
              if (local_213 == '\0') {
                local_4b = FUN_01d031b0(local_238);
                FUN_01d03190(local_58,local_4b,2);
              }
              else {
                FUN_01d3d880(&local_f0,local_88);
                FUN_00416910(local_1f0,local_f0,0xff);
                FUN_00415020(local_b5,local_1f0,0x28);
                local_4b = FUN_01d3d860(local_b5);
                FUN_01d03190(local_58,local_4b,2);
                if ((char)local_58[0x2b] == '\0') {
                  local_205 = *(byte *)(*(longlong *)(local_80 + 0x26) + 0x21);
                  cVar4 = FUN_01d3d530(local_200);
                  if ((((cVar4 != '\0') || (local_200 == 0x45d)) || (local_200 == 0x889)) ||
                     ((cVar4 = FUN_01d3d590(local_200), cVar4 != '\0' && (local_20b == '\0')))) {
                    local_205 = local_205 - 1;
                  }
                  if (local_200 == 0x45d) {
                    local_205 = local_205 - 1;
                  }
                  local_248 = &local_4a;
                  local_240 = &local_4b;
                  local_68 = (double *)
                             FUN_01cfde70(local_220,(longlong)local_212,local_224 + 1,local_49);
                  uVar10 = (uint)local_205;
                  iVar9 = 0;
                  if (-1 < (int)(uVar10 - 1)) {
                    do {
                      local_248 = &local_4a;
                      local_240 = &local_4b;
                      local_68 = (double *)
                                 FUN_01cfde70(local_220,(longlong)local_212,local_224 + iVar9 + 1,
                                              local_49);
                      if (local_4a == '\x02') {
                        local_6a = *(ushort *)local_68;
                      }
                      else if (local_4a == '\x03') {
                        local_78 = *local_68;
                      }
                      FUN_01cfe8c0(auStack_268,iVar9);
                      if (local_200 == 0x45d) {
                        FUN_01cfe8c0(auStack_268,iVar9 + 1);
                      }
                      iVar9 = iVar9 + 1;
                      uVar10 = uVar10 - 1;
                    } while (uVar10 != 0);
                  }
                }
              }
            }
          }
        }
        else if (cVar4 == '\b') {
          cVar4 = FUN_01d3ee20(local_220);
          if ((cVar4 != '\0') && (local_5c == sVar8 + -1)) {
            local_248 = &local_4a;
            local_240 = &local_4b;
            local_68 = (double *)FUN_01cfde70(local_220,(longlong)local_20e,0,local_49);
            uVar3 = *(undefined1 *)local_68;
            local_248 = &local_4a;
            local_240 = &local_4b;
            local_68 = (double *)FUN_01cfde70(local_58,(longlong)sVar8,0,local_49);
            *(undefined1 *)local_68 = uVar3;
          }
          cVar4 = FUN_01d01390(local_58);
          if ((cVar4 != '\0') && (local_5c == local_1fc + -1)) {
            local_248 = &local_4a;
            local_240 = &local_4b;
            local_68 = (double *)FUN_01cfde70(local_220,(longlong)local_20a,0,local_49);
            uVar3 = *(undefined1 *)local_68;
            local_248 = &local_4a;
            local_240 = &local_4b;
            local_68 = (double *)FUN_01cfde70(local_58,(longlong)local_1fc,0,local_49);
            *(undefined1 *)local_68 = uVar3;
          }
          cVar4 = FUN_01d013a0(local_58);
          if ((cVar4 != '\0') && (local_5c == local_1fa + -1)) {
            local_248 = &local_4a;
            local_240 = &local_4b;
            local_68 = (double *)FUN_01cfde70(local_220,(longlong)local_210,0,local_49);
            uVar3 = *(undefined1 *)local_68;
            local_248 = &local_4a;
            local_240 = &local_4b;
            local_68 = (double *)FUN_01cfde70(local_58,(longlong)local_1fa,0,local_49);
            *(undefined1 *)local_68 = uVar3;
          }
        }
        else if (cVar4 == '\t') {
          if (local_5c == (short)(local_8c - 1) + -1) {
            uVar5 = FUN_01d03160(local_220);
            if ((uVar5 < 40000) || (uVar5 = FUN_01d03160(local_220), 0x9c48 < uVar5)) {
              (**(code **)(*local_220 + 0x2d0))(local_220,local_208 + -1,&local_88);
              *(undefined2 *)(local_80 + 0x1f) = *(undefined2 *)(local_88 + 0x1f);
            }
            else {
              uVar5 = FUN_01d03160(local_220);
              if (((uVar5 < 40000) || (uVar5 = FUN_01d03160(local_220), 0x9c45 < uVar5)) &&
                 (sVar8 = FUN_01d03160(local_220), sVar8 != -0x63b9)) {
                sVar8 = FUN_01d03160(local_220);
                if (sVar8 == -0x63ba) {
                  uVar6 = (**(code **)(*local_220 + 0x210))(local_220,0xc);
                  *(undefined2 *)(local_80 + 0x1f) = uVar6;
                }
                else {
                  uVar6 = (**(code **)(*local_220 + 0x210))(local_220,0xb);
                  *(undefined2 *)(local_80 + 0x1f) = uVar6;
                }
              }
              else {
                uVar6 = (**(code **)(*local_220 + 0x210))(local_220,6);
                *(undefined2 *)(local_80 + 0x1f) = uVar6;
              }
            }
          }
          if (local_5c == local_8c - 1) {
            uVar5 = FUN_01d03160(local_220);
            if ((uVar5 < 40000) || (uVar5 = FUN_01d03160(local_220), 0x9c48 < uVar5)) {
              (**(code **)(*local_220 + 0x2d0))(local_220,local_8a - 1,&local_88);
              *(undefined2 *)(local_80 + 0x1f) = *(undefined2 *)(local_88 + 0x1f);
            }
            else {
              uVar5 = FUN_01d03160(local_220);
              if (((uVar5 < 40000) || (uVar5 = FUN_01d03160(local_220), 0x9c45 < uVar5)) &&
                 (sVar8 = FUN_01d03160(local_220), sVar8 != -0x63b9)) {
                uVar6 = (**(code **)(*local_220 + 0x210))(local_220,4);
                *(undefined2 *)(local_80 + 0x1f) = uVar6;
              }
              else {
                uVar6 = (**(code **)(*local_220 + 0x210))(local_220,0xd);
                *(undefined2 *)(local_80 + 0x1f) = uVar6;
              }
            }
          }
        }
        local_5c = local_5c + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    if ((local_58 != (longlong *)0x0) && ((char)local_58[0x2b] == '\0')) {
      local_224 = local_224 + (uint)local_205;
    }
    FUN_01d018f0(local_220);
    local_58 = (longlong *)FUN_01d013c0(local_220,0);
  } while (local_58 != (longlong *)0x0);
  *(undefined2 *)((longlong)local_238 + 0xec) = local_226;
  FUN_00414560(&local_f0,2);
  return;
}

