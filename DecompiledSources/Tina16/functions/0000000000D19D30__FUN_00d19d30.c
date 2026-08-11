/* Ghidra address: 00d19d30 */
/* Ghidra symbol: FUN_00d19d30 */


void FUN_00d19d30(longlong param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  uint local_30;
  uint local_2c;
  
  pbVar6 = &DAT_01eb4240;
  piVar5 = &DAT_01eb4040;
  local_2c = *(uint *)(param_1 + 0xb0);
  uVar11 = 0;
  uVar4 = *(uint *)(param_1 + 0xb4);
  uVar1 = *(uint *)(param_1 + 0xb8);
  uVar2 = *(uint *)(param_1 + 0xbc);
  uVar3 = *(uint *)(param_1 + 0xc0);
  uVar7 = *(uint *)(param_1 + 0xc4);
  uVar8 = *(uint *)(param_1 + 200);
  local_30 = *(uint *)(param_1 + 0xac);
  do {
    uVar9 = uVar7;
    uVar7 = uVar3;
    uVar3 = uVar2;
    uVar2 = uVar1;
    uVar1 = uVar4;
    uVar4 = local_2c;
    uVar12 = uVar2 & (local_30 ^ local_2c) ^ uVar7 & uVar9 ^ uVar3 & uVar1 ^ local_30;
    uVar13 = (uVar12 >> 7 | uVar12 << 0x19) + (uVar8 >> 0xb | uVar8 << 0x15) +
             *(int *)(param_2 + uVar11 * 4);
    local_2c = local_30;
    uVar12 = (int)uVar11 + 1;
    uVar11 = (ulonglong)uVar12;
    uVar8 = uVar9;
    local_30 = uVar13;
  } while (uVar12 != 0x20);
  iVar10 = 0x20;
  do {
    uVar8 = uVar7;
    uVar7 = uVar3;
    uVar3 = uVar2;
    uVar2 = uVar1;
    uVar1 = uVar4;
    uVar4 = local_2c;
    uVar12 = local_2c & (uVar8 & ~local_30 ^ uVar1 & uVar7 ^ uVar2 ^ uVar3) ^
             uVar1 & (uVar8 ^ uVar7) ^ local_30 & uVar7 ^ uVar3;
    uVar12 = (uVar12 >> 7 | uVar12 << 0x19) + (uVar9 >> 0xb | uVar9 << 0x15) +
             *(int *)(param_2 + (ulonglong)*pbVar6 * 4) + *piVar5;
    pbVar6 = pbVar6 + 1;
    piVar5 = piVar5 + 1;
    local_2c = local_30;
    iVar10 = iVar10 + -1;
    uVar9 = uVar8;
    local_30 = uVar12;
  } while (iVar10 != 0);
  iVar10 = 0x20;
  do {
    uVar9 = uVar7;
    uVar7 = uVar3;
    uVar3 = uVar2;
    uVar2 = uVar1;
    uVar1 = uVar4;
    uVar4 = local_2c;
    uVar12 = uVar9 & (uVar1 & local_30 ^ local_2c ^ uVar7) ^ uVar1 & uVar2 ^ local_30 & uVar3 ^
             uVar7;
    uVar12 = (uVar12 >> 7 | uVar12 << 0x19) + (uVar8 >> 0xb | uVar8 << 0x15) +
             *(int *)(param_2 + (ulonglong)*pbVar6 * 4) + *piVar5;
    pbVar6 = pbVar6 + 1;
    piVar5 = piVar5 + 1;
    local_2c = local_30;
    iVar10 = iVar10 + -1;
    uVar8 = uVar9;
    local_30 = uVar12;
  } while (iVar10 != 0);
  iVar10 = 0x20;
  uVar8 = local_2c;
  do {
    local_2c = uVar8;
    local_30 = uVar12;
    uVar13 = uVar7;
    uVar7 = uVar3;
    uVar3 = uVar2;
    uVar2 = uVar1;
    uVar1 = uVar4;
    uVar4 = local_30 & (uVar3 & ~uVar1 ^ uVar7 & ~uVar13 ^ local_2c ^ uVar13 ^ uVar2) ^
            uVar7 & (local_2c & uVar1 ^ uVar3 ^ uVar13) ^ uVar1 & uVar13 ^ uVar2;
    uVar12 = (uVar4 >> 7 | uVar4 << 0x19) + (uVar9 >> 0xb | uVar9 << 0x15) +
             *(int *)(param_2 + (ulonglong)*pbVar6 * 4) + *piVar5;
    pbVar6 = pbVar6 + 1;
    piVar5 = piVar5 + 1;
    iVar10 = iVar10 + -1;
    uVar4 = local_2c;
    uVar9 = uVar13;
    uVar8 = local_30;
  } while (iVar10 != 0);
  *(int *)(param_1 + 0xac) = *(int *)(param_1 + 0xac) + uVar12;
  *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + local_30;
  *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb4) + local_2c;
  *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + uVar1;
  *(int *)(param_1 + 0xbc) = *(int *)(param_1 + 0xbc) + uVar2;
  *(int *)(param_1 + 0xc0) = *(int *)(param_1 + 0xc0) + uVar3;
  *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + uVar7;
  *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + uVar13;
  return;
}

