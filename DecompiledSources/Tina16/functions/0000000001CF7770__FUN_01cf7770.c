/* Ghidra address: 01cf7770 */
/* Ghidra symbol: FUN_01cf7770 */


/* WARNING: Removing unreachable block (ram,0x01cf7fdb) */

undefined1 FUN_01cf7770(longlong *param_1,longlong *param_2,undefined8 param_3,ushort param_4)

{
  double *pdVar1;
  char cVar2;
  short sVar3;
  undefined2 uVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined2 *puVar12;
  double dVar13;
  byte bVar14;
  uint uVar15;
  ulonglong uVar16;
  uint uVar17;
  bool bVar18;
  undefined1 local_3b9;
  longlong *local_3b8;
  undefined8 local_3b0;
  undefined8 local_3a8;
  undefined8 local_3a0;
  undefined8 local_398;
  undefined8 local_390;
  undefined8 local_388;
  undefined8 local_380;
  int local_378;
  undefined1 local_372 [768];
  undefined2 local_72;
  undefined2 local_70 [2];
  undefined1 local_6b [21];
  ushort local_56;
  ushort local_54;
  short local_52;
  longlong local_50;
  short local_44;
  undefined1 local_42;
  byte local_41;
  byte *local_40;
  double *local_38;
  int local_2c;
  
  local_3b8 = (longlong *)0x0;
  local_3b0 = 0;
  local_3a0 = 0;
  local_3a8 = 0;
  local_398 = 0;
  local_390 = 0;
  local_380 = 0;
  local_388 = 0;
  local_3b9 = 0;
  iVar6 = FUN_01d31a40(*param_2);
  if (iVar6 != 0) {
    local_3b9 = 1;
    goto LAB_01cfa385;
  }
  cVar2 = FUN_017bded0(param_1,param_2,0,param_4,0xffffffff);
  if (cVar2 != '\0') {
    local_3b9 = 1;
    goto LAB_01cfa385;
  }
  FUN_01d30f00(*param_2,(longlong)param_1 + 0xd1,1);
  FUN_01d30f00(*param_2,(longlong)param_1 + 0xd3,1);
  if (param_4 < 0x12) {
    lVar10 = FUN_01d06e20(param_1);
    if (lVar10 == 0) {
      lVar10 = FUN_01d3a780(*(undefined8 *)PTR_DAT_020036c8,
                            *(undefined2 *)((longlong)param_1 + 0xba));
      *(ushort *)((longlong)param_1 + 0xee) = (ushort)*(byte *)(lVar10 + 0xb4);
      *(undefined2 *)(param_1 + 0x1e) = 0;
    }
    else {
      uVar4 = FUN_00c41060(lVar10,local_70);
      *(undefined2 *)((longlong)param_1 + 0xee) = uVar4;
      *(undefined2 *)(param_1 + 0x1e) = local_70[0];
    }
  }
  else if (param_4 < 0x36) {
    FUN_01d30f00(*param_2,&local_41,1);
    *(ushort *)((longlong)param_1 + 0xee) = (ushort)local_41;
    *(undefined2 *)(param_1 + 0x1e) = 0;
  }
  else {
    FUN_01d30f00(*param_2,(longlong)param_1 + 0xee,2);
    FUN_01d30f00(*param_2,param_1 + 0x1e,2);
  }
  if (0x33 < param_4) {
    FUN_01d312f0(*param_2,&local_388);
    iVar6 = FUN_004170c0(&DAT_01cfa420,local_388,1);
    iVar7 = FUN_004170c0(&DAT_01cfa430,local_388,1);
    if ((0 < iVar6) && (0 < iVar7)) {
      FUN_00416dc0(param_1 + 0x32,local_388,iVar6 + 1,(iVar7 - iVar6) + -1);
      FUN_00416dc0(&local_388,local_388,1,iVar6 + -1);
    }
    uVar9 = FUN_00414480(param_1 + 0xc);
    FUN_01b24160(&local_390,local_388,uVar9);
    FUN_00414ad0(param_1 + 0xb,local_390);
  }
  if (0x13 < param_4) {
    if (param_4 < 0x29) {
      FUN_01d312b0(*param_2,local_6b,0x14);
      FUN_004169a0(param_1 + 0x30,local_6b);
    }
    else {
      FUN_01d312f0(*param_2,param_1 + 0x30);
      if (0x34 < param_4) {
        FUN_01d30f00(*param_2,param_1 + 0x31,1);
      }
    }
  }
  sVar3 = (**(code **)(*param_1 + 0xf8))(param_1);
  if (sVar3 == 0x39) {
    FUN_01d30f00(*param_2,&local_54,2);
    FUN_01d30f00(*param_2,&local_56,2);
    if ((local_54 != 0) && (cVar2 = FUN_01cf03d0(local_54,local_56), cVar2 == '\0')) {
      if (local_54 < 2) {
        FUN_01d314e0(*param_2,&local_380);
        FUN_00b928f0(&local_398,local_380,0);
        FUN_00414b50(&local_380,local_398);
        FUN_00415dd0(&local_3a8,local_380,0);
        FUN_00b0d000(&local_3a0,local_3a8,0xfde9);
        FUN_004168b0(param_1 + 0x76,local_3a0);
        if (param_1[0x76] != 0) {
          FUN_01cf7560(&local_3b0,param_1[0x76],*(undefined8 *)(*param_2 + 0x60));
          FUN_00414ad0(param_1 + 0x76,local_3b0);
          cVar2 = FUN_00440a20(param_1[0x76],1);
          if (cVar2 != '\0') {
            if (param_1[0x35] == 0) {
              lVar10 = FUN_017708f0(param_1[0x76]);
              lVar10 = (**(code **)(lVar10 + 0x20))(lVar10,1,param_1);
              param_1[0x35] = lVar10;
            }
            plVar11 = (longlong *)param_1[0x35];
            if (plVar11 != (longlong *)0x0) {
              (**(code **)(*plVar11 + 0x28))
                        (plVar11,param_1[0x76],*(undefined1 *)(*param_2 + 0x7a),
                         *(undefined8 *)(*param_2 + 0x40));
              *(undefined1 *)(param_1 + 0x34) = *(undefined1 *)(param_1[0x35] + 0x70);
            }
          }
        }
      }
      else {
        if (param_1[0x35] == 0) {
          if (local_54 == 0x108) {
            lVar10 = FUN_0176a5d0(&PTR_FUN_017611c0,1,param_1);
            param_1[0x35] = lVar10;
            *(undefined1 *)(param_1 + 0x34) = 1;
          }
          else if (local_54 == 0x111) {
            lVar10 = FUN_01771870(&PTR_FUN_01763148,1,param_1);
            param_1[0x35] = lVar10;
            *(undefined1 *)(param_1 + 0x34) = 3;
          }
          else if (local_54 == 0x112) {
            lVar10 = FUN_01776df0(&PTR_FUN_017649b8,1,param_1);
            param_1[0x35] = lVar10;
            *(undefined1 *)(param_1 + 0x34) = 4;
          }
          else {
            lVar10 = FUN_0176c970(&PTR_FUN_01761b48,1,param_1);
            param_1[0x35] = lVar10;
            *(undefined1 *)(param_1 + 0x34) = 2;
          }
        }
        (**(code **)(*(longlong *)param_1[0x35] + 0x38))
                  ((longlong *)param_1[0x35],param_2,local_54,local_56,0xffffffff);
      }
      if (((char)param_1[0x34] == '\x01') && (*(longlong *)(param_1[0x35] + 8) != 0)) {
        *(undefined1 *)(*(longlong *)(param_1[0x35] + 8) + 0x490) =
             *(undefined1 *)(*(longlong *)(*param_2 + 0x40) + 0x490);
      }
    }
  }
  sVar3 = (**(code **)(*param_1 + 0xf8))(param_1);
  if (sVar3 == 0xa1) {
LAB_01cf7e1b:
    FUN_01d30f00(*param_2,&local_52,2);
    if (local_52 != 0) {
      plVar11 = (longlong *)FUN_00c3d400(&LAB_00c3a6d0,1);
      param_1[0xa2] = (longlong)plVar11;
      (**(code **)(*plVar11 + 0x30))(plVar11,*param_2,local_52);
    }
    uVar4 = (**(code **)(*param_1 + 0xf8))(param_1);
    cVar2 = FUN_01d420f0(uVar4);
    if (cVar2 != '\0') {
      FUN_01d30f00(*param_2,param_1 + 0xa3,0x10);
    }
  }
  else {
    uVar4 = (**(code **)(*param_1 + 0xf8))(param_1);
    cVar2 = FUN_01d420f0(uVar4);
    if (cVar2 != '\0') goto LAB_01cf7e1b;
  }
  if (0x16 < param_4) {
    FUN_01d30f00(*param_2,(longlong)param_1 + 0x3b9,1);
    FUN_01d30f00(*param_2,(longlong)param_1 + 0x24,2);
    FUN_01d30f00(*param_2,param_1 + 10,2);
    if (param_4 < 0x2a) {
      FUN_01d30f00(*param_2,(longlong)param_1 + 0x26,0x16);
    }
    else {
      FUN_01d31760(*param_2,&local_378);
      FUN_01d30f00(*param_2,(longlong)param_1 + 0x26,local_378 * 2);
      if (local_378 < 0x14) {
        puVar12 = (undefined2 *)((longlong)param_1 + (longlong)local_378 * 2 + 0x26);
        do {
          *puVar12 = 0xffff;
          local_378 = local_378 + 1;
          puVar12 = puVar12 + 1;
        } while (local_378 != 0x14);
      }
    }
  }
  if (param_4 < 0x18) {
    *PTR_DAT_020045f0 = 0;
    if (*(byte *)((longlong)param_1 + 0xd1) < 8) {
      bVar18 = ((int)CONCAT71((int7)((ulonglong)param_1 >> 8),1) <<
                (*(byte *)((longlong)param_1 + 0xd1) & 0x1f) & 10U) != 0;
    }
    else {
      bVar18 = false;
    }
    if (bVar18) {
      uVar17 = *(byte *)(param_1 + 0x15) + 1;
      if (3 < uVar17) {
        uVar17 = 0;
      }
      *(char *)(param_1 + 0x15) = (char)((ulonglong)uVar17 % 2);
    }
  }
  if (((*PTR_DAT_020052b8 != '\0') && (cVar2 = FUN_0199c7c0(param_1), cVar2 != '\0')) &&
     (param_4 < 0x2b)) {
    iVar6 = FUN_017bf3c0(param_1);
    *(int *)(param_1 + 0x14) = iVar6 + 0x14;
  }
  if ((0x23 < param_4) && (FUN_01d32040(*param_2,param_1[0x7c]), 0x34 < param_4)) {
    FUN_01d30f00(*param_2,param_1 + 0x7d,1);
  }
  if (0x24 < param_4) {
    FUN_01d30f00(*param_2,(longlong)param_1 + 0x18c,4);
  }
  if (0x33 < param_4) {
    FUN_01d30f00(*param_2,param_1 + 0x77,1);
    if (((param_1[0x30] != 0) && (-1 < (char)param_1[0x77])) &&
       ((cVar2 = FUN_01d073b0(param_1,param_1[0x30],&local_2c), cVar2 != '\0' &&
        ((char)param_1[0x77] != local_2c)))) {
      *(undefined1 *)(param_1 + 0x77) = (undefined1)local_2c;
    }
    cVar2 = (**(code **)(*param_1 + 0x2d8))(param_1);
    if (cVar2 != '\0') {
      FUN_0173d740(param_1[0x33],(longlong)(char)param_1[0x77]);
    }
    FUN_01d32040(*param_2,param_1[0x9f]);
  }
  uVar4 = (**(code **)(*param_1 + 0x2c8))(param_1);
  FUN_00b909a0(param_1 + 0x18,uVar4);
  iVar6 = FUN_01cfd2d0(param_1);
  iVar7 = iVar6 + -1;
  sVar3 = (**(code **)(*param_1 + 0xf8))(param_1);
  if ((sVar3 == 0x23) && (param_4 < 0x37)) {
    iVar7 = iVar6 + -3;
  }
  sVar3 = (**(code **)(*param_1 + 0xf8))(param_1);
  if (((((sVar3 == 0x79) || (sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0x7a)) ||
       (sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0x7b)) ||
      (sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0x7c)) && (param_4 < 0x37)) {
    iVar7 = iVar7 + -1;
  }
  sVar3 = (**(code **)(*param_1 + 0xf8))(param_1);
  if ((sVar3 == 0x24) && (param_4 == 0x10)) {
LAB_01cf829d:
    iVar7 = iVar7 + -1;
  }
  else {
    sVar3 = (**(code **)(*param_1 + 0xf8))(param_1);
    if ((ushort)(sVar3 - 8U) < 0x20) {
      bVar18 = (1 << ((byte)(sVar3 - 8U) & 0x1f) & 0x6000001eU) != 0;
    }
    else {
      bVar18 = false;
    }
    if ((bVar18) && (param_4 < 0x13)) goto LAB_01cf829d;
  }
  if (((param_4 < 0x15) && (uVar5 = (**(code **)(*param_1 + 0xf8))(param_1), 999 < uVar5)) &&
     ((uVar5 = (**(code **)(*param_1 + 0xf8))(param_1), uVar5 < 3000 ||
      (uVar5 = (**(code **)(*param_1 + 0xf8))(param_1), 0xbb9 < uVar5)))) {
    iVar7 = iVar7 + -1;
  }
  if ((param_4 < 0x16) &&
     ((sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0x2901 ||
      (sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0x2902)))) {
    iVar7 = iVar7 + -1;
  }
  if (param_4 < 0x1a) {
    uVar4 = (**(code **)(*param_1 + 0xf8))(param_1);
    cVar2 = FUN_01d3e720(uVar4);
    if (cVar2 != '\0') {
      iVar7 = iVar7 + -1;
    }
  }
  sVar3 = (**(code **)(*param_1 + 0xf8))(param_1);
  if ((sVar3 == 0x122e) && (param_4 == 0x10)) {
    local_3b9 = FUN_01d38290(param_1,1);
    goto LAB_01cfa385;
  }
  if ((param_4 < 0x17) &&
     ((((((sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0x32 ||
          (sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0x33)) ||
         (sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0x34)) ||
        ((sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 6 ||
         (sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 5)))) ||
       (sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0x22)) ||
      (((sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0x21 ||
        (sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0xe)) ||
       ((sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0xd ||
        (((sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0x10 ||
          (sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0xf)) ||
         (sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0x2c)))))))))) {
    iVar7 = iVar7 + -1;
  }
  iVar6 = iVar7;
  if ((param_4 < 0x20) &&
     (((sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0x28 ||
       (sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0x29)) ||
      ((sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0x2a ||
       (sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0x44)))))) {
    iVar6 = iVar7 + -2;
    iVar8 = FUN_01cfd2d0(param_1);
    FUN_01d37280(param_1,iVar7 + -1,iVar8 + -1,1);
  }
  iVar7 = iVar6;
  if ((param_4 < 0x39) &&
     (((sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0x61 ||
       (sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0x60)) ||
      (sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0x3c)))) {
    iVar7 = iVar6 + -1;
    iVar8 = FUN_01cfd2d0(param_1);
    FUN_01d37280(param_1,iVar6,iVar8 + -1,1);
  }
  if (0x26 < param_4) {
    FUN_01d30f00(*param_2,(longlong)param_1 + 0x3bc,8);
    FUN_01d30f00(*param_2,(longlong)param_1 + 0x3c4,2);
    FUN_01d30f00(*param_2,param_1 + 0x79,8);
    FUN_01d30f00(*param_2,param_1 + 0x7a,1);
    FUN_01d30f00(*param_2,(longlong)param_1 + 0x3d1,1);
    FUN_01d30f00(*param_2,(longlong)param_1 + 0x3d3,1);
  }
  if (0x27 < param_4) {
    FUN_01d312b0(*param_2,param_1 + 0x36,0xff);
  }
  if (0x2a < param_4) {
    FUN_01d30f00(*param_2,(longlong)param_1 + 0x3ec,4);
  }
  if (0x2b < param_4) {
    FUN_01d30f00(*param_2,&local_44,2);
    iVar6 = (int)local_44;
    if (-1 < iVar6 + -1) {
      do {
        uVar9 = FUN_004095c0(0x18);
        FUN_01d30f00(*param_2,uVar9,0x18);
        FUN_004ae7e0(param_1[0x7e],uVar9);
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
  }
  if (0x3f < param_4) {
    FUN_01d312b0(*param_2,param_1 + 0x7f,0xff);
  }
  if (0x45 < param_4) {
    FUN_01d30f00(*param_2,param_1 + 0xa8,1);
  }
  if (0x46 < param_4) {
    FUN_01d30f00(*param_2,param_1 + 0xac,1);
    FUN_01cf76f0(param_1,&local_3b8,*param_2);
    FUN_00414ad0(param_1 + 0xad,local_3b8);
  }
  if ((param_1[0x18] != 0) && (uVar17 = 0, -1 < iVar7)) {
    iVar6 = iVar7 + 1;
    do {
      uVar16 = (ulonglong)uVar17;
      cVar2 = (**(code **)(*param_1 + 0x2d0))(param_1,uVar16,&local_38);
      bVar14 = (byte)uVar17;
      if (0x1f < param_4) goto LAB_01cf8c95;
      sVar3 = (**(code **)(*param_1 + 0xf8))(param_1);
      if ((sVar3 == 0x17) || (sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0x2c)) {
        if (uVar17 < 8) {
          uVar15 = (int)CONCAT71((int7)(uVar16 >> 8),1) << (bVar14 & 0x1f);
          uVar16 = (ulonglong)uVar15;
          bVar18 = (uVar15 & 0x3e) != 0;
        }
        else {
          bVar18 = false;
        }
        if (!bVar18) goto LAB_01cf8888;
LAB_01cf8b4a:
        if (cVar2 == '\x03') {
          local_38[1] = 0.0;
          lVar10 = FUN_01cfd090(param_1,uVar17);
          FUN_01d3a010(local_38,3,*(undefined8 *)(lVar10 + 0x34));
        }
        else if (cVar2 == '\b') {
          lVar10 = FUN_01cfd090(param_1,uVar17);
          *(undefined1 *)local_38 = *(undefined1 *)(lVar10 + 0x34);
        }
        else if (cVar2 == '\t') {
          lVar10 = FUN_01cfd090(param_1,uVar17);
          FUN_00415020(local_38,lVar10 + 0x34,0x1e);
        }
        else if (cVar2 == '\r') {
          local_38[2] = 0.0;
          lVar10 = FUN_01cfd090(param_1,uVar17);
          FUN_01d3a010(local_38,0xd,*(undefined8 *)(lVar10 + 0x36));
          lVar10 = FUN_01cfd090(param_1,uVar17);
          *(undefined1 *)(local_38 + 1) = *(undefined1 *)(lVar10 + 0x34);
        }
        sVar3 = (**(code **)(*param_1 + 0xf8))(param_1);
        if ((((sVar3 == 10) || (sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0x34)) ||
            (sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0x3b)) && (uVar17 == 1)) {
          FUN_01d30f00(*param_2,&local_50,8);
        }
      }
      else {
LAB_01cf8888:
        sVar3 = (**(code **)(*param_1 + 0xf8))(param_1);
        if ((sVar3 == 10) || (sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0xb)) {
          if (uVar17 < 8) {
            uVar15 = (int)CONCAT71((int7)(uVar16 >> 8),1) << (bVar14 & 0x1f);
            uVar16 = (ulonglong)uVar15;
            bVar18 = (uVar15 & 0x7e) != 0;
          }
          else {
            bVar18 = false;
          }
          if (bVar18) goto LAB_01cf8b4a;
        }
        sVar3 = (**(code **)(*param_1 + 0xf8))(param_1);
        if ((sVar3 == 0x18) || (sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0x19)) {
          if (uVar17 < 8) {
            uVar15 = (int)CONCAT71((int7)(uVar16 >> 8),1) << (bVar14 & 0x1f);
            uVar16 = (ulonglong)uVar15;
            bVar18 = (uVar15 & 0xfe) != 0;
          }
          else {
            bVar18 = false;
          }
          if (bVar18) goto LAB_01cf8b4a;
        }
        sVar3 = (**(code **)(*param_1 + 0xf8))(param_1);
        if ((((sVar3 == 0x1e) || (sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0x1f))
            || (sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0x2b)) ||
           (((sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0x35 ||
             (sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0x40)) ||
            (sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 9)))) {
          if (uVar17 < 8) {
            uVar15 = (int)CONCAT71((int7)(uVar16 >> 8),1) << (bVar14 & 0x1f);
            uVar16 = (ulonglong)uVar15;
            bVar18 = (uVar15 & 0x7e) != 0;
          }
          else {
            bVar18 = false;
          }
          if (bVar18) goto LAB_01cf8b4a;
        }
        sVar3 = (**(code **)(*param_1 + 0xf8))(param_1);
        if (((((sVar3 == 0x1a) || (sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0x1b))
             || ((sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0x1c ||
                 (sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0x1d)))) &&
            (uVar17 < 0x20 && (1 << (bVar14 & 0x1f) & 0x7fffcU) != 0)) ||
           (((sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0x34 ||
             (sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0x3b)) && (uVar17 == 1))))
        goto LAB_01cf8b4a;
        sVar3 = (**(code **)(*param_1 + 0xf8))(param_1);
        if (sVar3 == 0x15) {
          if (uVar17 < 8) {
            uVar15 = (int)CONCAT71((int7)(uVar16 >> 8),1) << (bVar14 & 0x1f);
            uVar16 = (ulonglong)uVar15;
            bVar18 = (uVar15 & 0x18) != 0;
          }
          else {
            bVar18 = false;
          }
          if (bVar18) goto LAB_01cf8b4a;
        }
        sVar3 = (**(code **)(*param_1 + 0xf8))(param_1);
        if (sVar3 == 0x24) {
          if (uVar17 < 8) {
            uVar15 = (int)CONCAT71((int7)(uVar16 >> 8),1) << (bVar14 & 0x1f);
            uVar16 = (ulonglong)uVar15;
            bVar18 = (uVar15 & 0xfc) != 0;
          }
          else {
            bVar18 = false;
          }
          if (bVar18) goto LAB_01cf8b4a;
        }
        sVar3 = (**(code **)(*param_1 + 0xf8))(param_1);
        if (sVar3 == 8) {
          if (uVar17 < 8) {
            uVar15 = (int)CONCAT71((int7)(uVar16 >> 8),1) << (bVar14 & 0x1f);
            uVar16 = (ulonglong)uVar15;
            bVar18 = (uVar15 & 7) != 0;
          }
          else {
            bVar18 = false;
          }
          if (bVar18) goto LAB_01cf8b4a;
        }
LAB_01cf8c95:
        if ((param_4 < 0x22) &&
           ((((sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0xe ||
              (sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0xd)) ||
             (sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0x43)) && (uVar17 == 1)))) {
          if (cVar2 == '\x03') {
            local_38[1] = 0.0;
            lVar10 = FUN_01cfd090(param_1,1);
            FUN_01d3a010(local_38,3,*(undefined8 *)(lVar10 + 0x34));
          }
          else if (cVar2 == '\r') {
            local_38[2] = 0.0;
            lVar10 = FUN_01cfd090(param_1,1);
            FUN_01d3a010(local_38,0xd,*(undefined8 *)(lVar10 + 0x36));
            lVar10 = FUN_01cfd090(param_1,1);
            *(undefined1 *)(local_38 + 1) = *(undefined1 *)(lVar10 + 0x34);
          }
        }
        else if (((param_4 < 0x26) &&
                 (sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0xd)) && (uVar17 == 1))
        {
          FUN_01d30f00(*param_2,&local_50,8);
          local_38[2] = 0.0;
          lVar10 = FUN_01cfd090(param_1,1);
          FUN_01d3a010(local_38,0xd,*(undefined8 *)(lVar10 + 0x36));
          lVar10 = FUN_01cfd090(param_1,1);
          *(undefined1 *)(local_38 + 1) = *(undefined1 *)(lVar10 + 0x34);
        }
        else if (((param_4 < 0x2d) &&
                 ((((sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0x18 ||
                    (sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0x19)) ||
                   (((sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0x57 ||
                     ((sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0x58 ||
                      (sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0x72)))) ||
                    (sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0x73)))) ||
                  (((((((sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 9 ||
                        (sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0x6b)) ||
                       (sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 200)) ||
                      ((sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0xd2 ||
                       (sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0xdc)))) ||
                     ((sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0x24 ||
                      ((sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0x6c ||
                       (sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0xc9)))))) ||
                    (sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0xd3)) ||
                   (sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0xdd)))))) &&
                (uVar17 == 1)) {
          if (cVar2 == '\x03') {
            local_38[1] = 0.0;
            lVar10 = FUN_01cfd090(param_1,1);
            FUN_01d3a010(local_38,3,*(undefined8 *)(lVar10 + 0x34));
          }
          else if (cVar2 == '\t') {
            lVar10 = FUN_01cfd090(param_1,1);
            FUN_00415020(local_38,lVar10 + 0x34,0x1e);
          }
        }
        else {
          if (0x33 < param_4) goto LAB_01cf946c;
          sVar3 = (**(code **)(*param_1 + 0xf8))(param_1);
          if ((((((sVar3 != 9) && (sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 != 0x6b))
                && (sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 != 200)) &&
               ((sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 != 0xd2 &&
                (sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 != 0xdc)))) || (uVar17 != 7)
              ) && ((((sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 != 0x24 &&
                      (sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 != 0x6c)) &&
                     ((sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 != 0xc9 &&
                      ((sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 != 0xd3 &&
                       (sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 != 0xdd)))))) ||
                    (uVar17 != 8)))) {
            sVar3 = (**(code **)(*param_1 + 0xf8))(param_1);
            if (((((sVar3 == 10) || (sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0x6d)
                  ) || (sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0xca)) ||
                ((sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0xd4 ||
                 (sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0xde)))) ||
               (((sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0xb ||
                 ((sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0x6e ||
                  (sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0xcc)))) ||
                ((sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0xd6 ||
                 (sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0xe0)))))) {
              if (uVar17 < 0x10) {
                uVar15 = (int)CONCAT62((int6)(uVar16 >> 0x10),1) << (bVar14 & 0x1f);
                uVar16 = (ulonglong)uVar15;
                bVar18 = (uVar15 & 0x184) != 0;
              }
              else {
                bVar18 = false;
              }
              if (bVar18) goto LAB_01cf93d6;
            }
            sVar3 = (**(code **)(*param_1 + 0xf8))(param_1);
            if (((((sVar3 == 0x4f) ||
                  (sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0xcb)) ||
                 (sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0xd5)) ||
                ((sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0xdf ||
                 (sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0x50)))) ||
               ((sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0xcd ||
                ((sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0xd7 ||
                 (sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0xe1)))))) {
              if (uVar17 < 0x10) {
                uVar15 = (int)CONCAT62((int6)(uVar16 >> 0x10),1) << (bVar14 & 0x1f);
                uVar16 = (ulonglong)uVar15;
                bVar18 = (uVar15 & 0x308) != 0;
              }
              else {
                bVar18 = false;
              }
              if (bVar18) goto LAB_01cf93d6;
            }
            sVar3 = (**(code **)(*param_1 + 0xf8))(param_1);
            if (((((sVar3 != 0x10) &&
                  (sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 != 0xf)) &&
                 (sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 != 0xd9)) &&
                (sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 != 0xda)) || (uVar17 != 2))
            {
              sVar3 = (**(code **)(*param_1 + 0xf8))(param_1);
              if (sVar3 == 0x31) {
                if (uVar17 < 8) {
                  uVar15 = (int)CONCAT71((int7)(uVar16 >> 8),1) << (bVar14 & 0x1f);
                  uVar16 = (ulonglong)uVar15;
                  bVar18 = (uVar15 & 0xfc) != 0;
                }
                else {
                  bVar18 = false;
                }
                if (bVar18) goto LAB_01cf93d6;
              }
LAB_01cf946c:
              if ((param_4 < 0x40) &&
                 (((((((sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 10 ||
                       (sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0x6d)) ||
                      ((sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0xca ||
                       ((sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0xd4 ||
                        (sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0xde)))))) ||
                     ((sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0xb ||
                      ((((sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0x6e ||
                         (sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0xcc)) ||
                        (sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0xd6)) ||
                       (sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0xe0)))))) &&
                    (uVar17 == 2)) ||
                   ((((sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0x4f ||
                      (sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0xcb)) ||
                     ((((sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0xd5 ||
                        ((sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0xdf ||
                         (sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0x50)))) ||
                       (sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0xcd)) ||
                      ((sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0xd7 ||
                       (sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0xe1)))))) &&
                    (uVar17 == 3)))) ||
                  (((sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0x25 ||
                    (sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0x26)) &&
                   (uVar17 == 1)))))) {
                if (0x34 < param_4) {
                  FUN_01d30f00(*param_2,param_1[0x19] + (longlong)(int)uVar17,1);
                }
                FUN_01d30f00(*param_2,&local_50,8);
                local_38[2] = 0.0;
                FUN_01d3a010(local_38,0xd,local_50);
                *(undefined1 *)(local_38 + 1) = 0;
              }
              else if ((param_4 < 0x40) &&
                      ((((sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0x4f ||
                         (sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0xcb)) ||
                        ((sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0xd5 ||
                         (sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0xdf)))) &&
                       (uVar17 == 1)))) {
                if (0x34 < param_4) {
                  FUN_01d30f00(*param_2,param_1[0x19] + 1,1);
                }
                FUN_01d30f00(*param_2,&local_50,8);
                local_38[2] = 0.0;
                lVar10 = FUN_01cfd090(param_1,1);
                FUN_01d3a010(local_38,0xd,*(undefined8 *)(lVar10 + 0x36));
                lVar10 = FUN_01cfd090(param_1,1);
                *(undefined1 *)(local_38 + 1) = *(undefined1 *)(lVar10 + 0x34);
              }
              else if ((param_4 < 0x41) &&
                      ((((sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0x7d ||
                         (sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0x7e)) ||
                        (sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0x80)) &&
                       (uVar17 == 3)))) {
                lVar10 = FUN_01cfd090(param_1,3);
                FUN_00415020(local_38,lVar10 + 0x34,0x1e);
              }
              else if ((param_4 < 0x45) &&
                      (((((sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0xf ||
                          (sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0x10)) ||
                         (sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0xd9)) ||
                        (sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0xda)) &&
                       (uVar17 == 4)))) {
                lVar10 = FUN_01cfd090(param_1,4);
                *(undefined1 *)local_38 = *(undefined1 *)(lVar10 + 0x34);
              }
              else if (((param_4 < 0x45) &&
                       ((((sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 4 ||
                          (sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 5)) ||
                         ((sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0x21 ||
                          ((sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0x77 ||
                           (sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 6)))))) ||
                        (sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0x22)))) &&
                      (uVar17 == 1)) {
                (**(code **)(*param_1 + 0x2d0))(param_1,0,&local_40);
                if (*local_40 < 2) {
                  lVar10 = FUN_01cfd090(param_1,1);
                  *(undefined1 *)local_38 = *(undefined1 *)(lVar10 + 0x34);
                }
                else {
                  *(undefined1 *)local_38 = 0;
                  if (*local_40 == 2) {
                    *(undefined1 *)local_38 = 1;
                  }
                  *local_40 = *local_40 - 1;
                }
              }
              else if (((param_4 < 0x45) &&
                       (sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 7)) &&
                      (uVar17 == 1)) {
                (**(code **)(*param_1 + 0x2d0))(param_1,0,&local_40);
                if (*local_40 == 1) {
                  *local_40 = 0;
                  *(undefined1 *)local_38 = 1;
                }
                else {
                  lVar10 = FUN_01cfd090(param_1,1);
                  *(undefined1 *)local_38 = *(undefined1 *)(lVar10 + 0x34);
                }
              }
              else if (((param_4 < 0x45) &&
                       ((sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 8 ||
                        (sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0x62)))) &&
                      (uVar17 == 2)) {
                (**(code **)(*param_1 + 0x2d0))(param_1,1,&local_40);
                if (*local_40 == 1) {
                  *local_40 = 0;
                  *(undefined1 *)local_38 = 1;
                }
                else {
                  lVar10 = FUN_01cfd090(param_1,2);
                  *(undefined1 *)local_38 = *(undefined1 *)(lVar10 + 0x34);
                }
              }
              else {
                if ((param_4 < 0x45) &&
                   (sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0x194)) {
                  if (uVar17 < 8) {
                    bVar18 = ((int)CONCAT71((int7)(uVar16 >> 8),1) << (bVar14 & 0x1f) & 0xf0U) != 0;
                  }
                  else {
                    bVar18 = false;
                  }
                  if (bVar18) {
                    if (cVar2 == '\x02') {
                      lVar10 = FUN_01cfd090(param_1,uVar17);
                      *(undefined2 *)local_38 = *(undefined2 *)(lVar10 + 0x34);
                    }
                    else if (cVar2 == '\x03') {
                      local_38[1] = 0.0;
                      lVar10 = FUN_01cfd090(param_1,uVar17);
                      FUN_01d3a010(local_38,3,*(undefined8 *)(lVar10 + 0x34));
                    }
                    else if (cVar2 == '\b') {
                      lVar10 = FUN_01cfd090(param_1,uVar17);
                      *(undefined1 *)local_38 = *(undefined1 *)(lVar10 + 0x34);
                    }
                    goto LAB_01cf9cf7;
                  }
                }
                if (0x34 < param_4) {
                  FUN_01d30f00(*param_2,param_1[0x19] + (longlong)(int)uVar17,1);
                }
                FUN_01cf5c20(param_1,*param_2,uVar17,param_4);
                sVar3 = (**(code **)(*param_1 + 0xf8))(param_1);
                if ((((sVar3 == 0x3f6) ||
                     (sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0x3f7)) &&
                    (uVar17 == 0)) && (param_4 == 0x10)) {
                  FUN_01d30f00(*param_2,&local_42,1);
                }
                sVar3 = (**(code **)(*param_1 + 0xf8))(param_1);
                if (((sVar3 == 10) && (uVar17 == 1)) && ((param_4 < 0x13 && (1e+50 < *local_38)))) {
                  *local_38 = 1e+30;
                }
              }
              goto LAB_01cf9cf7;
            }
          }
LAB_01cf93d6:
          if (cVar2 == '\x03') {
            local_38[1] = 0.0;
            lVar10 = FUN_01cfd090(param_1,uVar17);
            FUN_01d3a010(local_38,3,*(undefined8 *)(lVar10 + 0x34));
          }
          else if (cVar2 == '\r') {
            local_38[2] = 0.0;
            lVar10 = FUN_01cfd090(param_1,uVar17);
            FUN_01d3a010(local_38,0xd,*(undefined8 *)(lVar10 + 0x36));
            lVar10 = FUN_01cfd090(param_1,uVar17);
            *(undefined1 *)(local_38 + 1) = *(undefined1 *)(lVar10 + 0x34);
          }
        }
      }
LAB_01cf9cf7:
      uVar17 = uVar17 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  sVar3 = (**(code **)(*param_1 + 0xf8))(param_1);
  if ((sVar3 == 0x23) && (param_4 < 0x37)) {
    iVar6 = iVar7 + 1;
    (**(code **)(*param_1 + 0x2d0))(param_1,iVar6,&local_38);
    local_38[2] = 0.0;
    lVar10 = FUN_01cfd090(param_1,iVar6);
    FUN_01d3a010(local_38,0xd,*(undefined8 *)(lVar10 + 0x36));
    lVar10 = FUN_01cfd090(param_1,iVar6);
    *(undefined1 *)(local_38 + 1) = *(undefined1 *)(lVar10 + 0x34);
    iVar6 = iVar7 + 2;
    (**(code **)(*param_1 + 0x2d0))(param_1,iVar6,&local_38);
    local_38[1] = 0.0;
    lVar10 = FUN_01cfd090(param_1,iVar6);
    *local_38 = *(double *)(lVar10 + 0x34);
    lVar10 = FUN_01cfd090(param_1,iVar6);
    FUN_01d3a010(local_38,3,*(undefined8 *)(lVar10 + 0x34));
  }
  sVar3 = (**(code **)(*param_1 + 0xf8))(param_1);
  if (((((sVar3 == 0x79) || (sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0x7a)) ||
       (sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0x7b)) ||
      (sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0x7c)) && (param_4 < 0x37)) {
    (**(code **)(*param_1 + 0x2d0))(param_1,iVar7 + 1,&local_38);
    lVar10 = FUN_01cfd090(param_1,iVar7 + 1);
    *(undefined2 *)local_38 = *(undefined2 *)(lVar10 + 0x34);
  }
  sVar3 = (**(code **)(*param_1 + 0xf8))(param_1);
  if ((sVar3 == 0x24) && (param_4 == 0x10)) {
LAB_01cf9efe:
    (**(code **)(*param_1 + 0x2d0))(param_1,iVar7 + 1,&local_38);
    lVar10 = FUN_01cfd090(param_1,iVar7 + 1);
    *(undefined1 *)local_38 = *(undefined1 *)(lVar10 + 0x34);
  }
  else {
    sVar3 = (**(code **)(*param_1 + 0xf8))(param_1);
    if ((ushort)(sVar3 - 8U) < 0x20) {
      bVar18 = (1 << ((byte)(sVar3 - 8U) & 0x1f) & 0x6000001eU) != 0;
    }
    else {
      bVar18 = false;
    }
    if ((bVar18) && (param_4 < 0x13)) goto LAB_01cf9efe;
  }
  if (((param_4 < 0x15) && (uVar5 = (**(code **)(*param_1 + 0xf8))(param_1), 999 < uVar5)) &&
     ((uVar5 = (**(code **)(*param_1 + 0xf8))(param_1), uVar5 < 3000 ||
      (uVar5 = (**(code **)(*param_1 + 0xf8))(param_1), 0xbb9 < uVar5)))) {
    (**(code **)(*param_1 + 0x2d0))(param_1,iVar7 + 1,&local_38);
    sVar3 = (**(code **)(*param_1 + 0xf8))(param_1);
    if ((sVar3 == 0x3ec) || (sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0x3fe)) {
      local_38[1] = 0.0;
      lVar10 = FUN_01cfd090(param_1,iVar7 + 1);
      *local_38 = *(double *)(lVar10 + 0x34);
      lVar10 = FUN_01cfd090(param_1,iVar7 + 1);
      FUN_01d3a010(local_38,3,*(undefined8 *)(lVar10 + 0x34));
    }
    else {
      lVar10 = FUN_01cfd090(param_1,iVar7 + 1);
      FUN_00415020(local_38,lVar10 + 0x34,0x1e);
      *(undefined2 *)((longlong)local_38 + 0x1f) = 0xffff;
    }
  }
  if ((param_4 < 0x16) &&
     ((sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0x2901 ||
      (sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0x2902)))) {
    (**(code **)(*param_1 + 0x2d0))(param_1,iVar7 + 1,&local_38);
    lVar10 = FUN_01cfd090(param_1,iVar7 + 1);
    FUN_00415020(local_38,lVar10 + 0x34,0x1e);
    *(undefined2 *)((longlong)local_38 + 0x1f) = 0xffff;
  }
  if (param_4 < 0x1a) {
    uVar4 = (**(code **)(*param_1 + 0xf8))(param_1);
    cVar2 = FUN_01d3e720(uVar4);
    if (cVar2 != '\0') {
      FUN_01d3d920(param_1,0xe,0,&local_72);
      (**(code **)(*param_1 + 0x2d0))(param_1,local_72,&local_38);
      pdVar1 = local_38;
      dVar13 = (double)FUN_01d3bfb0(0,&PTR_FUN_01d354b8,5,2);
      pdVar1[1] = dVar13;
      dVar13 = (double)FUN_01d3bfb0(0,&PTR_FUN_01d354b8,5,2);
      pdVar1[2] = dVar13;
      (**(code **)(*param_1 + 0xf8))(param_1);
      FUN_01d3da40(local_372,param_1);
      iVar6 = FUN_01d3e250(local_372,1);
      if (0 < iVar6) {
        do {
          FUN_01d3c020(pdVar1[1],4);
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      iVar6 = FUN_01d3e250(local_372,2);
      if (0 < iVar6) {
        do {
          FUN_01d3c020(pdVar1[2],4);
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
    }
  }
  if ((param_4 < 0x17) &&
     ((((sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0x32 ||
        (sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0x33)) ||
       (sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0x34)) ||
      (((((sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 6 ||
          (sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 5)) ||
         ((sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0x22 ||
          ((sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0x21 ||
           (sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0xe)))))) ||
        (sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0xd)) ||
       (((sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0x10 ||
         (sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0xf)) ||
        (sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0x2c)))))))) {
    (**(code **)(*param_1 + 0x2d0))(param_1,iVar7 + 1,&local_38);
    lVar10 = FUN_01cfd090(param_1,iVar7 + 1);
    *(undefined1 *)local_38 = *(undefined1 *)(lVar10 + 0x34);
  }
LAB_01cfa385:
  FUN_00414560(&local_3b8,2);
  FUN_004144d0(&local_3a8);
  FUN_00414520(&local_3a0);
  FUN_00414560(&local_398,4);
  return local_3b9;
}

