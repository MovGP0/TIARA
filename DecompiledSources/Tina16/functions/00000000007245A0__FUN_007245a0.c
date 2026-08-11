/* Ghidra address: 007245a0 */
/* Ghidra symbol: FUN_007245a0 */


int FUN_007245a0(longlong *param_1,code *param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  uint uVar5;
  bool bVar6;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  undefined1 *local_100;
  uint *local_f8;
  uint *local_f0;
  bool local_e1;
  longlong local_e0;
  longlong local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 local_c0 [2];
  undefined8 local_b8;
  undefined *local_b0;
  undefined8 local_a8;
  undefined4 local_94;
  undefined8 local_90;
  int local_88;
  undefined1 *local_70;
  undefined8 local_68;
  uint local_60;
  undefined8 local_58;
  code *local_48;
  longlong local_40;
  uint local_2c;
  byte local_26;
  byte local_25;
  int local_24;
  undefined8 local_20;
  
  local_100 = auStack_128;
  local_108 = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_d8 = 0;
  iVar2 = FUN_0044f080();
  if ((iVar2 < 6) || (DAT_01e050e5 == '\0')) {
LAB_0072463f:
    local_e1 = false;
  }
  else {
    cVar1 = FUN_00781870();
    if ((cVar1 != '\0') && ((*PTR_DAT_02002b98 & 2) != 0)) goto LAB_0072463f;
    if (DAT_01e050e8 == 0xffffffff) {
      DAT_01e050e8 = FUN_0044f100(L"comctl32.dll");
    }
    local_e1 = 0x5ffff < DAT_01e050e8;
  }
  if ((local_e1 != false) && (param_1[0x19] == 0)) {
    iVar2 = (**(code **)PTR_DAT_02005b78)();
    if ((iVar2 != 0) && (((param_1[0x2c] == 0 && (param_1[0x13] == 0)) && (param_1[0x15] == 0)))) {
      if (param_2 == thunk_FUN_03e77af1) {
        local_20 = FUN_00722de0(&PTR_FUN_00722c38,1,param_1);
      }
      else {
        local_20 = FUN_00722de0(&PTR_FUN_00722d70,1,param_1);
      }
      cVar1 = FUN_00723190(local_20,param_3);
      local_24 = -(uint)(cVar1 != '\0');
      FUN_00410f20(local_20);
      goto LAB_00724c6c;
    }
  }
  (**(code **)(*(longlong *)param_1[0x22] + 0x90))((longlong *)param_1[0x22]);
  FUN_0040d200(local_c0,0x98,0);
  iVar2 = FUN_0044f080();
  if (iVar2 < 5) {
LAB_00724772:
    iVar2 = FUN_0044f060();
    if (iVar2 == 1) {
      iVar2 = FUN_0044f080();
      if (3 < iVar2) {
        iVar2 = FUN_0044f0a0();
        if (0x59 < iVar2) goto LAB_00724790;
      }
    }
    local_c0[0] = 0x88;
  }
  else {
    iVar2 = FUN_0044f060();
    if (iVar2 != 2) goto LAB_00724772;
LAB_00724790:
    local_c0[0] = 0x98;
  }
  local_b0 = PTR_IMAGE_DOS_HEADER_0200c280;
  FUN_00724520(auStack_128,&local_108,param_1[0x1c]);
  FUN_00414b50(&local_c8,local_108);
  local_a8 = FUN_00416740(local_c8);
  local_94 = (undefined4)param_1[0x1d];
  *(undefined4 *)((longlong)param_1 + 0xec) = local_94;
  if ((*(uint *)(param_1 + 0x1b) & 0x40) == 0) {
    local_88 = 0x104;
  }
  else {
    local_88 = 0xffef;
  }
  FUN_004169f0(&local_d0,local_88 + 2);
  local_90 = FUN_00416740(local_d0);
  FUN_0040d200(local_90,(local_88 + 2) * 2,0);
  plVar3 = (longlong *)FUN_00416740(param_1[0x21]);
  FUN_00442580(local_90,plVar3,local_88);
  if ((param_1[0x1e] == 0) && (DAT_01e050e4 != '\0')) {
    local_70 = &LAB_00724d12;
  }
  else {
    local_70 = (undefined1 *)FUN_00416740(param_1[0x1e]);
  }
  local_68 = FUN_00416740(param_1[0x1f]);
  local_60 = 0x20;
  local_2c = 0;
  local_25 = 0;
  local_f0 = &DAT_01e052cc;
  do {
    if (local_25 < 0x20) {
      bVar6 = (1 << (local_25 & 0x1f) & *(uint *)(param_1 + 0x1b)) != 0;
      plVar3 = param_1;
    }
    else {
      bVar6 = false;
    }
    if (bVar6) {
      local_60 = local_60 | *local_f0;
    }
    local_25 = local_25 + 1;
    local_f0 = local_f0 + 1;
  } while (local_25 != 0x16);
  if (*PTR_DAT_02003210 == '\0') {
    local_60 = local_60 & 0xfff7ffff;
  }
  else {
    local_60 = local_60 ^ 0x80000;
    iVar2 = FUN_0044f080();
    if (iVar2 < 5) {
LAB_007249a2:
      iVar2 = FUN_0044f060();
      if (iVar2 == 1) {
        iVar2 = FUN_0044f080();
        if (3 < iVar2) {
          iVar2 = FUN_0044f0a0();
          if (0x59 < iVar2) goto LAB_007249c4;
        }
      }
    }
    else {
      iVar2 = FUN_0044f060();
      if (iVar2 != 2) goto LAB_007249a2;
LAB_007249c4:
      local_26 = 0;
      local_f8 = &DAT_01e05324;
      do {
        if (local_26 < 8) {
          uVar5 = (int)CONCAT71((int7)((ulonglong)plVar3 >> 8),1) << (local_26 & 0x1f);
          plVar3 = (longlong *)(ulonglong)uVar5;
          bVar6 = ((byte)uVar5 & *(byte *)(param_1 + 0x2e)) != 0;
        }
        else {
          bVar6 = false;
        }
        if (bVar6) {
          local_2c = local_2c | *local_f8;
        }
        local_26 = local_26 + 1;
        local_f8 = local_f8 + 1;
      } while (local_26 != 1);
      local_26 = 1;
    }
  }
  FUN_00414b50(&local_d8,param_1[0x20]);
  if ((local_d8 == 0) && ((local_60 & 0x80000) == 0)) {
    FUN_00441a10(&local_d8,param_1[0x21]);
    FUN_00416e20(&local_d8,1,1);
  }
  if (local_d8 != 0) {
    local_58 = FUN_00416740(local_d8);
  }
  if (((*(uint *)(param_1 + 0x1b) & 0x10000) == 0) && (*PTR_DAT_02003210 != '\0')) {
    local_48 = FUN_007238c0;
  }
  else {
    local_48 = FUN_00721e30;
  }
  lVar4 = param_1[0x19];
  if (lVar4 != 0) {
    local_60 = local_60 | 0x40;
    local_40 = lVar4;
    if ((undefined *)param_1[0x12] != (undefined *)0x0) {
      local_b0 = (undefined *)param_1[0x12];
    }
  }
  if (*(char *)(*(longlong *)PTR_DAT_02004030 + 400) == '\0') {
    local_b8 = FUN_00721cc0();
  }
  else {
    lVar4 = FUN_00652880(&PTR_FUN_00721fa0,1,0);
    param_1[0x11] = lVar4;
    local_e0 = param_1[0x11];
    *(longlong **)(local_e0 + 0x490) = param_1;
    *(undefined8 *)(local_e0 + 0x498) = param_3;
    local_b8 = FUN_0065b870(param_1[0x11]);
  }
  local_24 = (**(code **)(*param_1 + 0xa0))(param_1,param_2,local_c0);
  if (local_24 != 0) {
    FUN_007240b0(param_1,local_c0);
    if ((local_60 & 0x400) == 0) {
      *(uint *)(param_1 + 0x1b) = *(uint *)(param_1 + 0x1b) & 0xffffff7f;
    }
    else {
      *(uint *)(param_1 + 0x1b) = *(uint *)(param_1 + 0x1b) | 0x80;
    }
    if ((local_60 & 1) == 0) {
      *(uint *)(param_1 + 0x1b) = *(uint *)(param_1 + 0x1b) & 0xfffffffe;
    }
    else {
      *(uint *)(param_1 + 0x1b) = *(uint *)(param_1 + 0x1b) | 1;
    }
    *(undefined4 *)(param_1 + 0x1d) = local_94;
  }
LAB_00724c6c:
  FUN_00414480(&local_108);
  FUN_00414560(&local_d8,3);
  return local_24;
}

