/* Ghidra address: 00b81c10 */
/* Ghidra symbol: FUN_00b81c10 */


void FUN_00b81c10(longlong param_1,uint *param_2,uint *param_3)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int local_40;
  uint local_3c;
  uint local_38;
  uint local_30;
  uint local_2c;
  
  if (*(char *)(param_1 + 0x78) == '\0') {
    param_2 = (uint *)CONCAT71((int7)((ulonglong)param_2 >> 8),1);
    uVar2 = FUN_0044d490(&PTR_FUN_00b6aec8,param_2,L"Cipher not initialized");
    FUN_004134c0(uVar2);
  }
  local_30 = *param_2;
  local_3c = param_2[1];
  local_2c = param_2[2];
  local_38 = param_2[3];
  local_40 = 0;
  while( true ) {
    iVar1 = local_40 * 4;
    local_30 = local_30 ^ *(uint *)(param_1 + 0xa8 + (longlong)iVar1 * 4);
    local_3c = local_3c ^ *(uint *)(param_1 + 0xa8 + (longlong)(iVar1 + 1) * 4);
    local_2c = local_2c ^ *(uint *)(param_1 + 0xa8 + (longlong)(iVar1 + 2) * 4);
    local_38 = local_38 ^ *(uint *)(param_1 + 0xa8 + (longlong)(iVar1 + 3) * 4);
    uVar4 = local_3c ^ local_38;
    local_38 = local_30 | local_38;
    uVar11 = local_3c ^ local_2c;
    uVar3 = local_38 ^ uVar11;
    uVar11 = (local_30 | uVar11) ^ (~uVar4 | local_2c & (local_30 ^ local_3c));
    uVar4 = uVar4 & (local_30 ^ local_3c) ^ uVar11 ^ local_30 ^ uVar3;
    local_3c = local_3c ^ local_38 & (uVar11 | uVar4);
    uVar11 = uVar11 << 0xd | uVar11 >> 0x13;
    uVar5 = local_3c * 8 | local_3c >> 0x1d;
    uVar4 = uVar4 ^ uVar11 ^ uVar5;
    uVar3 = uVar3 ^ uVar5 ^ uVar11 * 8;
    uVar4 = uVar4 * 2 | uVar4 >> 0x1f;
    uVar6 = uVar3 << 7 | uVar3 >> 0x19;
    uVar11 = uVar11 ^ uVar4 ^ uVar6;
    uVar3 = uVar5 ^ uVar6 ^ uVar4 << 7;
    uVar8 = (uVar11 << 5 | uVar11 >> 0x1b) ^
            *(uint *)(param_1 + 0xa8 + (longlong)((local_40 + 1) * 4) * 4);
    uVar4 = uVar4 ^ *(uint *)(param_1 + 0xa8 + (longlong)((local_40 + 1) * 4 + 1) * 4);
    uVar3 = (uVar3 << 0x16 | uVar3 >> 10) ^
            *(uint *)(param_1 + 0xa8 + (longlong)((local_40 + 1) * 4 + 2) * 4);
    uVar6 = uVar6 ^ *(uint *)(param_1 + 0xa8 + (longlong)((local_40 + 1) * 4 + 3) * 4);
    uVar9 = uVar4 ^ uVar6;
    uVar5 = ~uVar3;
    uVar11 = uVar5 ^ uVar9 ^ uVar8 & uVar4;
    uVar4 = uVar4 | uVar5;
    uVar5 = uVar4 ^ (uVar8 ^ uVar9) & (uVar6 | uVar11);
    uVar3 = uVar5 ^ uVar3 ^ uVar6;
    uVar4 = (uVar8 ^ uVar6 | uVar11) ^ uVar4 ^ uVar3;
    uVar4 = uVar4 << 0xd | uVar4 >> 0x13;
    uVar11 = uVar11 * 8 | uVar11 >> 0x1d;
    uVar5 = uVar5 ^ uVar4 ^ uVar11;
    uVar3 = (uVar8 ^ uVar6 | uVar9) ^ uVar3 ^ uVar11 ^ uVar4 * 8;
    uVar5 = uVar5 * 2 | uVar5 >> 0x1f;
    uVar3 = uVar3 << 7 | uVar3 >> 0x19;
    uVar4 = uVar4 ^ uVar5 ^ uVar3;
    uVar11 = uVar11 ^ uVar3 ^ uVar5 << 7;
    iVar1 = local_40 + 2;
    uVar6 = (uVar4 << 5 | uVar4 >> 0x1b) ^ *(uint *)(param_1 + 0xa8 + (longlong)(iVar1 * 4) * 4);
    uVar5 = uVar5 ^ *(uint *)(param_1 + 0xa8 + (longlong)(iVar1 * 4 + 1) * 4);
    uVar11 = (uVar11 << 0x16 | uVar11 >> 10) ^
             *(uint *)(param_1 + 0xa8 + (longlong)(iVar1 * 4 + 2) * 4);
    uVar3 = uVar3 ^ *(uint *)(param_1 + 0xa8 + (longlong)(iVar1 * 4 + 3) * 4);
    uVar9 = ~uVar6;
    uVar10 = uVar5 ^ uVar3;
    uVar4 = uVar10 ^ uVar11 & uVar9;
    uVar5 = uVar5 & (uVar11 ^ uVar4);
    uVar8 = uVar11 ^ uVar9 ^ uVar5;
    uVar6 = uVar6 ^ (uVar3 | uVar5) & (uVar4 | uVar11 ^ uVar9);
    uVar5 = uVar4 << 0xd | uVar4 >> 0x13;
    uVar7 = uVar6 * 8 | uVar6 >> 0x1d;
    uVar4 = uVar10 ^ uVar8 ^ uVar6 ^ (uVar3 | uVar9) ^ uVar5 ^ uVar7;
    uVar3 = uVar8 ^ uVar7 ^ uVar5 * 8;
    uVar4 = uVar4 * 2 | uVar4 >> 0x1f;
    uVar11 = uVar3 << 7 | uVar3 >> 0x19;
    uVar5 = uVar5 ^ uVar4 ^ uVar11;
    uVar3 = uVar7 ^ uVar11 ^ uVar4 << 7;
    iVar1 = local_40 + 3;
    uVar5 = (uVar5 << 5 | uVar5 >> 0x1b) ^ *(uint *)(param_1 + 0xa8 + (longlong)(iVar1 * 4) * 4);
    uVar4 = uVar4 ^ *(uint *)(param_1 + 0xa8 + (longlong)(iVar1 * 4 + 1) * 4);
    uVar3 = (uVar3 << 0x16 | uVar3 >> 10) ^
            *(uint *)(param_1 + 0xa8 + (longlong)(iVar1 * 4 + 2) * 4);
    uVar11 = uVar11 ^ *(uint *)(param_1 + 0xa8 + (longlong)(iVar1 * 4 + 3) * 4);
    uVar8 = uVar5 | uVar11;
    uVar9 = uVar5 & uVar4;
    uVar6 = (uVar5 ^ uVar3) & uVar8;
    uVar5 = (uVar4 | uVar5 & uVar11) ^ uVar6;
    uVar6 = (uVar3 | uVar9) ^ uVar6 ^ uVar4 ^ uVar11;
    uVar3 = uVar3 ^ uVar9 ^ uVar8 & uVar6;
    uVar4 = uVar8 ^ uVar9 ^ uVar5 & ~uVar3;
    uVar4 = uVar4 << 0xd | uVar4 >> 0x13;
    uVar3 = uVar3 * 8 | uVar3 >> 0x1d;
    uVar11 = uVar5 ^ uVar4 ^ uVar3;
    uVar5 = uVar6 ^ uVar3 ^ uVar4 * 8;
    uVar11 = uVar11 * 2 | uVar11 >> 0x1f;
    uVar5 = uVar5 << 7 | uVar5 >> 0x19;
    uVar4 = uVar4 ^ uVar11 ^ uVar5;
    uVar3 = uVar3 ^ uVar5 ^ uVar11 << 7;
    iVar1 = local_40 + 4;
    uVar6 = (uVar4 << 5 | uVar4 >> 0x1b) ^ *(uint *)(param_1 + 0xa8 + (longlong)(iVar1 * 4) * 4);
    uVar11 = uVar11 ^ *(uint *)(param_1 + 0xa8 + (longlong)(iVar1 * 4 + 1) * 4);
    uVar5 = uVar6 ^ uVar5 ^ *(uint *)(param_1 + 0xa8 + (longlong)(iVar1 * 4 + 3) * 4);
    uVar3 = (uVar3 << 0x16 | uVar3 >> 10) ^
            *(uint *)(param_1 + 0xa8 + (longlong)(iVar1 * 4 + 2) * 4) ^ ~uVar6 ^
            (uVar5 | uVar6 ^ uVar11);
    uVar4 = uVar11 | ~uVar3;
    uVar5 = uVar5 ^ uVar4;
    uVar4 = uVar6 & uVar3 ^ uVar4 & (uVar11 ^ uVar5);
    uVar8 = uVar3 << 0xd | uVar3 >> 0x13;
    uVar9 = uVar4 * 8 | uVar4 >> 0x1d;
    uVar4 = uVar6 ^ uVar11 ^ (uVar6 | ~uVar3) ^ uVar5 & uVar4 ^ uVar8 ^ uVar9;
    uVar3 = uVar5 ^ uVar9 ^ uVar8 * 8;
    uVar4 = uVar4 * 2 | uVar4 >> 0x1f;
    uVar11 = uVar3 << 7 | uVar3 >> 0x19;
    uVar5 = uVar8 ^ uVar4 ^ uVar11;
    uVar3 = uVar9 ^ uVar11 ^ uVar4 << 7;
    uVar6 = (uVar5 << 5 | uVar5 >> 0x1b) ^
            *(uint *)(param_1 + 0xa8 + (longlong)((local_40 + 5) * 4) * 4);
    uVar4 = uVar4 ^ *(uint *)(param_1 + 0xa8 + (longlong)((local_40 + 5) * 4 + 1) * 4);
    uVar3 = (uVar3 << 0x16 | uVar3 >> 10) ^
            *(uint *)(param_1 + 0xa8 + (longlong)((local_40 + 5) * 4 + 2) * 4);
    uVar11 = uVar11 ^ *(uint *)(param_1 + 0xa8 + (longlong)((local_40 + 5) * 4 + 3) * 4);
    uVar8 = uVar6 ^ uVar4;
    uVar9 = uVar3 ^ ~uVar6 ^ (uVar8 | uVar6 ^ uVar11);
    uVar8 = uVar8 ^ uVar9 & ~uVar11;
    uVar5 = (uVar3 | uVar9) ^ ~uVar11 ^ (uVar4 | uVar8);
    uVar3 = ~uVar6 ^ (uVar11 | uVar8) ^ (uVar9 | uVar5);
    uVar4 = uVar9 << 0xd | uVar9 >> 0x13;
    uVar3 = uVar3 * 8 | uVar3 >> 0x1d;
    uVar11 = uVar8 ^ uVar4 ^ uVar3;
    uVar5 = uVar5 ^ uVar3 ^ uVar4 * 8;
    uVar11 = uVar11 * 2 | uVar11 >> 0x1f;
    uVar5 = uVar5 << 7 | uVar5 >> 0x19;
    uVar4 = uVar4 ^ uVar11 ^ uVar5;
    uVar3 = uVar3 ^ uVar5 ^ uVar11 << 7;
    uVar4 = (uVar4 << 5 | uVar4 >> 0x1b) ^
            *(uint *)(param_1 + 0xa8 + (longlong)((local_40 + 6) * 4) * 4);
    uVar11 = uVar11 ^ *(uint *)(param_1 + 0xa8 + (longlong)((local_40 + 6) * 4 + 1) * 4);
    uVar3 = (uVar3 << 0x16 | uVar3 >> 10) ^
            *(uint *)(param_1 + 0xa8 + (longlong)((local_40 + 6) * 4 + 2) * 4);
    uVar5 = uVar5 ^ *(uint *)(param_1 + 0xa8 + (longlong)((local_40 + 6) * 4 + 3) * 4);
    uVar6 = uVar4 ^ uVar3;
    uVar10 = ~(uVar11 ^ uVar3);
    uVar8 = uVar5 ^ uVar6;
    uVar9 = (uVar11 | uVar5) ^ (uVar11 | uVar3) & uVar8;
    uVar6 = uVar6 & (uVar11 | uVar3);
    uVar8 = uVar10 ^ uVar8;
    uVar7 = uVar8 ^ uVar9 & uVar6;
    uVar8 = uVar8 ^ (uVar9 | uVar11 ^ uVar3 ^ uVar6);
    uVar11 = uVar7 << 0xd | uVar7 >> 0x13;
    uVar6 = uVar8 * 8 | uVar8 >> 0x1d;
    uVar4 = uVar10 ^ uVar4 & uVar5 ^ uVar11 ^ uVar6;
    uVar3 = uVar9 ^ uVar6 ^ uVar11 * 8;
    uVar4 = uVar4 * 2 | uVar4 >> 0x1f;
    uVar5 = uVar3 << 7 | uVar3 >> 0x19;
    uVar11 = uVar11 ^ uVar4 ^ uVar5;
    uVar3 = uVar6 ^ uVar5 ^ uVar4 << 7;
    uVar9 = (uVar11 << 5 | uVar11 >> 0x1b) ^
            *(uint *)(param_1 + 0xa8 + (longlong)((local_40 + 7) * 4) * 4);
    uVar4 = uVar4 ^ *(uint *)(param_1 + 0xa8 + (longlong)((local_40 + 7) * 4 + 1) * 4);
    uVar3 = (uVar3 << 0x16 | uVar3 >> 10) ^
            *(uint *)(param_1 + 0xa8 + (longlong)((local_40 + 7) * 4 + 2) * 4);
    uVar5 = uVar5 ^ *(uint *)(param_1 + 0xa8 + (longlong)((local_40 + 7) * 4 + 3) * 4);
    uVar8 = ~uVar3;
    uVar3 = uVar4 ^ uVar3;
    uVar7 = uVar4 | uVar8;
    uVar10 = uVar5 ^ uVar7;
    uVar6 = uVar9 & uVar10;
    uVar11 = uVar3 ^ uVar6;
    uVar3 = uVar9 ^ uVar5 ^ (uVar3 | uVar4 ^ uVar6);
    uVar4 = uVar5 & uVar7 ^ uVar11 & (uVar6 ^ uVar3);
    uVar5 = (uVar8 | uVar10) ^ uVar6 ^ uVar3 ^ uVar4;
    local_40 = local_40 + 8;
    if (0x1f < local_40) break;
    uVar5 = uVar5 << 0xd | uVar5 >> 0x13;
    uVar4 = uVar4 * 8 | uVar4 >> 0x1d;
    uVar3 = uVar3 ^ uVar5 ^ uVar4;
    uVar11 = uVar11 ^ uVar4 ^ uVar5 * 8;
    local_3c = uVar3 * 2 | uVar3 >> 0x1f;
    local_38 = uVar11 << 7 | uVar11 >> 0x19;
    uVar3 = uVar5 ^ local_3c ^ local_38;
    uVar4 = uVar4 ^ local_38 ^ local_3c << 7;
    local_30 = uVar3 << 5 | uVar3 >> 0x1b;
    local_2c = uVar4 << 0x16 | uVar4 >> 10;
  }
  uVar6 = *(uint *)(param_1 + 0x2ac);
  uVar8 = *(uint *)(param_1 + 0x2b0);
  uVar9 = *(uint *)(param_1 + 0x2b4);
  *param_3 = uVar5 ^ *(uint *)(param_1 + 0x2a8);
  param_3[1] = uVar3 ^ uVar6;
  param_3[2] = uVar4 ^ uVar8;
  param_3[3] = uVar11 ^ uVar9;
  return;
}

