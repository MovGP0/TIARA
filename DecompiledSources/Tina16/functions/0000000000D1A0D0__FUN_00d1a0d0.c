/* Ghidra address: 00d1a0d0 */
/* Ghidra symbol: FUN_00d1a0d0 */


void FUN_00d1a0d0(longlong param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint local_30;
  uint local_2c;
  
  pbVar5 = &DAT_01eb4240;
  piVar4 = &DAT_01eb4040;
  local_2c = *(uint *)(param_1 + 0xb0);
  uVar10 = 0;
  uVar13 = *(uint *)(param_1 + 0xb4);
  uVar1 = *(uint *)(param_1 + 0xb8);
  uVar2 = *(uint *)(param_1 + 0xbc);
  uVar3 = *(uint *)(param_1 + 0xc0);
  uVar6 = *(uint *)(param_1 + 0xc4);
  uVar7 = *(uint *)(param_1 + 200);
  local_30 = *(uint *)(param_1 + 0xac);
  do {
    uVar8 = uVar6;
    uVar6 = uVar3;
    uVar3 = uVar2;
    uVar2 = uVar1;
    uVar1 = uVar13;
    uVar13 = local_2c;
    uVar11 = uVar1 & (uVar8 ^ local_2c) ^ uVar6 & uVar3 ^ local_30 & uVar2 ^ uVar8;
    uVar12 = (uVar11 >> 7 | uVar11 << 0x19) + (uVar7 >> 0xb | uVar7 << 0x15) +
             *(int *)(param_2 + uVar10 * 4);
    local_2c = local_30;
    uVar11 = (int)uVar10 + 1;
    uVar10 = (ulonglong)uVar11;
    uVar7 = uVar8;
    local_30 = uVar12;
  } while (uVar11 != 0x20);
  iVar9 = 0x20;
  do {
    uVar7 = uVar6;
    uVar6 = uVar3;
    uVar3 = uVar2;
    uVar2 = uVar1;
    uVar1 = uVar13;
    uVar13 = local_2c;
    uVar11 = uVar2 & (uVar3 & ~local_30 ^ local_2c & uVar1 ^ uVar7 ^ uVar6) ^
             local_2c & (uVar3 ^ uVar1) ^ local_30 & uVar1 ^ uVar6;
    uVar11 = (uVar11 >> 7 | uVar11 << 0x19) + (uVar8 >> 0xb | uVar8 << 0x15) +
             *(int *)(param_2 + (ulonglong)*pbVar5 * 4) + *piVar4;
    pbVar5 = pbVar5 + 1;
    piVar4 = piVar4 + 1;
    local_2c = local_30;
    iVar9 = iVar9 + -1;
    uVar8 = uVar7;
    local_30 = uVar11;
  } while (iVar9 != 0);
  iVar9 = 0x20;
  do {
    uVar8 = uVar6;
    uVar6 = uVar3;
    uVar3 = uVar2;
    uVar2 = uVar1;
    uVar1 = uVar13;
    uVar13 = local_2c;
    uVar11 = uVar3 & (local_2c & uVar2 ^ uVar1 ^ uVar6) ^ local_2c & local_30 ^ uVar2 & uVar8 ^
             uVar6;
    uVar11 = (uVar11 >> 7 | uVar11 << 0x19) + (uVar7 >> 0xb | uVar7 << 0x15) +
             *(int *)(param_2 + (ulonglong)*pbVar5 * 4) + *piVar4;
    pbVar5 = pbVar5 + 1;
    piVar4 = piVar4 + 1;
    local_2c = local_30;
    iVar9 = iVar9 + -1;
    uVar7 = uVar8;
    local_30 = uVar11;
  } while (iVar9 != 0);
  iVar9 = 0x20;
  do {
    uVar7 = uVar6;
    uVar6 = uVar3;
    uVar3 = uVar2;
    uVar2 = uVar1;
    uVar1 = uVar13;
    uVar13 = local_2c;
    uVar11 = uVar2 & (uVar6 & ~local_30 ^ uVar1 & ~local_2c ^ uVar3 ^ local_2c ^ uVar7) ^
             uVar1 & (uVar3 & local_30 ^ uVar6 ^ local_2c) ^ local_30 & local_2c ^ uVar7;
    uVar11 = (uVar11 >> 7 | uVar11 << 0x19) + (uVar8 >> 0xb | uVar8 << 0x15) +
             *(int *)(param_2 + (ulonglong)*pbVar5 * 4) + *piVar4;
    pbVar5 = pbVar5 + 1;
    piVar4 = piVar4 + 1;
    local_2c = local_30;
    iVar9 = iVar9 + -1;
    uVar8 = uVar7;
    local_30 = uVar11;
  } while (iVar9 != 0);
  iVar9 = 0x20;
  uVar8 = local_2c;
  do {
    local_2c = uVar8;
    local_30 = uVar11;
    uVar12 = uVar6;
    uVar6 = uVar3;
    uVar3 = uVar2;
    uVar2 = uVar1;
    uVar1 = uVar13;
    uVar13 = local_2c & (uVar2 & uVar3 & uVar12 ^ ~uVar6) ^ uVar2 & local_30 ^ uVar3 & uVar6 ^
             uVar12 & uVar1;
    uVar11 = (uVar13 >> 7 | uVar13 << 0x19) + (uVar7 >> 0xb | uVar7 << 0x15) +
             *(int *)(param_2 + (ulonglong)*pbVar5 * 4) + *piVar4;
    pbVar5 = pbVar5 + 1;
    piVar4 = piVar4 + 1;
    iVar9 = iVar9 + -1;
    uVar13 = local_2c;
    uVar7 = uVar12;
    uVar8 = local_30;
  } while (iVar9 != 0);
  *(int *)(param_1 + 0xac) = *(int *)(param_1 + 0xac) + uVar11;
  *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + local_30;
  *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb4) + local_2c;
  *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + uVar1;
  *(int *)(param_1 + 0xbc) = *(int *)(param_1 + 0xbc) + uVar2;
  *(int *)(param_1 + 0xc0) = *(int *)(param_1 + 0xc0) + uVar3;
  *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + uVar6;
  *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + uVar12;
  return;
}

