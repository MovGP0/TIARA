/* Ghidra address: 00c332b0 */
/* Ghidra symbol: FUN_00c332b0 */


void FUN_00c332b0(longlong *param_1,byte param_2)

{
  char cVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  code *pcVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined8 uVar11;
  bool bVar12;
  undefined1 auStack_128 [32];
  uint local_108;
  undefined1 *local_100;
  undefined8 local_f8;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined1 local_a0 [16];
  undefined1 *local_90;
  int local_78;
  int local_74;
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  undefined8 local_40;
  uint local_34;
  int local_30;
  int local_2c;
  
  local_90 = auStack_128;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  cVar1 = (**(code **)(*param_1 + 0x40))(param_1);
  if (cVar1 == '\0') {
    FUN_00c354f0(param_1);
    FUN_00c35490(param_1);
    local_108 = 0;
    FUN_004238d0(local_a0,0,0,0);
    FUN_0041ddd0(&local_a8,PTR_LAB_020054c8);
    pcVar6 = (code *)FUN_00411550(param_1,0xfffd);
    local_108 = local_108 & 0xffffff00;
    local_100 = local_a0;
    local_f8 = local_a8;
    (*pcVar6)(param_1,param_1,0,0);
    local_74 = 0;
    local_78 = FUN_00c1aa10(param_1[10]);
    local_78 = local_78 << 3;
    if ((param_2 & 8) != 0) {
      lVar7 = FUN_00c360e0(param_1);
      if (0 < *(int *)(lVar7 + 0x10)) {
        plVar8 = (longlong *)FUN_00c360e0(param_1);
        (**(code **)(*plVar8 + 0x30))(plVar8);
      }
      iVar4 = FUN_00c1aa10();
      local_2c = 0;
      if (-1 < iVar4 + -1) {
        do {
          local_74 = local_74 + 1;
          lVar7 = FUN_00c2fce0(param_1[10],local_2c);
          if (0 < *(int *)(*(longlong *)(lVar7 + 0x40) + 0x10)) {
            lVar7 = FUN_00c2fce0(param_1[10],local_2c);
            (**(code **)(**(longlong **)(lVar7 + 0x40) + 0x30))(*(longlong **)(lVar7 + 0x40));
            thunk_FUN_03f3ed25(local_74,100,local_78);
            local_108 = 0;
            FUN_004238d0(local_a0,0,0,0);
            FUN_0041ddd0(&local_b0,PTR_LAB_020054c8);
            pcVar6 = (code *)FUN_00411550(param_1,0xfffd);
            local_108 = local_108 & 0xffffff00;
            local_100 = local_a0;
            local_f8 = local_b0;
            (*pcVar6)(param_1,param_1,1);
          }
          local_2c = local_2c + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
    }
    if ((param_2 & 4) == 0) {
      iVar4 = FUN_00c1aa10(param_1[10]);
      local_74 = local_74 + iVar4 * 2;
    }
    else {
      iVar4 = FUN_00c1aa10();
      local_2c = 0;
      if (-1 < iVar4 + -1) {
        do {
          local_74 = local_74 + 1;
          uVar9 = FUN_00c2fce0(param_1[10],local_2c);
          cVar1 = FUN_00c2a4a0(uVar9);
          if (cVar1 != '\0') {
            lVar7 = FUN_00c2fce0(param_1[10],local_2c);
            lVar10 = FUN_00c2fce0(param_1[10],local_2c);
            uVar5 = FUN_00c2e3e0(*(undefined8 *)(lVar10 + 0x60));
            lVar10 = FUN_00c2fce0(param_1[10],local_2c);
            cVar1 = FUN_00c33270(auStack_128,*(undefined8 *)(lVar7 + 0x30),uVar5,
                                 *(undefined4 *)(lVar10 + 0x38));
            if (cVar1 == '\0') {
              lVar7 = FUN_00c2fce0(param_1[10],local_2c);
              FUN_00c2e340(*(undefined8 *)(lVar7 + 0x60),0);
              uVar5 = thunk_FUN_03f3ed25(local_74,100,local_78);
              local_108 = 0;
              FUN_004238d0(local_a0,0,0,0);
              FUN_0041ddd0(&local_b8,PTR_LAB_020054c8);
              pcVar6 = (code *)FUN_00411550(param_1,0xfffd);
              local_108 = local_108 & 0xffffff00;
              local_100 = local_a0;
              local_f8 = local_b8;
              (*pcVar6)(param_1,param_1,1,uVar5);
            }
          }
          local_2c = local_2c + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      iVar4 = FUN_00c1aa10();
      local_2c = 0;
      if (-1 < iVar4 + -2) {
        iVar4 = iVar4 + -1;
        do {
          local_74 = local_74 + 1;
          lVar7 = FUN_00c2fce0(param_1[10],local_2c);
          if (*(longlong *)(lVar7 + 0x60) != 0) {
            lVar7 = FUN_00c2fce0(param_1[10],local_2c);
            uVar9 = FUN_00c2e570(*(undefined8 *)(lVar7 + 0x60));
            if ((byte)uVar9 < 8) {
              bVar12 = ((int)CONCAT71((int7)((ulonglong)uVar9 >> 8),1) << ((byte)uVar9 & 0x1f) &
                       0xcU) != 0;
            }
            else {
              bVar12 = false;
            }
            if (bVar12) {
              uVar9 = FUN_00c2fce0(param_1[10],local_2c + 1);
              cVar1 = FUN_00c2a4a0(uVar9);
              if (cVar1 == '\0') {
                uVar9 = FUN_00c2fce0(param_1[10],local_2c);
                FUN_00c29e80(uVar9,local_50);
                uVar9 = FUN_00c2fce0(param_1[10],local_2c + 1);
                FUN_00c29e80(uVar9,local_60);
                cVar1 = FUN_004239d0(local_70,local_50,local_60);
                if (cVar1 != '\0') {
                  cVar1 = FUN_004238a0(local_70,local_60);
                  if (cVar1 != '\0') {
                    lVar7 = FUN_00c2fce0(param_1[10],local_2c);
                    FUN_00c2e580(*(undefined8 *)(lVar7 + 0x60),0);
                  }
                  thunk_FUN_03f3ed25(local_74,100,local_78);
                  local_108 = 0;
                  FUN_004238d0(local_a0,0,0,0);
                  FUN_0041ddd0(&local_c0,PTR_LAB_020054c8);
                  pcVar6 = (code *)FUN_00411550(param_1,0xfffd);
                  local_108 = local_108 & 0xffffff00;
                  local_100 = local_a0;
                  local_f8 = local_c0;
                  (*pcVar6)(param_1,param_1,1);
                }
              }
            }
          }
          local_2c = local_2c + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
    }
    if ((param_2 & 2) == 0) {
      iVar4 = FUN_00c1aa10(param_1[10]);
      local_74 = local_74 + iVar4;
    }
    else {
      local_2c = FUN_00c1aa10(param_1[10]);
      local_2c = local_2c + -1;
      if (0 < local_2c) {
        do {
          local_74 = local_74 + 1;
          local_30 = local_2c;
          do {
            local_30 = local_30 + -1;
            if ((local_30 < 1) ||
               (lVar7 = FUN_00c2fce0(param_1[10],local_30), *(longlong *)(lVar7 + 0x60) == 0))
            break;
            lVar7 = FUN_00c2fce0(param_1[10],local_30);
            cVar1 = FUN_00c2e570(*(undefined8 *)(lVar7 + 0x60));
          } while (cVar1 == '\x03');
          if (-1 < local_30) {
            uVar9 = FUN_00c2fce0(param_1[10],local_2c);
            uVar11 = FUN_00c2fce0(param_1[10],local_30);
            FUN_00c2d410(uVar9,uVar11);
          }
          thunk_FUN_03f3ed25(local_74,100,local_78);
          local_108 = 0;
          FUN_004238d0(local_a0,0,0,0);
          FUN_0041ddd0(&local_c8,PTR_LAB_020054c8);
          pcVar6 = (code *)FUN_00411550(param_1,0xfffd);
          local_108 = local_108 & 0xffffff00;
          local_100 = local_a0;
          local_f8 = local_c8;
          (*pcVar6)(param_1,param_1,1);
          local_2c = local_2c + -1;
        } while (local_2c != 0);
      }
    }
    iVar4 = FUN_00c1aa10(param_1[10]);
    local_74 = local_74 + iVar4;
    if ((param_2 & 4) != 0) {
      local_2c = FUN_00c1aa10(param_1[10]);
      local_2c = local_2c + -1;
      if (-1 < local_2c) {
        do {
          lVar7 = FUN_00c2fce0(param_1[10],local_2c);
          local_30 = FUN_00c1aa10(*(undefined8 *)(lVar7 + 0x58));
          local_30 = local_30 + -1;
          if (-1 < local_30) {
            do {
              lVar7 = FUN_00c2fce0(param_1[10],local_2c);
              uVar9 = FUN_00c28360(*(undefined8 *)(lVar7 + 0x58),local_30);
              cVar1 = FUN_004113d0(uVar9,&LAB_00c15eb0);
              if (cVar1 == '\0') {
                lVar7 = FUN_00c2fce0(param_1[10],local_2c);
                uVar9 = FUN_00c28360(*(undefined8 *)(lVar7 + 0x58),local_30);
                cVar1 = FUN_004113d0(uVar9,&LAB_00c158d8);
                if (cVar1 != '\0') goto LAB_00c33c2a;
                lVar7 = FUN_00c2fce0(param_1[10],local_2c);
                uVar9 = FUN_00c28360(*(undefined8 *)(lVar7 + 0x58),local_30);
                cVar1 = FUN_004113d0(uVar9,&LAB_00c16ab0);
                if (cVar1 != '\0') goto LAB_00c33c2a;
                lVar7 = FUN_00c2fce0(param_1[10],local_2c);
                uVar9 = FUN_00c28360(*(undefined8 *)(lVar7 + 0x58),local_30);
                cVar1 = FUN_004113d0(uVar9,&LAB_00c16d40);
                if ((cVar1 != '\0') &&
                   ((0 < local_2c || (iVar4 = FUN_00c1aa10(param_1[10]), iVar4 == 1))))
                goto LAB_00c33c2a;
              }
              else {
LAB_00c33c2a:
                lVar7 = FUN_00c2fce0(param_1[10],local_2c);
                FUN_00c1aa80(*(undefined8 *)(lVar7 + 0x58),local_30);
              }
              local_30 = local_30 + -1;
            } while (local_30 != -1);
          }
          uVar9 = FUN_00c2fce0(param_1[10],local_2c);
          cVar1 = FUN_00c28880(uVar9);
          if (cVar1 != '\0') {
            lVar7 = FUN_00c2fce0(param_1[10],local_2c);
            iVar4 = FUN_00c1aa10(*(undefined8 *)(lVar7 + 0x58));
            if (iVar4 == 0) {
              uVar9 = FUN_00c2fce0(param_1[10],local_2c);
              FUN_00410f20(uVar9);
            }
          }
          local_2c = local_2c + -1;
        } while (local_2c != -1);
      }
      uVar5 = thunk_FUN_03f3ed25(local_74,100,local_78);
      local_108 = 0;
      FUN_004238d0(local_a0,0,0,0);
      FUN_0041ddd0(&local_d0,PTR_LAB_020054c8);
      pcVar6 = (code *)FUN_00411550(param_1,0xfffd);
      local_108 = local_108 & 0xffffff00;
      local_100 = local_a0;
      local_f8 = local_d0;
      (*pcVar6)(param_1,param_1,1,uVar5);
    }
    if ((param_2 & 1) == 0) {
      iVar4 = FUN_00c1aa10(param_1[10]);
      local_74 = local_74 + iVar4;
    }
    else {
      local_2c = FUN_00c1aa10(param_1[10]);
      local_2c = local_2c + -1;
      if (-1 < local_2c) {
        do {
          local_74 = local_74 + 1;
          uVar9 = FUN_00c2fce0(param_1[10],local_2c);
          cVar1 = FUN_00c28880(uVar9);
          if (cVar1 == '\0') {
            uVar9 = FUN_00c2fce0(param_1[10],local_2c);
            cVar1 = FUN_00c2a4a0(uVar9);
            if (cVar1 != '\0') {
              lVar7 = FUN_00c2fce0(param_1[10],local_2c);
              uVar2 = FUN_00c2e520(*(undefined8 *)(lVar7 + 0x60));
              local_34 = (uint)uVar2;
              uVar9 = FUN_00c2fce0(param_1[10],local_2c);
              FUN_00c2cea0(uVar9);
              uVar9 = FUN_00c2fce0(param_1[10],local_2c);
              cVar1 = FUN_00c28880(uVar9);
              if (cVar1 != '\0') {
                if (0 < local_2c) {
                  uVar9 = FUN_00c2fce0(param_1[10],local_2c + -1);
                  cVar1 = FUN_00c2a4a0(uVar9);
                  if (cVar1 != '\0') {
                    iVar4 = local_2c + -1;
                    lVar7 = FUN_00c2fce0(param_1[10],iVar4);
                    lVar10 = FUN_00c2fce0(param_1[10],iVar4);
                    sVar3 = FUN_00c2e520(*(undefined8 *)(lVar10 + 0x60));
                    FUN_00c2e530(*(undefined8 *)(lVar7 + 0x60),sVar3 + (short)local_34);
                  }
                }
                FUN_00c1aa80(param_1[10],local_2c);
              }
              thunk_FUN_03f3ed25(local_74,100,local_78);
              local_108 = 0;
              FUN_004238d0(local_a0,0,0,0);
              FUN_0041ddd0(&local_d8,PTR_LAB_020054c8);
              pcVar6 = (code *)FUN_00411550(param_1,0xfffd);
              local_108 = local_108 & 0xffffff00;
              local_100 = local_a0;
              local_f8 = local_d8;
              (*pcVar6)(param_1,param_1,1);
            }
          }
          local_2c = local_2c + -1;
        } while (local_2c != -1);
      }
    }
    iVar4 = FUN_00c1aa10(param_1[10]);
    local_74 = local_74 + iVar4;
    if ((param_2 & 4) != 0) {
      local_2c = FUN_00c1aa10(param_1[10]);
      local_2c = local_2c + -1;
      if (-1 < local_2c) {
        do {
          lVar7 = FUN_00c2fce0(param_1[10],local_2c);
          if (*(longlong *)(lVar7 + 0x60) != 0) {
            lVar7 = FUN_00c2fce0(param_1[10],local_2c);
            local_40 = *(undefined8 *)(lVar7 + 0x60);
            sVar3 = FUN_00c2e520(local_40);
            if ((((sVar3 == 0) || (iVar4 = FUN_00c1aa10(param_1[10]), iVar4 == 1)) &&
                (cVar1 = FUN_00c2e330(local_40), cVar1 == '\0')) &&
               (cVar1 = FUN_00c2e540(local_40), cVar1 == '\0')) {
              uVar9 = FUN_00c2e570(local_40);
              if ((byte)uVar9 < 8) {
                bVar12 = ((int)CONCAT71((int7)((ulonglong)uVar9 >> 8),1) << ((byte)uVar9 & 0x1f) &
                         3U) != 0;
              }
              else {
                bVar12 = false;
              }
              if ((bVar12) || (iVar4 = FUN_00c1aa10(param_1[10]), iVar4 == 1)) {
                FUN_00410f20(local_40);
              }
            }
          }
          uVar9 = FUN_00c2fce0(param_1[10],local_2c);
          cVar1 = FUN_00c28880(uVar9);
          if (cVar1 != '\0') {
            lVar7 = FUN_00c2fce0(param_1[10],local_2c);
            iVar4 = FUN_00c1aa10(*(undefined8 *)(lVar7 + 0x58));
            if (iVar4 == 0) {
              uVar9 = FUN_00c2fce0(param_1[10],local_2c);
              FUN_00410f20(uVar9);
            }
          }
          local_2c = local_2c + -1;
        } while (local_2c != -1);
      }
      uVar5 = thunk_FUN_03f3ed25(local_74,100,local_78);
      local_108 = 0;
      FUN_004238d0(local_a0,0,0,0);
      FUN_0041ddd0(&local_e0,PTR_LAB_020054c8);
      pcVar6 = (code *)FUN_00411550(param_1,0xfffd);
      local_108 = local_108 & 0xffffff00;
      local_100 = local_a0;
      local_f8 = local_e0;
      (*pcVar6)(param_1,param_1,1,uVar5);
    }
    lVar7 = FUN_004097b0();
    if (lVar7 == 0) {
      local_2c = 100;
    }
    else {
      local_2c = 0;
    }
    local_108 = 0;
    FUN_004238d0(local_a0,0,0,0);
    FUN_0041ddd0(&local_e8,PTR_LAB_020054c8);
    pcVar6 = (code *)FUN_00411550(param_1,0xfffd);
    local_108 = local_108 & 0xffffff00;
    local_100 = local_a0;
    local_f8 = local_e8;
    (*pcVar6)(param_1,param_1,2,(undefined1)local_2c);
    FUN_00c34470(param_1);
    (**(code **)(*param_1 + 0x20))(param_1,param_1);
  }
  FUN_00414560(&local_e8,9);
  return;
}

