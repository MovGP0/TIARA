/* Ghidra address: 01c3dc60 */
/* Ghidra symbol: FUN_01c3dc60 */


void FUN_01c3dc60(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined1 uVar3;
  ushort uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  double dVar12;
  undefined1 auStack_178 [32];
  double *local_158;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 *local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined1 *local_100;
  int local_ec;
  longlong local_e8;
  bool local_dd;
  bool local_dc;
  bool local_db;
  bool local_da;
  bool local_d9;
  wchar_t *local_d8;
  bool local_ca;
  bool local_c9;
  wchar_t *local_c8;
  bool local_ba;
  bool local_b9;
  wchar_t *local_b8;
  bool local_aa;
  bool local_a9;
  wchar_t *local_a8;
  bool local_9a;
  bool local_99;
  wchar_t *local_98;
  bool local_89;
  wchar_t *local_88;
  longlong *local_78;
  undefined8 local_70;
  undefined8 *local_68;
  char local_59;
  longlong local_58;
  undefined1 local_50 [4];
  int local_4c;
  int local_44;
  int local_40;
  int local_3c;
  double local_38;
  undefined8 local_30;
  longlong local_20;
  
  local_100 = auStack_178;
  local_140 = 0;
  local_138 = 0;
  local_130 = 0;
  local_128 = 0;
  local_120 = 0;
  local_118 = (undefined8 *)0x0;
  local_110 = 0;
  local_108 = 0;
  local_70 = 0;
  local_20 = 0;
  FUN_004b3260(*(undefined8 *)(*(longlong *)(param_1 + 0x708) + 0x4f0));
  local_59 = *(char *)(*(longlong *)(param_1 + 0x7f8) + 0xa9);
  FUN_01c3f800(param_1,L"Working...",100,0);
  if ((*(longlong *)(param_1 + 0x920) != 0) && (iVar5 = FUN_01c3cb30(param_1), iVar5 != -1)) {
    uVar6 = FUN_01c3cb30(param_1);
    cVar2 = FUN_01c28560(*(undefined8 *)(param_1 + 0x920),uVar6);
    if (cVar2 != '\0') goto LAB_01c3ebdb;
  }
  iVar5 = (**(code **)(**(longlong **)(param_1 + 0x708) + 0x260))(*(longlong **)(param_1 + 0x708));
  if (iVar5 < 0) {
    local_58 = 0;
  }
  else {
    plVar1 = *(longlong **)(param_1 + 0x708);
    uVar6 = (**(code **)(*plVar1 + 0x260))(plVar1);
    local_58 = (**(code **)(*(longlong *)plVar1[0x9e] + 0x30))((longlong *)plVar1[0x9e],uVar6);
  }
  local_20 = 0;
  cVar2 = FUN_01c3c010(param_1);
  if ((cVar2 == '\x02') && (cVar2 = FUN_01c3c270(param_1), cVar2 == '\0')) {
    local_20 = FUN_004b6930(&PTR_FUN_00478280,1);
    uVar8 = FUN_019a45d0();
    FUN_01c38bf0(uVar8,local_20,local_50);
  }
  cVar2 = FUN_01c3c010(param_1);
  if ((cVar2 == '\x03') || (cVar2 = FUN_01c3c010(param_1), cVar2 == '\x04')) {
    FUN_01c3c530(param_1,&local_108);
    cVar2 = FUN_01d44920(local_108);
    if (cVar2 != '\0') {
      local_68 = (undefined8 *)FUN_014af1b0(*(undefined8 *)(param_1 + 0x910),0);
      if (local_68 != (undefined8 *)0x0) {
        local_20 = FUN_004b6930(&PTR_FUN_00478280,1);
        FUN_01c38bf0(local_68,local_20,local_50);
        uVar8 = (**(code **)*local_68)(local_68);
        FUN_00418590(uVar8,&DAT_01984da0);
      }
    }
  }
  (**(code **)(**(longlong **)(param_1 + 0x708) + 0x278))(*(longlong **)(param_1 + 0x708));
  cVar2 = (**(code **)(**(longlong **)(param_1 + 0x820) + 0x260))(*(longlong **)(param_1 + 0x820));
  if (cVar2 == '\0') {
    cVar2 = FUN_01c3c010(param_1);
    if (cVar2 == '\x01') {
      local_dc = true;
    }
    else {
      if (param_2 == 0) {
        local_db = false;
      }
      else {
        local_88 = *(wchar_t **)(param_2 + 0x10);
        if (local_88 == L"rbLoadFromLib") {
          local_89 = true;
        }
        else if (local_88 == (wchar_t *)0x0) {
          local_89 = false;
        }
        else {
          iVar5 = FUN_0043e420(local_88,L"rbLoadFromLib");
          local_89 = iVar5 == 0;
        }
        if (local_89 == false) {
          local_98 = *(wchar_t **)(param_2 + 0x10);
          if (local_98 == L"cbxShapeLib") {
            local_99 = true;
          }
          else if (local_98 == (wchar_t *)0x0) {
            local_99 = false;
          }
          else {
            iVar5 = FUN_0043e420(local_98,L"cbxShapeLib");
            local_99 = iVar5 == 0;
          }
          local_9a = local_99;
        }
        else {
          local_9a = true;
        }
        if (local_9a == false) {
          local_a8 = *(wchar_t **)(param_2 + 0x10);
          if (local_a8 == L"cbShapeType") {
            local_a9 = true;
          }
          else if (local_a8 == (wchar_t *)0x0) {
            local_a9 = false;
          }
          else {
            iVar5 = FUN_0043e420(local_a8,L"cbShapeType");
            local_a9 = iVar5 == 0;
          }
          local_aa = local_a9;
        }
        else {
          local_aa = true;
        }
        if (local_aa == false) {
          local_b8 = *(wchar_t **)(param_2 + 0x10);
          if (local_b8 == L"cbShapePinFilter") {
            local_b9 = true;
          }
          else if (local_b8 == (wchar_t *)0x0) {
            local_b9 = false;
          }
          else {
            iVar5 = FUN_0043e420(local_b8,L"cbShapePinFilter");
            local_b9 = iVar5 == 0;
          }
          local_ba = local_b9;
        }
        else {
          local_ba = true;
        }
        if (local_ba == false) {
          local_c8 = *(wchar_t **)(param_2 + 0x10);
          if (local_c8 == L"eShapeSearch") {
            local_c9 = true;
          }
          else if (local_c8 == (wchar_t *)0x0) {
            local_c9 = false;
          }
          else {
            iVar5 = FUN_0043e420(local_c8,L"eShapeSearch");
            local_c9 = iVar5 == 0;
          }
          local_ca = local_c9;
        }
        else {
          local_ca = true;
        }
        if (local_ca == false) {
          local_d8 = *(wchar_t **)(param_2 + 0x10);
          if (local_d8 == L"cbShapeSS") {
            local_d9 = true;
          }
          else if (local_d8 == (wchar_t *)0x0) {
            local_d9 = false;
          }
          else {
            iVar5 = FUN_0043e420(local_d8,L"cbShapeSS");
            local_d9 = iVar5 == 0;
          }
          local_da = local_d9;
        }
        else {
          local_da = true;
        }
        local_db = local_da;
      }
      local_dc = local_db;
    }
    local_dd = local_dc;
  }
  else {
    local_dd = false;
  }
  if (local_dd == false) {
    if (*(char *)(param_1 + 0x908) != '\0') {
      iVar5 = FUN_01c3cb30(param_1);
      if (((iVar5 < 0) || (*(longlong *)(param_1 + 0x920) == 0)) ||
         (iVar5 = FUN_01c273c0(*(undefined8 *)(param_1 + 0x920)), iVar5 < 2)) {
        FUN_01c3c530(param_1,&local_138);
        FUN_00414ad0(param_1 + 0xbd0,local_138);
      }
      else {
        local_78 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
        uVar6 = FUN_01c3cb30(param_1);
        iVar5 = FUN_01c284f0(*(undefined8 *)(param_1 + 0x920),uVar6);
        uVar6 = FUN_01c3cb30(param_1);
        iVar7 = FUN_01c28500(*(undefined8 *)(param_1 + 0x920),uVar6);
        local_40 = iVar5;
        if (iVar5 <= iVar7) {
          iVar5 = (iVar7 - iVar5) + 1;
          do {
            plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x920) + 8);
            (**(code **)(*plVar1 + 0x18))(plVar1,&local_128,local_40);
            (**(code **)(*local_78 + 0x78))(local_78,local_128);
            local_40 = local_40 + 1;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        uVar6 = FUN_01c3cb30(param_1);
        FUN_01c273d0(*(undefined8 *)(param_1 + 0x920),&local_130,uVar6);
        FUN_00414ad0(param_1 + 0xbd0,local_130);
        local_40 = 1;
        while( true ) {
          local_e8 = *(longlong *)(param_1 + 0xbd0);
          local_ec = 0;
          if (local_e8 != 0) {
            local_ec = *(int *)(local_e8 + -4);
          }
          if (local_ec < local_40) break;
          uVar4 = *(short *)(*(longlong *)(param_1 + 0xbd0) + -2 + (longlong)local_40 * 2) - 0x20;
          if (uVar4 < 0x60) {
            bVar11 = ((byte)(&DAT_01c3ee60)[(longlong)(int)(uVar4 & 0x7f) >> 3] >> (uVar4 & 7) & 1)
                     != 0;
          }
          else {
            bVar11 = false;
          }
          if (bVar11) {
            FUN_00416e20(param_1 + 0xbd0,local_40,1);
          }
          else {
            local_40 = local_40 + 1;
          }
        }
        local_158 = *(double **)(param_1 + 0xbd0);
        FUN_00416cd0(param_1 + 0xbd0,3,*(undefined8 *)PTR_DAT_020030c8,&DAT_01c3ee78);
        (**(code **)(*local_78 + 0x100))(local_78,*(undefined8 *)(param_1 + 0xbd0));
        FUN_00410f20(local_78);
      }
      FUN_01c3c530(param_1,&local_70);
      local_68 = (undefined8 *)FUN_01c40410(param_1,&local_70,0,&local_58);
      if (local_68 != (undefined8 *)0x0) {
        FUN_0064dd90(*(undefined8 *)(param_1 + 0x788),&local_140);
        local_58 = FUN_019a26a0(local_68,local_140);
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x708) + 0x4f0);
        (**(code **)(*plVar1 + 0x80))(plVar1,*(undefined8 *)(local_58 + 0x10),local_58);
        (**(code **)(**(longlong **)(param_1 + 0x708) + 0x268))(*(longlong **)(param_1 + 0x708),0);
        uVar8 = (**(code **)*local_68)(local_68);
        FUN_00418590(uVar8,&DAT_01984da0);
      }
    }
  }
  else {
    *(undefined4 *)PTR_DAT_020054e8 = *(undefined4 *)(param_1 + 0x970);
    FUN_00414ad0(PTR_DAT_02003008,*(undefined8 *)(param_1 + 0x968));
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x720),&local_110);
    FUN_00414ad0(PTR_DAT_020038a8,local_110);
    iVar5 = (**(code **)(**(longlong **)(param_1 + 0x730) + 0x260))(*(longlong **)(param_1 + 0x730))
    ;
    if (iVar5 == 0) {
      FUN_00414ad0(PTR_DAT_020020b0,&DAT_01c3ee58);
    }
    else {
      FUN_0064dd90(*(undefined8 *)(param_1 + 0x730),&local_118);
      FUN_00414ad0(PTR_DAT_020020b0,local_118);
    }
    uVar3 = (**(code **)(**(longlong **)(param_1 + 0x890) + 0x260))(*(longlong **)(param_1 + 0x890))
    ;
    *PTR_DAT_020010c8 = uVar3;
    uVar3 = FUN_01c3d590(param_1);
    *PTR_DAT_020011a0 = uVar3;
    cVar2 = FUN_01c3c010(param_1);
    if ((cVar2 == '\x02') && (cVar2 = FUN_01c3c270(param_1), cVar2 == '\0')) {
LAB_01c3e3ff:
      uVar3 = 1;
    }
    else {
      cVar2 = FUN_01c3c010(param_1);
      if ((cVar2 == '\x03') || (cVar2 = FUN_01c3c010(param_1), cVar2 == '\x04')) {
        FUN_01c3c530(param_1,&local_120);
        cVar2 = FUN_01d44920(local_120);
        if (cVar2 != '\0') goto LAB_01c3e3ff;
      }
      uVar3 = 0;
    }
    *PTR_DAT_02005150 = uVar3;
    local_3c = 0;
    local_30 = FUN_01c32be0(&DAT_01c32890,1,0x1000);
    iVar5 = *(int *)(*(longlong *)(param_1 + 0x960) + 0x10);
    local_40 = 0;
    if (-1 < iVar5 + -1) {
      do {
        if ((*(char *)(*(longlong *)(param_1 + 0x7f8) + 0xa9) != '\0') &&
           (lVar9 = FUN_0040c770((double)(local_40 * 100) /
                                 (double)*(int *)(*(longlong *)(param_1 + 0x960) + 0x10)),
           local_3c < lVar9)) {
          local_3c = (int)lVar9;
          FUN_01c3fdb0(param_1,0);
        }
        uVar8 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x960),local_40);
        uVar6 = FUN_01c3cb30(param_1);
        local_158 = &local_38;
        cVar2 = FUN_01c342c0(uVar8,*(undefined8 *)(param_1 + 0x920),uVar6,local_20);
        if (cVar2 != '\0') {
          local_44 = 0;
          uVar8 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x960),local_40);
          local_4c = FUN_01c337e0(uVar8);
          uVar8 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x960),local_40);
          FUN_01c3dbc0(*(undefined8 *)(*(longlong *)(param_1 + 0x708) + 0x4f0),uVar8,&local_44);
          while (plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x708) + 0x4f0),
                iVar7 = (**(code **)(*plVar1 + 0x28))(plVar1), local_44 < iVar7) {
            plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x708) + 0x4f0);
            uVar8 = (**(code **)(*plVar1 + 0x30))(plVar1,local_44);
            iVar7 = FUN_01c337e0(uVar8);
            if (iVar7 != local_4c) break;
            lVar9 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x960),local_40);
            plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x708) + 0x4f0);
            lVar10 = (**(code **)(*plVar1 + 0x30))(plVar1,local_44);
            iVar7 = FUN_0043e210(*(undefined8 *)(lVar9 + 0x10),*(undefined8 *)(lVar10 + 0x10));
            if (iVar7 < 1) break;
            local_44 = local_44 + 1;
          }
          while ((plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x708) + 0x4f0),
                 iVar7 = (**(code **)(*plVar1 + 0x28))(plVar1), local_44 < iVar7 &&
                 (dVar12 = (double)FUN_01c32d10(local_30,local_44), local_38 < dVar12))) {
            local_44 = local_44 + 1;
          }
          FUN_01c32df0(local_30,local_44,local_38);
          lVar9 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x960),local_40);
          uVar8 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x960),local_40);
          plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x708) + 0x4f0);
          (**(code **)(*plVar1 + 0xd0))(plVar1,local_44,*(undefined8 *)(lVar9 + 0x10),uVar8);
        }
        local_40 = local_40 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    if (local_58 != 0) {
      local_44 = 0;
      while ((plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x708) + 0x4f0),
             iVar5 = (**(code **)(*plVar1 + 0x28))(plVar1), local_44 < iVar5 &&
             (plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x708) + 0x4f0),
             lVar9 = (**(code **)(*plVar1 + 0x30))(plVar1,local_44), lVar9 != local_58))) {
        local_44 = local_44 + 1;
      }
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x708) + 0x4f0);
      iVar5 = (**(code **)(*plVar1 + 0x28))(plVar1);
      if (local_44 < iVar5) {
        (**(code **)(**(longlong **)(param_1 + 0x708) + 0x268))
                  (*(longlong **)(param_1 + 0x708),local_44);
      }
    }
    FUN_00410f20(local_30);
  }
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x708) + 0x4f0);
  iVar5 = (**(code **)(*plVar1 + 0x28))(plVar1);
  if (0 < iVar5) {
    (**(code **)(**(longlong **)(param_1 + 0x708) + 0x268))(*(longlong **)(param_1 + 0x708),0);
  }
  if (local_20 != 0) {
    FUN_00410f20(local_20);
  }
  local_20 = 0;
LAB_01c3ebdb:
  if (local_59 == '\0') {
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x7f8),0);
  }
  FUN_004b3390(*(undefined8 *)(*(longlong *)(param_1 + 0x708) + 0x4f0));
  FUN_01c38160(param_1);
  FUN_00414480(&local_140);
  FUN_00414560(&local_138,4);
  FUN_00414560(&local_118,2);
  FUN_00414480(&local_108);
  FUN_00414480(&local_70);
  return;
}

