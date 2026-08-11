/* Ghidra address: 01552c00 */
/* Ghidra symbol: FUN_01552c00 */


void FUN_01552c00(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  byte bVar4;
  char cVar5;
  undefined1 uVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  byte bVar12;
  double dVar13;
  double dVar14;
  int local_174;
  int local_170;
  int local_16c;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double *local_108;
  undefined1 local_100 [8];
  undefined8 local_f8;
  undefined8 local_e0;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  char local_39 [17];
  
  local_168 = 0;
  local_160 = 0;
  local_150 = 0;
  local_158 = 0;
  local_148 = 0;
  local_140 = 0;
  local_138 = 0;
  local_130 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  local_78 = 0;
  local_80 = 0;
  FUN_004b6930(&PTR_FUN_00478280,1);
  plVar7 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  local_170 = 0;
  bVar12 = 0;
  local_108 = (double *)0x0;
  uVar8 = FUN_01d34560(&PTR_FUN_00dadb90,1,5,5);
  *(undefined8 *)(param_1 + 0x158) = uVar8;
  iVar10 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x270) + 0x8f0) + 0x10);
  local_174 = 0;
  if (-1 < iVar10 + -1) {
    do {
      uVar8 = FUN_01d347d0(*(undefined8 *)(*(longlong *)(param_1 + 0x270) + 0x8f0),local_174);
      *(undefined8 *)(param_1 + 0x150) = uVar8;
      iVar11 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x150) + 0x28) + 0x10);
      local_16c = 0;
      if (-1 < iVar11 + -1) {
        do {
          uVar8 = FUN_01571ee0(*(undefined8 *)(*(longlong *)(param_1 + 0x150) + 0x28),local_16c);
          *(undefined8 *)(param_1 + 0x180) = uVar8;
          iVar1 = *(int *)(*(longlong *)(param_1 + 0x180) + 0x34);
          if ((iVar1 != -1) && (*(int *)(*(longlong *)(param_1 + 0x180) + 0x50) == 1)) {
            if (iVar1 == 1) {
              FUN_00414b50(param_1 + 0x148,PTR_DAT_01f61888);
            }
            else if (iVar1 == 2) {
              FUN_00414b50(param_1 + 0x148,PTR_DAT_01f61890);
            }
            cVar5 = FUN_00dae960(*(undefined8 *)(param_1 + 0x158),
                                 *(undefined4 *)(*(longlong *)(param_1 + 0x180) + 0x30),
                                 param_1 + 0x23c);
            if (cVar5 == '\0') {
              FUN_01d43440(&local_130,*(undefined4 *)(*(longlong *)(param_1 + 0x180) + 0x30));
              FUN_00416cd0(param_1 + 0x228,5,&DAT_01553de4,local_130,L" <= ",
                           *(undefined8 *)(param_1 + 0x148),&DAT_01553e10);
              (**(code **)(*plVar7 + 0x78))(plVar7,*(undefined8 *)(param_1 + 0x228));
              local_170 = local_170 + 1;
              FUN_00dae910(*(undefined8 *)(param_1 + 0x158),
                           *(undefined4 *)(*(longlong *)(param_1 + 0x180) + 0x30));
            }
          }
          local_16c = local_16c + 1;
          iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
      }
      local_174 = local_174 + 1;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  if ((*(int *)(param_1 + 0x17c) == 1) &&
     (0 < *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x270) + 0x8f0) + 0x10))) {
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x270) + 0x8f8);
    (**(code **)(*plVar2 + 0x78))(plVar2,0);
  }
  FUN_00410f20(*(undefined8 *)(param_1 + 0x158));
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x270) + 0x8f0);
  iVar10 = *(int *)(lVar3 + 0x10);
  local_174 = 0;
  bVar4 = 0;
  if (-1 < iVar10 + -1) {
    do {
      bVar12 = bVar4;
      uVar8 = FUN_01d347d0(lVar3,local_174);
      *(undefined8 *)(param_1 + 0x208) = uVar8;
      *(undefined1 *)(param_1 + 0x147) = 0;
      FUN_01d3f0e0(&local_138,*(undefined2 *)(*(longlong *)(param_1 + 0x208) + 8),
                   *(undefined8 *)(*(longlong *)(param_1 + 0x208) + 0x40));
      FUN_00414b50(param_1 + 0x138,local_138);
      cVar5 = FUN_0154cf30(*(undefined8 *)(param_1 + 0x270),
                           *(undefined8 *)(*(longlong *)(param_1 + 0x208) + 0x40));
      if ((cVar5 == '\0') &&
         (cVar5 = FUN_01d3f1d0(*(undefined8 *)(*(longlong *)(param_1 + 0x208) + 0x40)),
         cVar5 == '\0')) {
        iVar11 = FUN_00416db0(*(undefined8 *)(param_1 + 0x138),L"NAND");
        if (iVar11 == 0) {
          FUN_00414b50(param_1 + 0x138,&DAT_01553e38);
          *(undefined1 *)(param_1 + 0x147) = 1;
        }
        iVar11 = FUN_00416db0(*(undefined8 *)(param_1 + 0x138),L"XNOR");
        if (iVar11 == 0) {
          FUN_00414b50(param_1 + 0x138,&DAT_01553e64);
          *(undefined1 *)(param_1 + 0x147) = 1;
        }
        iVar11 = FUN_00416db0(*(undefined8 *)(param_1 + 0x138),&DAT_01553e78);
        if (iVar11 == 0) {
          FUN_00414b50(param_1 + 0x138,&PTR_LAB_01553e8c);
          *(undefined1 *)(param_1 + 0x147) = 1;
        }
        iVar11 = FUN_00416db0(*(undefined8 *)(param_1 + 0x138),&DAT_01553ea0);
        if (iVar11 == 0) {
          *(undefined1 *)(param_1 + 0x147) = 1;
        }
        iVar11 = FUN_00416db0(*(undefined8 *)(param_1 + 0x138),&DAT_01553eb4);
        if (iVar11 == 0) {
          FUN_00414480(param_1 + 0x138);
        }
        uVar8 = FUN_015720c0(*(undefined8 *)(*(longlong *)(param_1 + 0x208) + 0x28));
        *(undefined8 *)(param_1 + 0x180) = uVar8;
        *(undefined4 *)(param_1 + 0x168) = *(undefined4 *)(*(longlong *)(param_1 + 0x180) + 0x30);
        FUN_01d43440(&local_140,*(undefined4 *)(param_1 + 0x168));
        FUN_00416ba0(param_1 + 0x218,&DAT_01553de4,local_140);
        cVar5 = FUN_0154f5b0(*(undefined8 *)(param_1 + 0x270));
        if (cVar5 == '\0') {
          lVar9 = FUN_01571ef0(*(undefined8 *)(*(longlong *)(param_1 + 0x270) + 0x750),
                               *(undefined4 *)(param_1 + 0x168));
          *(longlong *)(*(longlong *)(param_1 + 0x270) + 0x28) = lVar9;
          if (lVar9 != 0) {
            FUN_01550c40(*(undefined8 *)(param_1 + 0x270),&local_48,lVar9);
            FUN_00416ba0(param_1 + 0x218,&DAT_01553ec8,local_48);
          }
        }
        else if ((*(longlong *)(*(longlong *)(param_1 + 0x180) + 0x28) == 0) ||
                (cVar5 = FUN_0154f5b0(*(undefined8 *)(param_1 + 0x270)), cVar5 == '\0')) {
          FUN_01550c40(*(undefined8 *)(param_1 + 0x270),&local_48,*(undefined8 *)(param_1 + 0x180));
          FUN_00416ba0(param_1 + 0x218,&DAT_01553ec8,local_48);
        }
        else {
          FUN_00414b50(&local_48,*(undefined8 *)(*(longlong *)(param_1 + 0x180) + 0x28));
          FUN_00416ba0(param_1 + 0x218,&DAT_01553ec8,local_48);
        }
        if (*(int *)(param_1 + 0x17c) == 0) {
          FUN_01575810(*(undefined8 *)(*(longlong *)(param_1 + 0x270) + 0x8d0),
                       *(undefined4 *)(param_1 + 0x168),local_48);
        }
        FUN_00416ba0(param_1 + 0x228,*(undefined8 *)(param_1 + 0x218),L" <= ");
        iVar11 = *(int *)(*(longlong *)(param_1 + 0x208) + 8);
        if ((((iVar11 != 0x45e) && (iVar11 != 0x462)) && (iVar11 != 0x464)) &&
           ((iVar11 != 0x43 && (iVar11 != 0x45d)))) {
          FUN_00416ad0(param_1 + 0x228,0);
        }
        *(undefined4 *)(param_1 + 0x164) = 0;
        iVar11 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x208) + 0x28) + 0x10);
        local_16c = 0;
        if (-1 < iVar11 + -1) {
          do {
            uVar8 = FUN_01571ee0(*(undefined8 *)(*(longlong *)(param_1 + 0x208) + 0x28),local_16c);
            *(undefined8 *)(param_1 + 0x180) = uVar8;
            if ((*(int *)(*(longlong *)(param_1 + 0x180) + 0x54) == 1) &&
               (*(int *)(param_1 + 0x164) = *(int *)(param_1 + 0x164) + 1,
               *(int *)(param_1 + 0x17c) == 0)) {
              FUN_01550c40(*(undefined8 *)(param_1 + 0x270),&local_148,
                           *(undefined8 *)(param_1 + 0x180));
              FUN_01575810(*(undefined8 *)(*(longlong *)(param_1 + 0x270) + 0x8d0),
                           *(undefined4 *)(*(longlong *)(param_1 + 0x180) + 0x30),local_148);
            }
            local_16c = local_16c + 1;
            iVar11 = iVar11 + -1;
          } while (iVar11 != 0);
        }
        cVar5 = FUN_01d400c0(*(undefined4 *)(*(longlong *)(param_1 + 0x208) + 8));
        if (cVar5 == '\0') {
          FUN_01d3eed0(*(undefined8 *)(*(longlong *)(param_1 + 0x208) + 0x40),local_100);
          uVar8 = FUN_01552bd0(param_1,local_f8,*(undefined8 *)(param_1 + 0x208));
          FUN_015f0a10(&local_68,uVar8,2);
          uVar8 = FUN_01552bd0(param_1,local_e0,*(undefined8 *)(param_1 + 0x208));
          FUN_015f0a10(&local_70,uVar8,2);
        }
        else {
          FUN_01569af0(*(undefined8 *)(param_1 + 0x270),*(undefined8 *)(param_1 + 0x208),
                       *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x208) + 0x28) + 0x10) + -1,
                       &local_110,&local_118,&local_120,&local_128);
          FUN_01601e10(*(undefined8 *)(*(longlong *)(param_1 + 0x208) + 0x40),&local_108);
          dVar13 = (*local_108 - local_110) + local_120;
          dVar14 = (local_108[1] - local_118) + local_128;
          if (dVar13 < 0.0) {
            dVar13 = 0.0;
          }
          if (dVar14 < 0.0) {
            dVar14 = 0.0;
          }
          uVar8 = FUN_01552bd0(param_1,dVar13,*(undefined8 *)(param_1 + 0x208));
          FUN_015f0a10(&local_68,uVar8,2);
          uVar8 = FUN_01552bd0(param_1,dVar14,*(undefined8 *)(param_1 + 0x208));
          FUN_015f0a10(&local_70,uVar8,2);
        }
        iVar11 = FUN_00416db0(*(undefined8 *)(param_1 + 0x138),&DAT_01553e64);
        if (iVar11 == 0) {
          FUN_00414480(&local_50);
          FUN_01552600(param_1,&local_150,0,&DAT_01553e38,0x30,local_39);
          FUN_01552600(param_1,&local_158,0,&DAT_01553e38,0x31,local_39);
          FUN_00416cd0(&local_50,6,local_50,&DAT_01553ed8,local_150,L") OR (",local_158,
                       &DAT_01553f08);
        }
        else {
          iVar11 = FUN_00416db0(*(undefined8 *)(param_1 + 0x138),&DAT_01553ea0);
          if (iVar11 == 0) {
            FUN_01552600(param_1,&local_50,0,0,0x30,local_39);
          }
          else {
            FUN_01552600(param_1,&local_50,0,*(undefined8 *)(param_1 + 0x138),0x31,local_39);
          }
        }
        FUN_01552600(param_1,&local_58,1,*(undefined8 *)(param_1 + 0x138),0x31,local_39);
        if (*(char *)(param_1 + 0x147) != '\0') {
          FUN_00416cd0(&local_58,3,L"NOT( ",local_58,&DAT_01553f34);
        }
        FUN_01552a50(param_1,&local_60,*(undefined4 *)(*(longlong *)(param_1 + 0x208) + 8));
        uVar6 = FUN_01601b80(*(undefined8 *)(*(longlong *)(param_1 + 0x208) + 0x40),param_1 + 0x238,
                             param_1 + 0x237);
        *(undefined1 *)(param_1 + 0x137) = uVar6;
        if (0 < *(int *)(param_1 + 0x238)) {
          FUN_015f1c60(&local_160,*(undefined1 *)(param_1 + 0x237));
          FUN_00416cd0(param_1 + 0x128,3,&DAT_01553f48,local_160,&DAT_01553f48);
        }
        if (1 < *(int *)(param_1 + 0x238)) {
          FUN_015f1c60(&local_168,*(undefined1 *)(param_1 + 0x236));
          FUN_00416cd0(param_1 + 0x120,3,&DAT_01553f48,local_168,&DAT_01553f48);
        }
        if (*(char *)(param_1 + 0x137) != '\0') {
          FUN_00414b50(&local_60,*(undefined8 *)(param_1 + 0x128));
        }
        iVar11 = FUN_00416db0(local_60,&DAT_01553f58);
        if (iVar11 == 0) {
          FUN_00414b50(&local_78,local_68);
          FUN_00414b50(&local_80,local_70);
        }
        else {
          FUN_00414b50(&local_78,local_70);
          FUN_00414b50(&local_80,local_68);
        }
        if ((*(char *)(*(longlong *)(param_1 + 0x208) + 0xfc) == '\0') ||
           (*(char *)(*(longlong *)(param_1 + 0x270) + 0x955) != '\0')) {
          if (*(char *)(param_1 + 0x137) == '\0') {
            if (local_39[0] == '\0') {
              FUN_00416cd0(param_1 + 0x228,6,*(undefined8 *)(param_1 + 0x228),local_60,L" when ",
                           local_50,L" else ",local_58);
            }
            else {
              FUN_00416ad0(param_1 + 0x228,local_58);
            }
          }
          else {
            FUN_00416ad0(param_1 + 0x228,local_60);
          }
        }
        else if (*(char *)(param_1 + 0x137) == '\0') {
          if (local_39[0] == '\0') {
            FUN_00416cd0(param_1 + 0x228,10,*(undefined8 *)(param_1 + 0x228),local_60,L" after ",
                         local_78,L" when ",local_50,L" else ",local_58,L" after ",local_80);
          }
          else {
            FUN_00416cd0(param_1 + 0x228,4,*(undefined8 *)(param_1 + 0x228),local_58,L" after ",
                         local_80);
          }
        }
        else {
          FUN_00416cd0(param_1 + 0x228,4,*(undefined8 *)(param_1 + 0x228),local_60,L" after ",
                       local_78);
        }
        iVar11 = *(int *)(*(longlong *)(param_1 + 0x208) + 8);
        if ((((iVar11 != 0x45e) && (iVar11 != 0x462)) && (iVar11 != 0x464)) &&
           ((iVar11 != 0x43 && (iVar11 != 0x45d)))) {
          FUN_00416ad0(param_1 + 0x228,0);
        }
        FUN_00416ad0(param_1 + 0x228,&DAT_01553e10);
        if (*(longlong *)(*(longlong *)(param_1 + 0x208) + 0x10) != 0) {
          iVar11 = 0;
          if (*(longlong *)(param_1 + 0x228) != 0) {
            iVar11 = *(int *)(*(longlong *)(param_1 + 0x228) + -4);
          }
          iVar11 = 0x32 - iVar11;
          if (0 < iVar11) {
            do {
              FUN_00416ad0(param_1 + 0x228,&DAT_01553ec8);
              iVar11 = iVar11 + -1;
            } while (iVar11 != 0);
          }
          FUN_00416cd0(param_1 + 0x228,3,*(undefined8 *)(param_1 + 0x228),&LAB_01553fc0,
                       *(undefined8 *)(*(longlong *)(param_1 + 0x208) + 0x10));
        }
        local_170 = local_170 + 1;
        bVar12 = 1;
        (**(code **)(*plVar7 + 0x78))(plVar7,*(undefined8 *)(param_1 + 0x228));
      }
      local_174 = local_174 + 1;
      iVar10 = iVar10 + -1;
      bVar4 = bVar12;
    } while (iVar10 != 0);
  }
  if ((*(int *)(param_1 + 0x17c) == 1) && (0 < local_170)) {
    cVar5 = FUN_0154f5b0(*(undefined8 *)(param_1 + 0x270));
    if (cVar5 != '\0') {
      FUN_0154f560(*(undefined8 *)(param_1 + 0x270));
    }
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x270) + 0x8f8);
    (**(code **)(*plVar2 + 0x88))(plVar2,plVar7);
  }
  if ((bool)(bVar12 & *(int *)(param_1 + 0x17c) == 1)) {
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x270) + 0x8f8);
    (**(code **)(*plVar2 + 0x78))(plVar2,0);
  }
  FUN_00410f20(plVar7);
  if (local_108 != (double *)0x0) {
    FUN_004095f0(local_108);
  }
  FUN_00414560(&local_168,8);
  FUN_00414560(&local_80,8);
  return;
}

