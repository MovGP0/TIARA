/* Ghidra address: 00b81260 */
/* Ghidra symbol: FUN_00b81260 */


void FUN_00b81260(longlong param_1,undefined8 param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int local_274;
  uint local_268 [142];
  
  FUN_0040d200(local_268,0x230,0);
  FUN_00409a70(param_2,local_268,(ulonglong)param_3 / 8);
  if (param_3 < 0x100) {
    uVar7 = 1 << (sbyte)((ulonglong)param_3 % 0x20);
    local_268[(int)(param_3 / 0x20)] = local_268[(int)(param_3 / 0x20)] & uVar7 - 1 | uVar7;
  }
  local_274 = 8;
  puVar6 = local_268 + 8;
  do {
    uVar7 = local_268[(int)(local_274 - 8U)] ^ local_268[local_274 + -5] ^ local_268[local_274 + -3]
            ^ local_268[local_274 + -1] ^ 0x9e3779b9 ^ local_274 - 8U;
    *puVar6 = uVar7 << 0xb | uVar7 >> 0x15;
    local_274 = local_274 + 1;
    puVar6 = puVar6 + 1;
  } while (local_274 != 0x8c);
  local_274 = 0;
  do {
    iVar1 = local_274 * 0x20;
    uVar7 = local_268[iVar1 + 8];
    uVar10 = local_268[iVar1 + 9];
    uVar3 = local_268[iVar1 + 10];
    uVar4 = local_268[iVar1 + 0xb];
    uVar2 = uVar7 | uVar4;
    uVar5 = uVar7 & uVar10;
    uVar9 = (uVar7 ^ uVar3) & uVar2;
    local_268[iVar1 + 9] = (uVar10 | uVar7 & uVar4) ^ uVar9;
    local_268[iVar1 + 0xb] = (uVar3 | uVar5) ^ uVar9 ^ uVar10 ^ uVar4;
    local_268[iVar1 + 10] = uVar3 ^ uVar5 ^ uVar2 & local_268[iVar1 + 0xb];
    local_268[iVar1 + 8] = uVar2 ^ uVar5 ^ local_268[iVar1 + 9] & ~local_268[iVar1 + 10];
    uVar7 = local_268[iVar1 + 0xc];
    uVar10 = local_268[iVar1 + 0xd];
    uVar3 = local_268[iVar1 + 0xe];
    uVar4 = local_268[iVar1 + 0xf];
    uVar2 = ~uVar7;
    uVar5 = uVar10 ^ uVar4;
    local_268[iVar1 + 0xc] = uVar5 ^ uVar3 & uVar2;
    uVar10 = uVar10 & (uVar3 ^ local_268[iVar1 + 0xc]);
    local_268[iVar1 + 0xf] = uVar3 ^ uVar2 ^ uVar10;
    local_268[iVar1 + 0xe] = uVar7 ^ (uVar4 | uVar10) & (local_268[iVar1 + 0xc] | uVar3 ^ uVar2);
    local_268[iVar1 + 0xd] =
         uVar5 ^ local_268[iVar1 + 0xf] ^ local_268[iVar1 + 0xe] ^ (uVar4 | uVar2);
    uVar7 = local_268[iVar1 + 0x10];
    uVar10 = local_268[iVar1 + 0x11];
    uVar3 = local_268[iVar1 + 0x12];
    uVar4 = local_268[iVar1 + 0x13];
    uVar2 = uVar10 ^ uVar4;
    uVar5 = ~uVar3;
    local_268[iVar1 + 0x12] = uVar5 ^ uVar2 ^ uVar7 & uVar10;
    uVar10 = uVar10 | uVar5;
    local_268[iVar1 + 0x11] = uVar10 ^ (uVar7 ^ uVar2) & (uVar4 | local_268[iVar1 + 0x12]);
    uVar3 = local_268[iVar1 + 0x11] ^ uVar3 ^ uVar4;
    local_268[iVar1 + 0x13] = (uVar7 ^ uVar4 | uVar2) ^ uVar3;
    local_268[iVar1 + 0x10] = (uVar7 ^ uVar4 | local_268[iVar1 + 0x12]) ^ uVar10 ^ uVar3;
    uVar7 = local_268[iVar1 + 0x14];
    uVar10 = local_268[iVar1 + 0x15];
    uVar3 = local_268[iVar1 + 0x16];
    uVar4 = uVar10 ^ local_268[iVar1 + 0x17];
    uVar2 = uVar7 | local_268[iVar1 + 0x17];
    uVar5 = uVar10 ^ uVar3;
    local_268[iVar1 + 0x17] = uVar2 ^ uVar5;
    local_268[iVar1 + 0x14] = (uVar7 | uVar5) ^ (~uVar4 | uVar3 & (uVar7 ^ uVar10));
    local_268[iVar1 + 0x15] =
         uVar4 & (uVar7 ^ uVar10) ^ local_268[iVar1 + 0x14] ^ uVar7 ^ local_268[iVar1 + 0x17];
    local_268[iVar1 + 0x16] = uVar10 ^ uVar2 & (local_268[iVar1 + 0x14] | local_268[iVar1 + 0x15]);
    uVar7 = local_268[iVar1 + 0x18];
    uVar10 = local_268[iVar1 + 0x19];
    uVar3 = local_268[iVar1 + 0x1b];
    uVar4 = ~local_268[iVar1 + 0x1a];
    uVar2 = uVar10 ^ local_268[iVar1 + 0x1a];
    uVar5 = uVar10 | uVar4;
    uVar9 = uVar3 ^ uVar5;
    uVar8 = uVar7 & uVar9;
    local_268[iVar1 + 0x1b] = uVar2 ^ uVar8;
    local_268[iVar1 + 0x19] = uVar7 ^ uVar3 ^ (uVar2 | uVar10 ^ uVar8);
    uVar7 = local_268[iVar1 + 0x19];
    local_268[iVar1 + 0x1a] = uVar3 & uVar5 ^ local_268[iVar1 + 0x1b] & (uVar8 ^ uVar7);
    local_268[iVar1 + 0x18] = (uVar4 | uVar9) ^ uVar8 ^ uVar7 ^ local_268[iVar1 + 0x1a];
    uVar7 = local_268[iVar1 + 0x1d];
    uVar10 = local_268[iVar1 + 0x1e];
    uVar3 = local_268[iVar1 + 0x1f];
    uVar4 = local_268[iVar1 + 0x1c] ^ uVar10;
    uVar2 = ~(uVar7 ^ uVar10);
    local_268[iVar1 + 0x1d] = uVar2 ^ local_268[iVar1 + 0x1c] & uVar3;
    uVar5 = uVar3 ^ uVar4;
    local_268[iVar1 + 0x1f] = (uVar7 | uVar3) ^ (uVar7 | uVar10) & uVar5;
    uVar4 = uVar4 & (uVar7 | uVar10);
    uVar2 = uVar2 ^ uVar5;
    local_268[iVar1 + 0x1c] = uVar2 ^ local_268[iVar1 + 0x1f] & uVar4;
    local_268[iVar1 + 0x1e] = uVar2 ^ (local_268[iVar1 + 0x1f] | uVar7 ^ uVar10 ^ uVar4);
    uVar7 = local_268[iVar1 + 0x20];
    uVar10 = local_268[iVar1 + 0x21];
    uVar3 = local_268[iVar1 + 0x22];
    uVar4 = local_268[iVar1 + 0x23];
    uVar2 = uVar7 ^ uVar10;
    local_268[iVar1 + 0x20] = uVar3 ^ ~uVar7 ^ (uVar2 | uVar7 ^ uVar4);
    local_268[iVar1 + 0x21] = uVar2 ^ local_268[iVar1 + 0x20] & ~uVar4;
    local_268[iVar1 + 0x23] =
         (uVar3 | local_268[iVar1 + 0x20]) ^ ~uVar4 ^ (uVar10 | local_268[iVar1 + 0x21]);
    local_268[iVar1 + 0x22] =
         ~uVar7 ^ (uVar4 | local_268[iVar1 + 0x21]) ^
         (local_268[iVar1 + 0x20] | local_268[iVar1 + 0x23]);
    uVar7 = local_268[iVar1 + 0x24];
    uVar10 = local_268[iVar1 + 0x25];
    uVar3 = local_268[iVar1 + 0x27];
    local_268[iVar1 + 0x24] = local_268[iVar1 + 0x26] ^ ~uVar7 ^ (uVar7 ^ uVar3 | uVar7 ^ uVar10);
    uVar4 = local_268[iVar1 + 0x24];
    uVar2 = uVar10 | ~uVar4;
    local_268[iVar1 + 0x27] = uVar7 ^ uVar3 ^ uVar2;
    local_268[iVar1 + 0x26] =
         uVar7 & local_268[iVar1 + 0x24] ^ uVar2 & (uVar10 ^ local_268[iVar1 + 0x27]);
    local_268[iVar1 + 0x25] =
         uVar7 ^ uVar10 ^ (uVar7 | ~uVar4) ^ local_268[iVar1 + 0x27] & local_268[iVar1 + 0x26];
    local_274 = local_274 + 1;
  } while (local_274 != 4);
  uVar7 = local_268[0x88] | local_268[0x8b];
  uVar10 = local_268[0x88] & local_268[0x89];
  uVar4 = (local_268[0x88] ^ local_268[0x8a]) & uVar7;
  uVar3 = (local_268[0x89] | local_268[0x88] & local_268[0x8b]) ^ uVar4;
  local_268[0x8b] = (local_268[0x8a] | uVar10) ^ uVar4 ^ local_268[0x89] ^ local_268[0x8b];
  local_268[0x8a] = local_268[0x8a] ^ uVar10 ^ uVar7 & local_268[0x8b];
  local_268[0x88] = uVar7 ^ uVar10 ^ uVar3 & ~local_268[0x8a];
  local_268[0x89] = uVar3;
  FUN_00409a70(local_268 + 8,param_1 + 0xa8,0x210);
  FUN_0040d200(local_268,0x230,0);
  return;
}

