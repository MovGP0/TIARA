/* Ghidra address: 015267a0 */
/* Ghidra symbol: FUN_015267a0 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_015267a0(char param_1)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  short sVar4;
  short sVar5;
  ushort uVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  char *pcVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  ulonglong uVar18;
  int local_270;
  byte local_269;
  int local_25c;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined1 local_1f8 [256];
  undefined8 local_f8;
  undefined8 local_f0 [2];
  longlong local_e0;
  longlong local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  int local_c4 [39];
  
  local_250 = 0;
  local_248 = 0;
  local_238 = 0;
  local_240 = 0;
  local_228 = 0;
  local_230 = 0;
  local_218 = 0;
  local_220 = 0;
  local_210 = 0;
  local_208 = 0;
  local_200 = 0;
  local_f8 = 0;
  local_f0[0] = 0;
  local_e0 = 0;
  *PTR_DAT_02002ce0 = 0;
  DAT_0210ed31 = 0;
  bVar2 = true;
  FUN_01525f60();
  if ((DAT_0210ed30 & *PTR_DAT_02002ce0 == '\0') != 0) {
    if (param_1 == '\0') {
      plVar10 = (longlong *)FUN_007fc180(&PTR_FUN_014f7378,1,*(undefined8 *)PTR_DAT_02004030);
      iVar7 = (**(code **)(*plVar10 + 0x2d0))(plVar10);
      local_269 = iVar7 == 2;
      FUN_00410f20(plVar10);
      if ((bool)local_269) goto LAB_01527300;
      DAT_0210ed78 = *(undefined8 *)(PTR_DAT_02004010 + 0x2c0);
    }
    else {
      DAT_0210ed78 = 0x4a511b0ec57e649a;
      DAT_0210ed70 = *(undefined8 *)(PTR_DAT_02004010 + 0x2c0);
    }
    lVar11 = FUN_019a4600();
    uVar18 = 0;
    FUN_017cc020(PTR_DAT_020027c0,10,param_1 == '\x01',*(undefined8 *)(lVar11 + 0x360),0,0);
    if (*PTR_DAT_020017c0 != '\0') {
      lVar11 = FUN_019a4600();
      uVar18 = 0;
      FUN_017cc020(PTR_DAT_020037b0,10,param_1 == '\x01',*(undefined8 *)(lVar11 + 0x360),0,0);
    }
    uVar12 = FUN_019a4600();
    plVar10 = (longlong *)FUN_0199ab60(uVar12);
    uVar12 = *(undefined8 *)(*(longlong *)PTR_DAT_020027c0 + 8);
    while( true ) {
      if ((*PTR_DAT_02002ce0 != '\0') || (plVar10 == (longlong *)0x0)) goto code_r0x01526a9d;
      sVar4 = (**(code **)(*plVar10 + 0x210))(plVar10,0);
      sVar5 = (**(code **)(*plVar10 + 0x210))(plVar10,1);
      if (sVar5 != 0) break;
      if (sVar4 == 0) {
        uVar12 = FUN_00b89270();
        FUN_00b8e520(uVar12,&local_f8,0x510);
        FUN_016fd8d0(local_f8);
        goto code_r0x01526a9d;
      }
      (**(code **)(*plVar10 + 0x288))(plVar10,&local_e0);
      if (local_e0 == 0) {
        FUN_0040e780(local_1f8,sVar4,3);
        FUN_004169a0(&local_e0,local_1f8);
      }
      FUN_01cc34d0(uVar12,local_e0,sVar4,0);
      bVar2 = false;
      uVar13 = FUN_019a4600();
      plVar10 = (longlong *)FUN_0199ab80(uVar13);
    }
    uVar12 = FUN_00b89270();
    FUN_00b8e520(uVar12,local_f0,0x510);
    FUN_016fd8d0(local_f0[0]);
code_r0x01526a9d:
    uVar12 = FUN_019a4600();
    cVar3 = FUN_01995600(uVar12,0,0);
    if (cVar3 == '\0') {
      FUN_01d426b0(2000,"\rInvalid graph");
    }
    uVar12 = FUN_004b6930(&PTR_FUN_00478280,1);
    uVar13 = FUN_019a4600();
    plVar10 = (longlong *)FUN_01995660(uVar13,0,0);
    while ((*PTR_DAT_02002ce0 == '\0' && (plVar10 != (longlong *)0x0))) {
      local_c8 = (**(code **)(*plVar10 + 0x210))(plVar10,0);
      iVar7 = 0;
      while ((*PTR_DAT_02002ce0 == '\0' &&
             (iVar9 = (**(code **)(*plVar10 + 0x1c8))(plVar10), iVar7 < iVar9))) {
        uVar8 = (**(code **)(*plVar10 + 0x210))(plVar10,iVar7 + 1);
        *(undefined4 *)((longlong)&local_d0 + (longlong)(iVar7 + 2) * 4 + 4) = uVar8;
        iVar7 = iVar7 + 1;
      }
      uVar13 = *(undefined8 *)(*(longlong *)PTR_DAT_020027c0 + 8);
      uVar6 = (**(code **)(*plVar10 + 0xf8))(plVar10);
      if (uVar6 < 0x22) {
        if (uVar6 == 0x21) goto LAB_01526c06;
        if (uVar6 == 4) {
          pcVar14 = (char *)FUN_01cfd6a0(plVar10);
          if ((*pcVar14 != '\0') &&
             (pcVar14 = (char *)FUN_01cfd6a0(plVar10), uVar8 = local_c8, *pcVar14 != '\x02')) {
            (**(code **)(*plVar10 + 0x288))(plVar10,&local_200);
            FUN_01cc34d0(uVar13,local_200,uVar8,0);
            bVar2 = false;
          }
        }
        else if (uVar6 == 5) goto LAB_01526c06;
      }
      else {
        if (uVar6 != 0x77) {
          if ((uVar6 == 0x86) &&
             ((**(code **)(*plVar10 + 0x2d0))(plVar10,2,&local_d0), *local_d0 == '\0')) {
            uVar8 = (**(code **)(*plVar10 + 0x210))(plVar10,0);
            cVar3 = FUN_015266c0(uVar8,uVar12,&local_d8);
            if (cVar3 != '\0') {
              (**(code **)(*plVar10 + 0x288))(plVar10,&local_218);
              FUN_017ff4f0(plVar10,&local_220);
              uVar18 = uVar18 & 0xffffffffffffff00;
              lVar11 = FUN_01cc35a0(uVar13,local_218,local_220,uVar12,uVar18);
              (**(code **)(*plVar10 + 0x2d0))(plVar10,0,&local_d0);
              *(char *)(lVar11 + 0x50) = *local_d0;
              (**(code **)(*plVar10 + 0x2d0))(plVar10,1,&local_d0);
              FUN_004169a0(&local_e0,local_d0);
              FUN_004169a0(&local_230,local_d8 + 0x2d8);
              FUN_017c4060(&local_228,local_230,local_e0);
              FUN_00414ad0(lVar11 + 0x48,local_228);
              bVar2 = false;
            }
          }
          goto LAB_01526da4;
        }
LAB_01526c06:
        if (local_c4[0] == 0) {
          pcVar14 = (char *)FUN_01cfd6a0(plVar10);
          uVar8 = local_c8;
          if (*pcVar14 == '\x01') {
            (**(code **)(*plVar10 + 0x288))(plVar10,&local_210);
            FUN_01cc34d0(uVar13,local_210,uVar8,0);
            bVar2 = false;
          }
        }
        else {
          uVar13 = FUN_00b89270();
          FUN_00b8e520(uVar13,&local_208,0x513);
          FUN_016fd8d0(local_208);
        }
      }
LAB_01526da4:
      uVar13 = FUN_019a4600();
      FUN_01995800(uVar13,0,0);
      uVar13 = FUN_019a4600();
      plVar10 = (longlong *)FUN_01995660(uVar13,0);
    }
    FUN_00410f20(uVar12);
    if (*PTR_DAT_020017c0 != '\0') {
      uVar12 = *(undefined8 *)(*(longlong *)PTR_DAT_020037b0 + 8);
      uVar13 = FUN_019a4600();
      iVar7 = FUN_019954d0(uVar13);
      local_270 = 1;
      if (0 < iVar7) {
        do {
          FUN_0043f750(&local_240,local_270);
          FUN_00416ba0(&local_238,&LAB_015273bc,local_240);
          FUN_01cc34d0(uVar12,local_238,local_270,0);
          local_270 = local_270 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
    }
    if (bVar2) {
      uVar12 = FUN_00b89270();
      FUN_00b8e520(uVar12,&local_248,0x106);
      FUN_016fd9b0(local_248,0x1582);
      local_269 = 1;
      goto LAB_01527300;
    }
    lVar11 = FUN_01521960(0,&PTR_FUN_01521858);
    DAT_0210eda0 = lVar11;
    if (lVar11 == 0) {
      local_269 = 1;
      goto LAB_01527300;
    }
    FUN_01aab090(lVar11,&DAT_0210ec68);
    DAT_0210ed98 = FUN_004095c0(0x2711);
    cVar3 = FUN_01aab4c0(lVar11);
    if (cVar3 == '\0') {
      uVar12 = FUN_00b89270();
      FUN_00b8e520(uVar12,&local_250,0x514);
      FUN_016fd8d0(local_250);
      DAT_0210ed78 = 0;
    }
    else {
      FUN_01aad5c0(lVar11,DAT_0210ed98);
      lVar1 = *(longlong *)(*(longlong *)PTR_DAT_020027c0 + 8);
      iVar7 = *(int *)(lVar1 + 0x10);
      local_25c = 0;
      if (-1 < iVar7 + -1) {
        do {
          uVar12 = FUN_01d347d0(lVar1,local_25c);
          cVar3 = FUN_004113d0(uVar12,&PTR_FUN_01cb4260);
          if (cVar3 == '\0') {
            lVar15 = FUN_01d347d0(lVar1,local_25c);
            iVar9 = FUN_01cc1840(lVar15);
            lVar16 = FUN_00409570((longlong)iVar9);
            iVar9 = FUN_01cc1840();
            local_270 = 0;
            if (-1 < iVar9 + -1) {
              do {
                lVar17 = FUN_004aeac0(*(undefined8 *)(lVar15 + 0x38),local_270);
                uVar18 = FUN_01aa8f70(lVar11,*(undefined4 *)(lVar17 + 0x38));
                *(undefined1 *)(lVar16 + -1 + (longlong)(local_270 + 1)) =
                     *(undefined1 *)(DAT_0210ed98 + (uVar18 & 0xffff));
                local_270 = local_270 + 1;
                iVar9 = iVar9 + -1;
              } while (iVar9 != 0);
            }
            FUN_01cc5750(*(undefined8 *)PTR_DAT_020027c0,local_25c,0,lVar16);
            FUN_004095f0(lVar16);
          }
          else {
            lVar15 = FUN_01d347d0(lVar1,local_25c);
            uVar18 = FUN_01aa8f70(lVar11,*(undefined4 *)(lVar15 + 0x38));
            FUN_01cc56d0(*(undefined8 *)PTR_DAT_020027c0,local_25c,0,
                         *(undefined1 *)(DAT_0210ed98 + (uVar18 & 0xffff)));
          }
          local_25c = local_25c + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      if (*(longlong *)PTR_DAT_020037b0 != 0) {
        lVar1 = *(longlong *)(*(longlong *)PTR_DAT_020037b0 + 8);
        iVar7 = *(int *)(lVar1 + 0x10);
        local_25c = 0;
        if (-1 < iVar7 + -1) {
          do {
            uVar12 = FUN_01d347d0(lVar1,local_25c);
            cVar3 = FUN_004113d0(uVar12,&PTR_FUN_01cb4260);
            if (cVar3 != '\0') {
              lVar15 = FUN_01d347d0(lVar1,local_25c);
              uVar18 = FUN_01aa8f70(lVar11,*(undefined4 *)(lVar15 + 0x38));
              FUN_01cc56d0(*(undefined8 *)PTR_DAT_020037b0,local_25c,0,
                           *(undefined1 *)(DAT_0210ed98 + (uVar18 & 0xffff)));
            }
            local_25c = local_25c + 1;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
        }
      }
    }
    FUN_015221a0(*(undefined8 *)PTR_DAT_020027c0,*(undefined8 *)PTR_DAT_020037b0,DAT_0210eda0);
    DAT_0210ed68 = *(ulonglong *)PTR_DAT_020011b0 ^ 0x8000000000000000;
    DAT_0210ed88 = *(undefined8 *)PTR_DAT_020011b0;
    FUN_01521af0(lVar11,DAT_0210ed68,&DAT_0210ed80);
    _DAT_0210edb0 = DAT_0210ed68;
    DAT_0210edb8 = 0;
    DAT_0210ed90 = 0;
    uVar12 = FUN_01af24a0(&DAT_01af0038,1,1,0);
    *(undefined8 *)PTR_DAT_020052f8 = uVar12;
    FUN_01af2a70(*(undefined8 *)PTR_DAT_020052f8,FUN_015260c0);
    *(undefined8 *)(*(longlong *)PTR_DAT_020052f8 + 0x18) = DAT_0210ed78;
    FUN_01af29b0(*(undefined8 *)PTR_DAT_020052f8,1);
    FUN_01af29d0(*(undefined8 *)PTR_DAT_020052f8,1);
    if (param_1 == '\0') {
      FUN_01af2ae0(*(undefined8 *)PTR_DAT_020052f8);
    }
    FUN_015260d0(param_1);
    FUN_00410f20(*(undefined8 *)PTR_DAT_020052f8);
    if (param_1 == '\0') {
      FUN_01521f10(*(undefined8 *)PTR_DAT_020027c0,*(undefined8 *)PTR_DAT_020037b0,DAT_0210ed78,
                   DAT_0210eda0,DAT_0210ed98);
    }
    FUN_004095f0(DAT_0210ed98);
    uVar12 = (*(code *)**(undefined8 **)(DAT_0210eda0 + 0x13a60))(DAT_0210eda0);
    FUN_004095f0(uVar12);
    if ((DAT_0210ed90 & param_1 == '\0') != 0) {
      FUN_017cc8f0(PTR_DAT_020027c0);
    }
    FUN_017cc8f0(PTR_DAT_020037b0);
  }
  local_269 = DAT_0210ed30 == 0 | DAT_0210ed90;
LAB_01527300:
  FUN_00414560(&local_250,0xb);
  FUN_00414560(&local_f8,2);
  FUN_00414480(&local_e0);
  return local_269;
}

