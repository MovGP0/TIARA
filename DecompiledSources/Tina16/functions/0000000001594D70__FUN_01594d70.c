/* Ghidra address: 01594d70 */
/* Ghidra symbol: FUN_01594d70 */


void FUN_01594d70(uint *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_160 [20];
  int aiStack_110 [64];
  uint local_10;
  int local_c;
  
  FUN_01594cb0(local_160,param_1 + 0x14);
  local_10 = *param_1;
  aiStack_110[0x3f] = param_1[1];
  aiStack_110[0x3e] = param_1[2];
  aiStack_110[0x3d] = param_1[3];
  aiStack_110[0x3c] = param_1[4];
  local_c = 0;
  do {
    aiStack_110[0x3c] =
         aiStack_110[0x3c] +
         (local_10 << 5 | local_10 >> 0x1b) +
         (aiStack_110[0x3d] ^ aiStack_110[0x3f] & (aiStack_110[0x3e] ^ aiStack_110[0x3d])) +
         aiStack_110[(longlong)local_c + -0x14] + 0x5a827999;
    aiStack_110[0x3f] = (uint)aiStack_110[0x3f] >> 2 | aiStack_110[0x3f] << 0x1e;
    aiStack_110[0x3d] =
         aiStack_110[0x3d] +
         (aiStack_110[0x3c] * 0x20 | (uint)aiStack_110[0x3c] >> 0x1b) +
         (aiStack_110[0x3e] ^ local_10 & (aiStack_110[0x3f] ^ aiStack_110[0x3e])) +
         aiStack_110[(longlong)(local_c + 1) + -0x14] + 0x5a827999;
    local_10 = local_10 >> 2 | local_10 << 0x1e;
    aiStack_110[0x3e] =
         aiStack_110[0x3e] +
         (aiStack_110[0x3d] * 0x20 | (uint)aiStack_110[0x3d] >> 0x1b) +
         (aiStack_110[0x3f] ^ aiStack_110[0x3c] & (local_10 ^ aiStack_110[0x3f])) +
         aiStack_110[(longlong)(local_c + 2) + -0x14] + 0x5a827999;
    aiStack_110[0x3c] = (uint)aiStack_110[0x3c] >> 2 | aiStack_110[0x3c] * 0x40000000;
    aiStack_110[0x3f] =
         aiStack_110[0x3f] +
         (aiStack_110[0x3e] * 0x20 | (uint)aiStack_110[0x3e] >> 0x1b) +
         (local_10 ^ aiStack_110[0x3d] & (aiStack_110[0x3c] ^ local_10)) +
         aiStack_110[(longlong)(local_c + 3) + -0x14] + 0x5a827999;
    aiStack_110[0x3d] = (uint)aiStack_110[0x3d] >> 2 | aiStack_110[0x3d] * 0x40000000;
    local_10 = local_10 +
               (aiStack_110[0x3f] * 0x20 | (uint)aiStack_110[0x3f] >> 0x1b) +
               (aiStack_110[0x3c] ^ aiStack_110[0x3e] & (aiStack_110[0x3d] ^ aiStack_110[0x3c])) +
               aiStack_110[(longlong)(local_c + 4) + -0x14] + 0x5a827999;
    aiStack_110[0x3e] = (uint)aiStack_110[0x3e] >> 2 | aiStack_110[0x3e] * 0x40000000;
    local_c = local_c + 5;
  } while (local_c < 0x14);
  while (local_c < 0x28) {
    aiStack_110[0x3c] =
         aiStack_110[0x3c] +
         (local_10 << 5 | local_10 >> 0x1b) +
         (aiStack_110[0x3d] ^ aiStack_110[0x3f] ^ aiStack_110[0x3e]) +
         aiStack_110[(longlong)local_c + -0x14] + 0x6ed9eba1;
    aiStack_110[0x3f] = (uint)aiStack_110[0x3f] >> 2 | aiStack_110[0x3f] << 0x1e;
    aiStack_110[0x3d] =
         aiStack_110[0x3d] +
         (aiStack_110[0x3c] * 0x20 | (uint)aiStack_110[0x3c] >> 0x1b) +
         (aiStack_110[0x3e] ^ local_10 ^ aiStack_110[0x3f]) +
         aiStack_110[(longlong)(local_c + 1) + -0x14] + 0x6ed9eba1;
    local_10 = local_10 >> 2 | local_10 << 0x1e;
    aiStack_110[0x3e] =
         aiStack_110[0x3e] +
         (aiStack_110[0x3d] * 0x20 | (uint)aiStack_110[0x3d] >> 0x1b) +
         (aiStack_110[0x3f] ^ aiStack_110[0x3c] ^ local_10) +
         aiStack_110[(longlong)(local_c + 2) + -0x14] + 0x6ed9eba1;
    aiStack_110[0x3c] = (uint)aiStack_110[0x3c] >> 2 | aiStack_110[0x3c] * 0x40000000;
    aiStack_110[0x3f] =
         aiStack_110[0x3f] +
         (aiStack_110[0x3e] * 0x20 | (uint)aiStack_110[0x3e] >> 0x1b) +
         (local_10 ^ aiStack_110[0x3d] ^ aiStack_110[0x3c]) +
         aiStack_110[(longlong)(local_c + 3) + -0x14] + 0x6ed9eba1;
    aiStack_110[0x3d] = (uint)aiStack_110[0x3d] >> 2 | aiStack_110[0x3d] * 0x40000000;
    local_10 = local_10 +
               (aiStack_110[0x3f] * 0x20 | (uint)aiStack_110[0x3f] >> 0x1b) +
               (aiStack_110[0x3c] ^ aiStack_110[0x3e] ^ aiStack_110[0x3d]) +
               aiStack_110[(longlong)(local_c + 4) + -0x14] + 0x6ed9eba1;
    aiStack_110[0x3e] = (uint)aiStack_110[0x3e] >> 2 | aiStack_110[0x3e] * 0x40000000;
    local_c = local_c + 5;
  }
  while (local_c < 0x3c) {
    iVar1 = aiStack_110[0x3c] +
            (local_10 << 5 | local_10 >> 0x1b) +
            (aiStack_110[0x3f] & aiStack_110[0x3e] |
            aiStack_110[0x3d] & (aiStack_110[0x3f] | aiStack_110[0x3e])) +
            aiStack_110[(longlong)local_c + -0x14];
    aiStack_110[0x3c] = iVar1 + 0x8f1bbcdc;
    aiStack_110[0x3f] = (uint)aiStack_110[0x3f] >> 2 | aiStack_110[0x3f] << 0x1e;
    iVar2 = aiStack_110[0x3d] +
            (aiStack_110[0x3c] * 0x20 | (uint)aiStack_110[0x3c] >> 0x1b) +
            (local_10 & aiStack_110[0x3f] | aiStack_110[0x3e] & (local_10 | aiStack_110[0x3f])) +
            aiStack_110[(longlong)(local_c + 1) + -0x14];
    aiStack_110[0x3d] = iVar2 + 0x8f1bbcdc;
    local_10 = local_10 >> 2 | local_10 << 0x1e;
    iVar3 = aiStack_110[0x3e] +
            (aiStack_110[0x3d] * 0x20 | (uint)aiStack_110[0x3d] >> 0x1b) +
            (aiStack_110[0x3c] & local_10 | aiStack_110[0x3f] & (aiStack_110[0x3c] | local_10)) +
            aiStack_110[(longlong)(local_c + 2) + -0x14];
    aiStack_110[0x3e] = iVar3 + 0x8f1bbcdc;
    aiStack_110[0x3c] = (uint)aiStack_110[0x3c] >> 2 | iVar1 * 0x40000000;
    aiStack_110[0x3f] =
         aiStack_110[0x3f] +
         (aiStack_110[0x3e] * 0x20 | (uint)aiStack_110[0x3e] >> 0x1b) +
         (aiStack_110[0x3d] & aiStack_110[0x3c] | local_10 & (aiStack_110[0x3d] | aiStack_110[0x3c])
         ) + aiStack_110[(longlong)(local_c + 3) + -0x14] + 0x8f1bbcdc;
    aiStack_110[0x3d] = (uint)aiStack_110[0x3d] >> 2 | iVar2 * 0x40000000;
    local_10 = local_10 +
               (aiStack_110[0x3f] * 0x20 | (uint)aiStack_110[0x3f] >> 0x1b) +
               (aiStack_110[0x3e] & aiStack_110[0x3d] |
               aiStack_110[0x3c] & (aiStack_110[0x3e] | aiStack_110[0x3d])) +
               aiStack_110[(longlong)(local_c + 4) + -0x14] + 0x8f1bbcdc;
    aiStack_110[0x3e] = (uint)aiStack_110[0x3e] >> 2 | iVar3 * 0x40000000;
    local_c = local_c + 5;
  }
  while (local_c < 0x50) {
    aiStack_110[0x3c] =
         aiStack_110[0x3c] +
         (local_10 << 5 | local_10 >> 0x1b) +
         (aiStack_110[0x3d] ^ aiStack_110[0x3f] ^ aiStack_110[0x3e]) +
         aiStack_110[(longlong)local_c + -0x14] + 0xca62c1d6;
    aiStack_110[0x3f] = (uint)aiStack_110[0x3f] >> 2 | aiStack_110[0x3f] << 0x1e;
    aiStack_110[0x3d] =
         aiStack_110[0x3d] +
         (aiStack_110[0x3c] * 0x20 | (uint)aiStack_110[0x3c] >> 0x1b) +
         (aiStack_110[0x3e] ^ local_10 ^ aiStack_110[0x3f]) +
         aiStack_110[(longlong)(local_c + 1) + -0x14] + 0xca62c1d6;
    local_10 = local_10 >> 2 | local_10 << 0x1e;
    aiStack_110[0x3e] =
         aiStack_110[0x3e] +
         (aiStack_110[0x3d] * 0x20 | (uint)aiStack_110[0x3d] >> 0x1b) +
         (aiStack_110[0x3f] ^ aiStack_110[0x3c] ^ local_10) +
         aiStack_110[(longlong)(local_c + 2) + -0x14] + 0xca62c1d6;
    aiStack_110[0x3c] = (uint)aiStack_110[0x3c] >> 2 | aiStack_110[0x3c] * 0x40000000;
    aiStack_110[0x3f] =
         aiStack_110[0x3f] +
         (aiStack_110[0x3e] * 0x20 | (uint)aiStack_110[0x3e] >> 0x1b) +
         (local_10 ^ aiStack_110[0x3d] ^ aiStack_110[0x3c]) +
         aiStack_110[(longlong)(local_c + 3) + -0x14] + 0xca62c1d6;
    aiStack_110[0x3d] = (uint)aiStack_110[0x3d] >> 2 | aiStack_110[0x3d] * 0x40000000;
    local_10 = local_10 +
               (aiStack_110[0x3f] * 0x20 | (uint)aiStack_110[0x3f] >> 0x1b) +
               (aiStack_110[0x3c] ^ aiStack_110[0x3e] ^ aiStack_110[0x3d]) +
               aiStack_110[(longlong)(local_c + 4) + -0x14] + 0xca62c1d6;
    aiStack_110[0x3e] = (uint)aiStack_110[0x3e] >> 2 | aiStack_110[0x3e] * 0x40000000;
    local_c = local_c + 5;
  }
  *param_1 = *param_1 + local_10;
  param_1[1] = param_1[1] + aiStack_110[0x3f];
  param_1[2] = param_1[2] + aiStack_110[0x3e];
  param_1[3] = param_1[3] + aiStack_110[0x3d];
  param_1[4] = param_1[4] + aiStack_110[0x3c];
  return;
}

