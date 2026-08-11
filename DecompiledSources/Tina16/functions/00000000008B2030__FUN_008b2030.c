/* Ghidra address: 008b2030 */
/* Ghidra symbol: FUN_008b2030 */


void FUN_008b2030(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint local_7c;
  uint local_78 [18];
  
  local_7c = *(uint *)(param_1 + 0x10);
  uVar3 = *(uint *)(param_1 + 0x14);
  uVar2 = *(uint *)(param_1 + 0x18);
  uVar1 = *(uint *)(param_1 + 0x1c);
  iVar6 = 0;
  puVar4 = local_78;
  do {
    uVar7 = iVar6 * 4;
    *puVar4 = (uint)*(byte *)(*(longlong *)(param_1 + 8) + (ulonglong)uVar7) +
              (uint)*(byte *)(*(longlong *)(param_1 + 8) + (ulonglong)(uVar7 + 1)) * 0x100 +
              (uint)*(byte *)(*(longlong *)(param_1 + 8) + (ulonglong)(uVar7 + 2)) * 0x10000 +
              (uint)*(byte *)(*(longlong *)(param_1 + 8) + (ulonglong)(uVar7 + 3)) * 0x1000000;
    iVar6 = iVar6 + 1;
    puVar4 = puVar4 + 1;
  } while (iVar6 != 0x10);
  iVar6 = 0;
  do {
    uVar7 = iVar6 * 4;
    local_7c = FUN_008b0300(((uVar1 ^ uVar2) & uVar3 ^ uVar1) + local_7c + local_78[uVar7],3);
    uVar1 = FUN_008b0300(((uVar2 ^ uVar3) & local_7c ^ uVar2) + uVar1 + local_78[uVar7 + 1],7);
    uVar2 = FUN_008b0300(((uVar3 ^ local_7c) & uVar1 ^ uVar3) + uVar2 + local_78[uVar7 + 2],0xb);
    uVar3 = FUN_008b0300(((local_7c ^ uVar1) & uVar2 ^ local_7c) + uVar3 + local_78[uVar7 + 3],0x13)
    ;
    iVar6 = iVar6 + 1;
  } while (iVar6 != 4);
  uVar7 = 0;
  do {
    uVar5 = uVar1 & (uVar3 | uVar2);
    local_7c = FUN_008b0300((uVar3 & uVar2 | uVar5) + local_7c + local_78[uVar7] + 0x5a827999,
                            CONCAT71((uint7)(uint3)(uVar5 >> 8),3));
    uVar5 = uVar2 & (local_7c | uVar3);
    uVar1 = FUN_008b0300((local_7c & uVar3 | uVar5) + uVar1 + local_78[uVar7 + 4] + 0x5a827999,
                         CONCAT71((uint7)(uint3)(uVar5 >> 8),5));
    uVar5 = uVar3 & (uVar1 | local_7c);
    uVar2 = FUN_008b0300((uVar1 & local_7c | uVar5) + uVar2 + local_78[uVar7 + 8] + 0x5a827999,
                         CONCAT71((uint7)(uint3)(uVar5 >> 8),9));
    uVar5 = local_7c & (uVar2 | uVar1);
    uVar3 = FUN_008b0300((uVar2 & uVar1 | uVar5) + uVar3 + local_78[uVar7 + 0xc] + 0x5a827999,
                         CONCAT71((uint7)(uint3)(uVar5 >> 8),0xd));
    uVar7 = uVar7 + 1;
  } while (uVar7 != 4);
  uVar7 = FUN_008b0300((uVar3 ^ uVar2 ^ uVar1) + local_7c + local_78[0] + 0x6ed9eba1,3);
  uVar1 = FUN_008b0300((uVar7 ^ uVar3 ^ uVar2) + uVar1 + local_78[8] + 0x6ed9eba1,9);
  uVar2 = FUN_008b0300((uVar1 ^ uVar7 ^ uVar3) + uVar2 + local_78[4] + 0x6ed9eba1,0xb);
  uVar3 = FUN_008b0300((uVar2 ^ uVar1 ^ uVar7) + uVar3 + local_78[0xc] + 0x6ed9eba1,0xf);
  uVar7 = FUN_008b0300((uVar3 ^ uVar2 ^ uVar1) + uVar7 + local_78[2] + 0x6ed9eba1,3);
  uVar1 = FUN_008b0300((uVar7 ^ uVar3 ^ uVar2) + uVar1 + local_78[10] + 0x6ed9eba1,9);
  uVar2 = FUN_008b0300((uVar1 ^ uVar7 ^ uVar3) + uVar2 + local_78[6] + 0x6ed9eba1,0xb);
  uVar3 = FUN_008b0300((uVar2 ^ uVar1 ^ uVar7) + uVar3 + local_78[0xe] + 0x6ed9eba1,0xf);
  uVar7 = FUN_008b0300((uVar3 ^ uVar2 ^ uVar1) + uVar7 + local_78[1] + 0x6ed9eba1,3);
  uVar1 = FUN_008b0300((uVar7 ^ uVar3 ^ uVar2) + uVar1 + local_78[9] + 0x6ed9eba1,9);
  uVar2 = FUN_008b0300((uVar1 ^ uVar7 ^ uVar3) + uVar2 + local_78[5] + 0x6ed9eba1,0xb);
  uVar3 = FUN_008b0300((uVar2 ^ uVar1 ^ uVar7) + uVar3 + local_78[0xd] + 0x6ed9eba1,0xf);
  uVar7 = FUN_008b0300((uVar3 ^ uVar2 ^ uVar1) + uVar7 + local_78[3] + 0x6ed9eba1,3);
  uVar1 = FUN_008b0300((uVar7 ^ uVar3 ^ uVar2) + uVar1 + local_78[0xb] + 0x6ed9eba1,9);
  uVar2 = FUN_008b0300((uVar1 ^ uVar7 ^ uVar3) + uVar2 + local_78[7] + 0x6ed9eba1,0xb);
  iVar6 = FUN_008b0300((uVar2 ^ uVar1 ^ uVar7) + uVar3 + local_78[0xf] + 0x6ed9eba1,0xf);
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + uVar7;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + iVar6;
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + uVar2;
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + uVar1;
  return;
}

