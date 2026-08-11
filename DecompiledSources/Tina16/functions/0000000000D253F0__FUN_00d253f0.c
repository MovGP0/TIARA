/* Ghidra address: 00d253f0 */
/* Ghidra symbol: FUN_00d253f0 */


void FUN_00d253f0(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint local_38 [4];
  
  uVar1 = 0;
  do {
    lVar3 = (longlong)(int)(uVar1 >> 1);
    uVar4 = *(uint *)(param_1 + 0x60 + lVar3 * 4) >> 0x10;
    iVar5 = uVar4 * uVar4 * uVar4;
    lVar2 = (longlong)(int)uVar1;
    uVar6 = (uint)*(byte *)(param_1 + 0x40 + lVar2 * 4) * iVar5 * uVar4 +
            (uint)*(byte *)(param_1 + 0x41 + lVar2 * 4) * iVar5 +
            (uint)*(byte *)(param_1 + 0x42 + lVar2 * 4) * uVar4 * uVar4 +
            *(byte *)(param_1 + 0x43 + lVar2 * 4) * uVar4 + 1;
    uVar4 = *(uint *)(param_1 + 0x60 + (longlong)(int)(uVar1 >> 1) * 4) & 0xffff;
    iVar5 = uVar4 * uVar4 * uVar4;
    uVar4 = (uint)*(byte *)(param_1 + 0x40 + (longlong)(int)(uVar1 + 1) * 4) * iVar5 * uVar4 +
            (uint)*(byte *)(param_1 + 0x41 + (longlong)(int)(uVar1 + 2) * 4) * iVar5 +
            (uint)*(byte *)(param_1 + 0x42 + (longlong)(int)(uVar1 + 3) * 4) * uVar4 * uVar4 +
            *(byte *)(param_1 + 0x43 + (longlong)(int)(uVar1 + 4) * 4) * uVar4 + 1;
    *(uint *)(param_2 + lVar3 * 4) = uVar6 * 0x10000 | uVar4 & 0xffff;
    local_38[lVar3] = uVar6 & 0xffff0000 | uVar4 >> 0x10;
    uVar1 = uVar1 + 2;
  } while ((int)uVar1 < 8);
  *(uint *)(param_1 + 0x60) = local_38[0] >> 0x10 | local_38[3] << 0x10;
  *(uint *)(param_1 + 100) = local_38[0] << 0x10 | local_38[1] >> 0x10;
  *(uint *)(param_1 + 0x68) = local_38[1] << 0x10 | local_38[2] >> 0x10;
  *(uint *)(param_1 + 0x6c) = local_38[2] << 0x10 | local_38[3] >> 0x10;
  return;
}

