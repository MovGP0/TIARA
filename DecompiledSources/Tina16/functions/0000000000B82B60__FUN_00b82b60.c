/* Ghidra address: 00b82b60 */
/* Ghidra symbol: FUN_00b82b60 */


void FUN_00b82b60(longlong param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  
  if (*(char *)(param_1 + 0x78) == '\0') {
    param_2 = (uint *)CONCAT71((int7)((ulonglong)param_2 >> 8),1);
    uVar3 = FUN_0044d490(&PTR_FUN_00b6aec8,param_2,L"Cipher not initialized");
    FUN_004134c0(uVar3);
  }
  local_38 = 0x20;
  local_34 = *param_2 ^ *(uint *)(param_1 + 0x2a8);
  local_30 = param_2[1] ^ *(uint *)(param_1 + 0x2ac);
  uVar1 = param_2[2] ^ *(uint *)(param_1 + 0x2b0);
  local_2c = param_2[3] ^ *(uint *)(param_1 + 0x2b4);
  do {
    if (local_38 < 0x20) {
      uVar1 = (uVar1 >> 0x16 | uVar1 << 10) ^ local_2c;
      uVar2 = uVar1 ^ local_30 << 7;
      uVar4 = (local_34 >> 5 | local_34 << 0x1b) ^ local_30 ^ local_2c;
      local_2c = (local_2c >> 7 | local_2c << 0x19) ^ uVar2 ^ uVar4 * 8;
      local_30 = (local_30 >> 1 | local_30 << 0x1f) ^ uVar4 ^ uVar2;
      uVar1 = uVar2 >> 3 | uVar1 << 0x1d;
      local_34 = uVar4 >> 0xd | uVar4 << 0x13;
    }
    uVar6 = uVar1 | local_34 & local_30;
    uVar2 = local_2c & (local_34 | local_30);
    uVar9 = uVar6 ^ uVar2;
    local_30 = local_30 ^ uVar2;
    uVar4 = local_34 ^ (local_30 | uVar9 ^ ~local_2c);
    uVar1 = uVar1 ^ local_30 ^ (local_2c | uVar4);
    uVar2 = uVar1 ^ *(uint *)(param_1 + 0xa8 + (longlong)((local_38 + -1) * 4) * 4);
    uVar5 = uVar4 ^ *(uint *)(param_1 + 0xa8 + (longlong)((local_38 + -1) * 4 + 1) * 4);
    uVar1 = uVar6 ^ uVar4 ^ uVar1 ^ local_34 & uVar9 ^
            *(uint *)(param_1 + 0xa8 + (longlong)((local_38 + -1) * 4 + 2) * 4);
    uVar9 = uVar9 ^ *(uint *)(param_1 + 0xa8 + (longlong)((local_38 + -1) * 4 + 3) * 4);
    uVar1 = (uVar1 >> 0x16 | uVar1 << 10) ^ uVar9;
    uVar6 = uVar1 ^ uVar5 << 7;
    uVar2 = (uVar2 >> 5 | uVar2 << 0x1b) ^ uVar5 ^ uVar9;
    uVar9 = (uVar9 >> 7 | uVar9 << 0x19) ^ uVar6 ^ uVar2 * 8;
    uVar4 = (uVar5 >> 1 | uVar5 << 0x1f) ^ uVar2 ^ uVar6;
    uVar1 = uVar6 >> 3 | uVar1 << 0x1d;
    uVar2 = uVar2 >> 0xd | uVar2 << 0x13;
    uVar7 = uVar4 ^ uVar9 ^ (uVar2 | ~uVar1);
    uVar5 = uVar4 & (uVar2 ^ uVar1) | uVar7 ^ (uVar2 | uVar4);
    uVar8 = uVar1 ^ uVar5;
    uVar9 = (uVar9 | uVar2 ^ uVar1) ^ uVar5 ^ ~uVar7;
    uVar5 = uVar8 ^ *(uint *)(param_1 + 0xa8 + (longlong)((local_38 + -2) * 4) * 4);
    uVar6 = uVar7 ^ *(uint *)(param_1 + 0xa8 + (longlong)((local_38 + -2) * 4 + 1) * 4);
    uVar1 = uVar4 ^ ~uVar7 ^ uVar8 & uVar9 ^
            *(uint *)(param_1 + 0xa8 + (longlong)((local_38 + -2) * 4 + 2) * 4);
    uVar9 = uVar9 ^ *(uint *)(param_1 + 0xa8 + (longlong)((local_38 + -2) * 4 + 3) * 4);
    uVar1 = (uVar1 >> 0x16 | uVar1 << 10) ^ uVar9;
    uVar2 = uVar1 ^ uVar6 << 7;
    uVar4 = (uVar5 >> 5 | uVar5 << 0x1b) ^ uVar6 ^ uVar9;
    uVar5 = (uVar9 >> 7 | uVar9 << 0x19) ^ uVar2 ^ uVar4 * 8;
    uVar6 = (uVar6 >> 1 | uVar6 << 0x1f) ^ uVar4 ^ uVar2;
    uVar1 = uVar2 >> 3 | uVar1 << 0x1d;
    uVar2 = uVar4 >> 0xd | uVar4 << 0x13;
    uVar4 = ~uVar1;
    uVar9 = uVar5 ^ uVar6 & uVar4;
    uVar7 = uVar2 & uVar9;
    uVar10 = uVar7 ^ uVar6 ^ uVar4;
    uVar8 = uVar6 | uVar10;
    uVar5 = uVar2 | uVar5;
    uVar4 = uVar5 ^ uVar4 ^ uVar8 ^ *(uint *)(param_1 + 0xa8 + (longlong)((local_38 + -3) * 4) * 4);
    uVar9 = uVar9 ^ uVar2 & uVar8 ^
            *(uint *)(param_1 + 0xa8 + (longlong)((local_38 + -3) * 4 + 1) * 4);
    uVar1 = uVar6 & uVar5 ^ (uVar7 | uVar2 ^ uVar1) ^
            *(uint *)(param_1 + 0xa8 + (longlong)((local_38 + -3) * 4 + 2) * 4);
    uVar10 = uVar10 ^ *(uint *)(param_1 + 0xa8 + (longlong)((local_38 + -3) * 4 + 3) * 4);
    uVar1 = (uVar1 >> 0x16 | uVar1 << 10) ^ uVar10;
    uVar6 = uVar1 ^ uVar9 << 7;
    uVar2 = (uVar4 >> 5 | uVar4 << 0x1b) ^ uVar9 ^ uVar10;
    uVar8 = (uVar10 >> 7 | uVar10 << 0x19) ^ uVar6 ^ uVar2 * 8;
    uVar5 = (uVar9 >> 1 | uVar9 << 0x1f) ^ uVar2 ^ uVar6;
    uVar1 = uVar6 >> 3 | uVar1 << 0x1d;
    uVar2 = uVar2 >> 0xd | uVar2 << 0x13;
    uVar7 = uVar5 ^ (uVar1 | uVar8);
    uVar5 = uVar5 | uVar8;
    uVar4 = uVar7 ^ (uVar2 ^ uVar8) & uVar5;
    uVar6 = uVar7 ^ (~uVar2 | uVar1 ^ uVar4) ^
            *(uint *)(param_1 + 0xa8 + (longlong)((local_38 + -4) * 4) * 4);
    uVar9 = uVar1 ^ uVar8 ^ uVar2 & uVar7 ^
            *(uint *)(param_1 + 0xa8 + (longlong)((local_38 + -4) * 4 + 1) * 4);
    uVar1 = uVar5 ^ (uVar1 | uVar2 & uVar7) ^ (uVar4 | ~uVar2) ^
            *(uint *)(param_1 + 0xa8 + (longlong)((local_38 + -4) * 4 + 2) * 4);
    uVar4 = uVar4 ^ *(uint *)(param_1 + 0xa8 + (longlong)((local_38 + -4) * 4 + 3) * 4);
    uVar1 = (uVar1 >> 0x16 | uVar1 << 10) ^ uVar4;
    uVar2 = uVar1 ^ uVar9 << 7;
    uVar5 = (uVar6 >> 5 | uVar6 << 0x1b) ^ uVar9 ^ uVar4;
    uVar4 = (uVar4 >> 7 | uVar4 << 0x19) ^ uVar2 ^ uVar5 * 8;
    uVar6 = (uVar9 >> 1 | uVar9 << 0x1f) ^ uVar5 ^ uVar2;
    uVar1 = uVar2 >> 3 | uVar1 << 0x1d;
    uVar2 = uVar5 >> 0xd | uVar5 << 0x13;
    uVar7 = uVar6 ^ uVar1;
    uVar6 = uVar6 | uVar1;
    uVar9 = uVar6 ^ uVar2 ^ uVar1;
    uVar5 = uVar4 | uVar9;
    uVar1 = uVar7 ^ uVar5;
    uVar8 = uVar6 ^ uVar2 ^ uVar4;
    uVar7 = (uVar7 | uVar5) ^ uVar8;
    uVar4 = uVar1 ^ *(uint *)(param_1 + 0xa8 + (longlong)((local_38 + -5) * 4) * 4);
    uVar5 = uVar2 & uVar9 ^ (uVar1 | uVar8) ^
            *(uint *)(param_1 + 0xa8 + (longlong)((local_38 + -5) * 4 + 1) * 4);
    uVar8 = uVar7 ^ *(uint *)(param_1 + 0xa8 + (longlong)((local_38 + -5) * 4 + 2) * 4);
    uVar9 = uVar9 ^ uVar1 & (uVar6 ^ uVar2 & uVar7) ^
            *(uint *)(param_1 + 0xa8 + (longlong)((local_38 + -5) * 4 + 3) * 4);
    uVar1 = (uVar8 >> 0x16 | uVar8 << 10) ^ uVar9;
    uVar6 = uVar1 ^ uVar5 << 7;
    uVar2 = (uVar4 >> 5 | uVar4 << 0x1b) ^ uVar5 ^ uVar9;
    uVar7 = (uVar9 >> 7 | uVar9 << 0x19) ^ uVar6 ^ uVar2 * 8;
    uVar4 = (uVar5 >> 1 | uVar5 << 0x1f) ^ uVar2 ^ uVar6;
    uVar1 = uVar6 >> 3 | uVar1 << 0x1d;
    uVar2 = uVar2 >> 0xd | uVar2 << 0x13;
    uVar5 = uVar4 ^ uVar7;
    uVar9 = uVar2 ^ uVar1;
    uVar1 = uVar1 ^ uVar5;
    uVar4 = uVar9 ^ uVar4 & uVar1;
    uVar5 = uVar5 ^ (uVar9 | uVar7 ^ (uVar2 | ~uVar5));
    uVar1 = ~uVar1;
    uVar2 = uVar4 | uVar5;
    uVar4 = uVar4 ^ *(uint *)(param_1 + 0xa8 + (longlong)((local_38 + -6) * 4) * 4);
    uVar6 = uVar1 ^ uVar2 ^ *(uint *)(param_1 + 0xa8 + (longlong)((local_38 + -6) * 4 + 1) * 4);
    uVar1 = uVar7 & uVar1 ^ uVar9 ^ uVar2 ^
            *(uint *)(param_1 + 0xa8 + (longlong)((local_38 + -6) * 4 + 2) * 4);
    uVar5 = uVar5 ^ *(uint *)(param_1 + 0xa8 + (longlong)((local_38 + -6) * 4 + 3) * 4);
    uVar1 = (uVar1 >> 0x16 | uVar1 << 10) ^ uVar5;
    uVar2 = uVar1 ^ uVar6 << 7;
    uVar4 = (uVar4 >> 5 | uVar4 << 0x1b) ^ uVar6 ^ uVar5;
    uVar5 = (uVar5 >> 7 | uVar5 << 0x19) ^ uVar2 ^ uVar4 * 8;
    uVar6 = (uVar6 >> 1 | uVar6 << 0x1f) ^ uVar4 ^ uVar2;
    uVar1 = uVar2 >> 3 | uVar1 << 0x1d;
    uVar2 = uVar4 >> 0xd | uVar4 << 0x13;
    uVar9 = uVar2 ^ uVar6 ^ uVar1;
    uVar7 = uVar9 ^ (uVar6 | uVar5);
    uVar9 = uVar9 & (uVar6 ^ (uVar1 | uVar2 ^ uVar5));
    uVar4 = uVar2 ^ uVar5 ^ uVar9;
    uVar9 = uVar9 ^ ~(uVar2 & uVar6);
    uVar1 = uVar2 & uVar5 ^ uVar1 ^ uVar9 ^
            *(uint *)(param_1 + 0xa8 + (longlong)((local_38 + -7) * 4) * 4);
    uVar5 = uVar4 ^ *(uint *)(param_1 + 0xa8 + (longlong)((local_38 + -7) * 4 + 1) * 4);
    uVar2 = uVar7 & uVar4 ^ uVar9 ^
            *(uint *)(param_1 + 0xa8 + (longlong)((local_38 + -7) * 4 + 2) * 4);
    uVar7 = uVar7 ^ *(uint *)(param_1 + 0xa8 + (longlong)((local_38 + -7) * 4 + 3) * 4);
    uVar6 = (uVar2 >> 0x16 | uVar2 << 10) ^ uVar7;
    uVar9 = uVar6 ^ uVar5 << 7;
    uVar2 = (uVar1 >> 5 | uVar1 << 0x1b) ^ uVar5 ^ uVar7;
    uVar7 = (uVar7 >> 7 | uVar7 << 0x19) ^ uVar9 ^ uVar2 * 8;
    uVar4 = (uVar5 >> 1 | uVar5 << 0x1f) ^ uVar2 ^ uVar9;
    uVar1 = uVar9 >> 3 | uVar6 << 0x1d;
    uVar2 = uVar2 >> 0xd | uVar2 << 0x13;
    uVar5 = uVar1 ^ uVar7;
    local_30 = uVar4 ^ uVar2 ^ uVar7;
    uVar1 = uVar2 ^ (uVar1 | local_30);
    local_30 = local_30 ^ uVar5 & uVar1;
    local_2c = ~uVar1 ^ (local_30 | uVar4 & uVar7);
    local_34 = uVar5 ^ uVar4 & uVar7 ^ (local_30 | local_2c) ^
               *(uint *)(param_1 + 0xa8 + (longlong)((local_38 + -8) * 4) * 4);
    local_30 = local_30 ^ *(uint *)(param_1 + 0xa8 + (longlong)((local_38 + -8) * 4 + 1) * 4);
    uVar1 = ~uVar5 ^ (uVar2 | uVar4) ^
            *(uint *)(param_1 + 0xa8 + (longlong)((local_38 + -8) * 4 + 2) * 4);
    local_2c = local_2c ^ *(uint *)(param_1 + 0xa8 + (longlong)((local_38 + -8) * 4 + 3) * 4);
    local_38 = local_38 + -8;
  } while (0 < local_38);
  *param_3 = local_34;
  param_3[1] = local_30;
  param_3[2] = uVar1;
  param_3[3] = local_2c;
  return;
}

