/* Ghidra address: 00f80160 */
/* Ghidra symbol: FUN_00f80160 */


undefined1 FUN_00f80160(longlong param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auStack_338 [32];
  undefined8 *local_318;
  undefined8 *local_310;
  int *local_308;
  int *local_300;
  undefined1 local_2f1;
  longlong *local_2f0;
  longlong *local_2e8;
  longlong *local_2e0;
  longlong *local_2d8;
  longlong *local_2d0;
  int local_2c4;
  undefined8 local_2c0;
  int local_2b4;
  undefined4 local_2b0;
  int local_2ac;
  longlong local_2a8;
  longlong local_2a0;
  longlong *local_298;
  int local_290;
  int local_28c;
  undefined8 local_288;
  undefined8 local_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 local_240 [2];
  double *local_230;
  double *local_228;
  undefined8 local_220;
  undefined8 local_218;
  longlong local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0 [35];
  int local_98;
  int local_94;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 local_70 [4];
  undefined4 local_6c;
  longlong *local_68;
  longlong local_60;
  
  local_288 = 0;
  local_280 = 0;
  local_278 = 0;
  local_270 = 0;
  local_268 = 0;
  local_260 = 0;
  local_258 = 0;
  local_250 = 0;
  local_248 = 0;
  local_240[0] = 0;
  local_78 = 0;
  local_80 = 0;
  local_1b0[0] = 0;
  local_1b8 = 0;
  local_1c0 = 0;
  local_1c8 = 0;
  local_1d0 = 0;
  local_1d8 = 0;
  local_1e0 = 0;
  local_1e8 = 0;
  local_1f0 = 0;
  local_1f8 = 0;
  local_200 = 0;
  local_208 = 0;
  local_210 = 0;
  local_2f1 = 1;
  local_2c0 = param_2;
  local_2a0 = param_3;
  _Diag_GetCurveNames(param_2,0,&local_218,&local_220);
  FUN_004167d0(&local_200,local_218);
  FUN_004167d0(&local_208,local_220);
  local_2f0 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_004b4b10(local_2f0,local_200);
  local_2e8 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_004b4b10(local_2e8,local_208);
  local_2e0 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  local_68 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  local_2d8 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  if (local_2a0 == 0) {
    dVar9 = 0.0;
  }
  else {
    dVar9 = *(double *)(local_2a0 + 0x888);
  }
  iVar3 = (**(code **)(*local_2f0 + 0x28))(local_2f0);
  local_2a8 = FUN_00409570((longlong)(iVar3 << 5));
  local_2d0 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined2 *)((longlong)local_2d0 + 0x2c) = 0x3b;
  uVar7 = _BusDisplay_GetData(local_2c0);
  FUN_004167d0(param_1 + 0x28,uVar7);
  local_298 = (longlong *)FUN_01b21300(*(undefined8 *)(param_1 + 0x28),&DAT_00f81064,0);
  local_2b4 = 0;
  if (*(longlong *)(param_1 + 0x28) != 0) {
    local_2b4 = *(int *)(*(longlong *)(param_1 + 0x28) + -4);
  }
  if (1 < local_2b4) {
    (**(code **)(*local_298 + 0x18))(local_298,local_240,0);
    FUN_004b50b0(local_2d0,local_240[0]);
  }
  if ((1 < local_2b4) &&
     (*(short *)(*(longlong *)(param_1 + 0x28) + -2 + (longlong)local_2b4 * 2) != 0x24)) {
    (**(code **)(*local_298 + 0x18))(local_298,&local_248,1);
    FUN_004b50b0(local_2d8,local_248);
  }
  FUN_00410f20(local_298);
  iVar3 = (**(code **)(*local_2f0 + 0x28))();
  local_2c4 = 0;
  if (-1 < iVar3 + -1) {
    do {
      (**(code **)(*local_2e8 + 0x18))(local_2e8,&local_250,local_2c4);
      local_290 = FUN_0043fc00(local_250);
      local_290 = local_290 + -1;
      local_318 = (undefined8 *)((longlong)&local_90 + 4);
      local_310 = &local_90;
      local_308 = &local_94;
      local_300 = &local_98;
      _Diag_GetCurveData(local_2c0,local_2c4,&local_228,&local_6c);
      local_230 = local_228;
      if (local_228 != (double *)0x0) {
        (**(code **)(*local_2f0 + 0x18))(local_2f0,local_1b0,local_2c4);
        local_318 = &local_1c8;
        local_310 = &local_1d0;
        local_308 = (int *)&local_1d8;
        local_300 = (int *)&local_1e0;
        FUN_01b21cd0(local_1b0[0],0x3a,&local_1b8,&local_1c0);
        FUN_00414b50(&local_78,local_1b8);
        FUN_00414b50(&local_210,local_1c0);
        FUN_0043fc00(local_1c8);
        local_28c = FUN_0043fc00(local_1d0);
        FUN_0043fc00(local_1d8);
        local_2b0 = FUN_0043fc00(local_1e0);
        local_318 = (undefined8 *)local_70;
        cVar1 = FUN_0160e4d0(local_2d0,local_2b0,1,0);
        if (local_28c != 1) {
          FUN_015f44d0(&local_80,local_78);
          FUN_00f7fb60(&local_1f0,local_6c);
          iVar4 = FUN_00416db0(local_1f0,&DAT_00f81074);
          if (iVar4 == 0) {
            local_2b4 = local_98 + -8;
          }
          else {
            local_2b4 = 1;
          }
          if ((-1 < local_290) &&
             (iVar4 = (**(code **)(*local_2f0 + 0x28))(local_2f0), local_290 < iVar4)) {
            if (local_210 == 0) {
              FUN_0043f750(&local_258,local_2c4);
              FUN_00416ba0(&local_210,&PTR_u_HAN__00f81084,local_258);
            }
            local_60 = FUN_00f81ad0(*(undefined8 *)(param_1 + 8),local_210);
            if (local_60 == 0) {
              local_60 = FUN_00f81c30(*(undefined8 *)(param_1 + 8),local_80,local_210);
              FUN_00414ad0(local_60 + 0x18,local_1f0);
              *(int *)(local_60 + 0x20) = local_290 + 1;
              *(undefined4 *)(local_60 + 0x28) = local_2b0;
              *(int *)(local_60 + 0x24) = local_2b4;
              if (local_28c == 3) {
                *(undefined1 *)(local_60 + 0x38) = 1;
              }
            }
            if ((cVar1 == '\0') && (iVar4 = local_94, -1 < local_94 + -1)) {
              do {
                dVar10 = *local_230;
                cVar1 = FUN_00526f10(dVar10);
                if (cVar1 != '\0') {
                  dVar10 = 0.0;
                }
                FUN_00b909d0(&local_230,8);
                iVar5 = FUN_00416db0(local_1f0,&DAT_00f81098);
                if ((iVar5 == 0) || (iVar5 = FUN_00416db0(local_1f0,&DAT_00f810a8), iVar5 == 0)) {
                  iVar5 = FUN_00416db0(local_1f0,&DAT_00f81098);
                  if (iVar5 == 0) {
                    dVar11 = *local_230;
                    FUN_00b909d0(&local_230,8);
                  }
                  else {
                    dVar11 = (double)*(int *)local_230;
                    FUN_00b909d0(&local_230,4);
                  }
                  if (dVar9 <= dVar10) {
                    lVar8 = (longlong)local_2c4;
                    if ((*(char *)(local_2a8 + 0x18 + lVar8 * 0x20) == '\0') && (dVar9 < dVar10)) {
                      FUN_00f819b0(local_60,dVar9,*(undefined8 *)(local_2a8 + 8 + lVar8 * 0x20));
                    }
                    FUN_00f819b0(local_60,dVar10,dVar11);
                    *(undefined1 *)(local_2a8 + 0x18 + lVar8 * 0x20) = 1;
                  }
                  *(double *)(local_2a8 + 8 + (longlong)local_2c4 * 0x20) = dVar11;
                }
                else {
                  iVar5 = FUN_00416db0(local_1f0,&DAT_00f81074);
                  if (iVar5 == 0) {
                    uVar7 = FUN_00f7fc60(local_2b4,&local_230);
                    if (dVar9 <= dVar10) {
                      if ((*(char *)(local_2a8 + 0x18 + (longlong)local_2c4 * 0x20) == '\0') &&
                         (dVar9 < dVar10)) {
                        FUN_00f81980(local_60,dVar9,
                                     *(undefined8 *)(local_2a8 + 0x10 + (longlong)local_2c4 * 0x20))
                        ;
                      }
                      FUN_00f81980(local_60,dVar10,uVar7);
                      *(undefined1 *)(local_2a8 + 0x18 + (longlong)local_2c4 * 0x20) = 1;
                    }
                    *(undefined8 *)(local_2a8 + 0x10 + (longlong)local_2c4 * 0x20) = uVar7;
                  }
                  else {
                    iVar5 = *(int *)local_230;
                    FUN_00b909d0(&local_230,4);
                    if (dVar9 <= dVar10) {
                      if ((*(char *)(local_2a8 + 0x18 + (longlong)local_2c4 * 0x20) == '\0') &&
                         (dVar9 < dVar10)) {
                        FUN_00f81950(local_60,dVar9,
                                     *(undefined4 *)(local_2a8 + (longlong)local_2c4 * 0x20));
                      }
                      FUN_00f81950(local_60,dVar10,iVar5);
                      *(undefined1 *)(local_2a8 + 0x18 + (longlong)local_2c4 * 0x20) = 1;
                    }
                    *(int *)(local_2a8 + (longlong)local_2c4 * 0x20) = iVar5;
                  }
                }
                iVar4 = iVar4 + -1;
              } while (iVar4 != 0);
            }
          }
        }
      }
      local_2c4 = local_2c4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  iVar3 = (**(code **)(*local_2d0 + 0x28))(local_2d0);
  if (0 < iVar3) {
    (**(code **)(*local_2e0 + 0x90))(local_2e0);
    (**(code **)(*local_68 + 0x90))(local_68);
    iVar3 = *(int *)(*(longlong *)(param_1 + 8) + 0x10);
    local_2c4 = 0;
    if (-1 < iVar3 + -1) {
      do {
        local_60 = FUN_00f81cc0(*(undefined8 *)(param_1 + 8),local_2c4);
        local_318 = (undefined8 *)local_70;
        FUN_0160e4d0(local_2d0,*(undefined4 *)(local_60 + 0x28),2,local_2e0);
        local_2c4 = local_2c4 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    iVar3 = (**(code **)(*local_2e0 + 0x28))();
    local_2c4 = 0;
    if (-1 < iVar3 + -1) {
      do {
        (**(code **)(*local_2e0 + 0x18))(local_2e0,&local_260,local_2c4);
        local_2b0 = FUN_0043fc00(local_260);
        FUN_0160e790(&local_1b8,local_2d0,local_2b0);
        local_298 = (longlong *)FUN_01b21480(local_1b8);
        iVar4 = (**(code **)(*local_298 + 0x28))();
        local_2ac = 0;
        if (-1 < iVar4 + -1) {
          do {
            (**(code **)(*local_298 + 0x18))(local_298,&local_268,local_2ac);
            iVar5 = (**(code **)(*local_68 + 0xb0))(local_68,local_268);
            if (iVar5 == -1) {
              (**(code **)(*local_298 + 0x18))(local_298,&local_270,local_2ac);
              (**(code **)(*local_68 + 0x78))(local_68,local_270);
            }
            local_2ac = local_2ac + 1;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
        FUN_00410f20(local_298);
        local_2c4 = local_2c4 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    uVar7 = 0xbff0000000000000;
    while (dVar9 = (double)FUN_00f7ffb0(auStack_338,uVar7,&local_88), uVar7 = local_88,
          dVar9 < 1e+30) {
      iVar3 = (**(code **)(*local_2e0 + 0x28))();
      local_2c4 = 0;
      if (-1 < iVar3 + -1) {
        do {
          (**(code **)(*local_2e0 + 0x18))(local_2e0,&local_278,local_2c4);
          local_2b0 = FUN_0043fc00(local_278);
          FUN_0160e790(&local_1b8,local_2d0,local_2b0);
          local_298 = (longlong *)FUN_01b21480(local_1b8);
          iVar4 = (**(code **)(*local_298 + 0x28))(local_298);
          lVar8 = FUN_00409570((longlong)iVar4);
          iVar4 = (**(code **)(*local_298 + 0x28))(local_298);
          local_2ac = 0;
          local_2b4 = iVar4;
          if (-1 < iVar4 + -1) {
            do {
              (**(code **)(*local_298 + 0x18))(local_298,&local_280,local_2ac);
              uVar6 = FUN_0043fc00(local_280);
              local_60 = FUN_00f800e0(auStack_338,uVar6);
              FUN_0043f750(&local_288,uVar6);
              iVar5 = (**(code **)(*local_2d8 + 0xb0))(local_2d8,local_288);
              if (iVar5 == -1) {
                *(undefined1 *)(local_60 + 0x38) = 1;
              }
              uVar2 = FUN_00f81700(local_60,uVar7);
              *(undefined1 *)(lVar8 + -1 + (longlong)(local_2ac + 1)) = uVar2;
              local_2ac = local_2ac + 1;
              iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
          }
          local_60 = FUN_00f800e0(auStack_338,local_2b0);
          if (local_60 != 0) {
            FUN_00414ad0(local_60 + 0x18,&DAT_00f81074);
            *(int *)(local_60 + 0x24) = local_2b4;
            FUN_00f81980(local_60,uVar7,lVar8);
          }
          FUN_00410f20(local_298);
          local_2c4 = local_2c4 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
    }
  }
  FUN_00410f20(local_2f0);
  FUN_00410f20(local_2e8);
  FUN_00410f20(local_2d0);
  FUN_00410f20(local_2e0);
  FUN_00410f20(local_68);
  FUN_00410f20(local_2d8);
  FUN_00414560(&local_288,10);
  FUN_00414560(&local_210,0xd);
  FUN_00414560(&local_80,2);
  return local_2f1;
}

