/* Ghidra address: 00634ca0 */
/* Ghidra symbol: FUN_00634ca0 */


/* WARNING: Removing unreachable block (ram,0x00634d27) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00634ca0(uint param_1,uint param_2,ulonglong param_3)

{
  longlong lVar1;
  uint uVar2;
  uint *puVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  uint local_98 [32];
  
  if ((longlong)param_3 < 1) {
    return param_1;
  }
  local_118 = _DAT_01df3750;
  uStack_110 = uRam0000000001df3758;
  local_108 = _DAT_01df3760;
  uStack_100 = uRam0000000001df3768;
  local_f8 = _DAT_01df3770;
  uStack_f0 = uRam0000000001df3778;
  local_e8 = _DAT_01df3780;
  uStack_e0 = uRam0000000001df3788;
  local_d8 = _DAT_01df3790;
  uStack_d0 = uRam0000000001df3798;
  local_c8 = _DAT_01df37a0;
  uStack_c0 = uRam0000000001df37a8;
  local_b8 = _DAT_01df37b0;
  uStack_b0 = uRam0000000001df37b8;
  local_a8 = _DAT_01df37c0;
  uStack_a0 = uRam0000000001df37c8;
  uVar6 = 0xedb88320;
  lVar4 = 0;
LAB_00634d54:
  uVar5 = 0;
  puVar3 = (uint *)&local_118;
  do {
    if ((uVar6 & 1) != 0) {
      uVar5 = uVar5 ^ *puVar3;
    }
    puVar3 = puVar3 + 1;
    uVar2 = uVar6 >> 1;
    uVar6 = uVar6 >> 1;
  } while (uVar2 != 0);
  while( true ) {
    local_98[lVar4] = uVar5;
    lVar1 = lVar4 + 1;
    if (lVar1 == 0x20) break;
    uVar6 = *(uint *)((longlong)&local_118 + lVar4 * 4 + 4);
    uVar5 = 0;
    lVar4 = lVar1;
    if (uVar6 != 0) goto LAB_00634d54;
  }
  lVar4 = 0;
  do {
    uVar6 = 0;
    if (local_98[lVar4] != 0) {
      uVar6 = 0;
      puVar3 = local_98;
      uVar5 = local_98[lVar4];
      do {
        if ((uVar5 & 1) != 0) {
          uVar6 = uVar6 ^ *puVar3;
        }
        puVar3 = puVar3 + 1;
        uVar2 = uVar5 >> 1;
        uVar5 = uVar5 >> 1;
      } while (uVar2 != 0);
    }
    *(uint *)((longlong)&local_118 + lVar4 * 4) = uVar6;
    lVar4 = lVar4 + 1;
  } while (lVar4 != 0x20);
  do {
    lVar4 = 0;
    do {
      uVar5 = 0;
      puVar3 = (uint *)&local_118;
      for (uVar6 = *(uint *)((longlong)&local_118 + lVar4 * 4); uVar6 != 0; uVar6 = uVar6 >> 1) {
        if ((uVar6 & 1) != 0) {
          uVar5 = uVar5 ^ *puVar3;
        }
        puVar3 = puVar3 + 1;
      }
      local_98[lVar4] = uVar5;
      lVar4 = lVar4 + 1;
    } while (lVar4 != 0x20);
    uVar7 = (longlong)param_3 >> 1;
    uVar6 = param_1;
    if ((param_3 & 1) != 0) {
      uVar6 = 0;
      puVar3 = local_98;
      for (; param_1 != 0; param_1 = param_1 >> 1) {
        if ((param_1 & 1) != 0) {
          uVar6 = uVar6 ^ *puVar3;
        }
        puVar3 = puVar3 + 1;
      }
    }
    param_1 = uVar6;
    if (uVar7 == 0) break;
    lVar4 = 0;
    do {
      uVar5 = 0;
      puVar3 = local_98;
      for (uVar6 = local_98[lVar4]; uVar6 != 0; uVar6 = uVar6 >> 1) {
        if ((uVar6 & 1) != 0) {
          uVar5 = uVar5 ^ *puVar3;
        }
        puVar3 = puVar3 + 1;
      }
      *(uint *)((longlong)&local_118 + lVar4 * 4) = uVar5;
      lVar4 = lVar4 + 1;
    } while (lVar4 != 0x20);
    param_3 = (longlong)param_3 >> 2;
    if ((uVar7 & 1) != 0) {
      uVar5 = 0;
      puVar3 = (uint *)&local_118;
      for (uVar6 = param_1; param_1 = uVar5, uVar6 != 0; uVar6 = uVar6 >> 1) {
        if ((uVar6 & 1) != 0) {
          uVar5 = uVar5 ^ *puVar3;
        }
        puVar3 = puVar3 + 1;
      }
    }
  } while (param_3 != 0);
  return param_1 ^ param_2;
}

