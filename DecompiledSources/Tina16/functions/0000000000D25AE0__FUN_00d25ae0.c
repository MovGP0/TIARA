/* Ghidra address: 00d25ae0 */
/* Ghidra symbol: FUN_00d25ae0 */


void FUN_00d25ae0(longlong param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  
  puVar1 = *(uint **)(param_1 + 0x68);
  puVar6 = puVar1 + 3;
  uVar2 = *param_2;
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  iVar7 = 0xb;
  do {
    uVar2 = uVar2 ^ *puVar1;
    uVar3 = uVar2 ^ *puVar6 << 0x10;
    uVar4 = uVar4 ^ puVar1[1];
    uVar5 = uVar5 ^ puVar1[2] ^ *puVar6;
    puVar6 = puVar6 + 1;
    uVar8 = uVar3 ^ uVar3 >> 0x10 ^ uVar4 << 0x10 ^ uVar4 >> 0x10 ^ uVar5 << 0x10 ^ uVar4 >> 0x18 ^
            uVar5 << 8 ^ uVar5 >> 8 ^ uVar2 << 0x18 ^ uVar5 >> 0x10 ^ uVar2 << 0x10 ^ uVar5 >> 0x18
            ^ uVar3 << 8;
    uVar9 = uVar4 ^ uVar4 >> 0x10 ^ uVar5 << 0x10 ^ uVar5 >> 0x10 ^ uVar2 << 0x10 ^ uVar5 >> 0x18 ^
            uVar3 << 8 ^ uVar3 >> 8 ^ uVar4 << 0x18 ^ uVar3 >> 0x10 ^ uVar4 << 0x10 ^ uVar3 >> 0x18
            ^ uVar4 << 8;
    uVar5 = uVar5 ^ uVar5 >> 0x10 ^ uVar2 << 0x10 ^ uVar3 >> 0x10 ^ uVar4 << 0x10 ^ uVar3 >> 0x18 ^
            uVar4 << 8 ^ uVar4 >> 8 ^ uVar5 << 0x18 ^ uVar4 >> 0x10 ^ uVar5 << 0x10 ^ uVar4 >> 0x18
            ^ uVar5 << 8;
    uVar2 = uVar8 ^ (uVar9 | ~uVar5);
    uVar4 = uVar9 ^ (uVar5 | ~uVar8);
    uVar5 = uVar5 ^ (uVar8 | ~uVar9);
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  uVar2 = uVar2 ^ *puVar1;
  uVar3 = uVar2 ^ *puVar6 << 0x10;
  uVar4 = uVar4 ^ puVar1[1];
  uVar5 = uVar5 ^ puVar1[2] ^ *puVar6;
  *param_2 = uVar3 ^ uVar3 >> 0x10 ^ uVar4 << 0x10 ^ uVar4 >> 0x10 ^ uVar5 << 0x10 ^ uVar4 >> 0x18 ^
             uVar5 << 8 ^ uVar5 >> 8 ^ uVar2 << 0x18 ^ uVar5 >> 0x10 ^ uVar2 << 0x10 ^ uVar5 >> 0x18
             ^ uVar3 << 8;
  param_2[1] = uVar4 ^ uVar4 >> 0x10 ^ uVar5 << 0x10 ^ uVar5 >> 0x10 ^ uVar2 << 0x10 ^ uVar5 >> 0x18
               ^ uVar3 << 8 ^ uVar3 >> 8 ^ uVar4 << 0x18 ^ uVar3 >> 0x10 ^ uVar4 << 0x10 ^
               uVar3 >> 0x18 ^ uVar4 << 8;
  param_2[2] = uVar5 ^ uVar5 >> 0x10 ^ uVar2 << 0x10 ^ uVar3 >> 0x10 ^ uVar4 << 0x10 ^ uVar3 >> 0x18
               ^ uVar4 << 8 ^ uVar4 >> 8 ^ uVar5 << 0x18 ^ uVar4 >> 0x10 ^ uVar5 << 0x10 ^
               uVar4 >> 0x18 ^ uVar5 << 8;
  return;
}

