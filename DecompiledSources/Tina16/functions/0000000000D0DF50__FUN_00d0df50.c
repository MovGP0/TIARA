/* Ghidra address: 00d0df50 */
/* Ghidra symbol: FUN_00d0df50 */


void FUN_00d0df50(longlong param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar4 = *(uint *)(param_1 + 0x70);
  uVar3 = *(uint *)(param_1 + 0x74);
  uVar1 = *(int *)(param_1 + 0x6c) + *param_2 + (uVar4 & uVar3 | ~uVar4 & *(uint *)(param_1 + 0x78))
  ;
  uVar1 = uVar1 * 8 | uVar1 >> 0x1d;
  uVar2 = *(uint *)(param_1 + 0x78) + param_2[1] + (uVar1 & uVar4 | ~uVar1 & uVar3);
  uVar2 = uVar2 * 0x80 | uVar2 >> 0x19;
  uVar3 = uVar3 + param_2[2] + (uVar2 & uVar1 | ~uVar2 & uVar4);
  uVar3 = uVar3 * 0x800 | uVar3 >> 0x15;
  uVar4 = uVar4 + param_2[3] + (uVar3 & uVar2 | ~uVar3 & uVar1);
  uVar4 = uVar4 * 0x80000 | uVar4 >> 0xd;
  uVar1 = uVar1 + param_2[4] + (uVar4 & uVar3 | ~uVar4 & uVar2);
  uVar1 = uVar1 * 8 | uVar1 >> 0x1d;
  uVar2 = uVar2 + param_2[5] + (uVar1 & uVar4 | ~uVar1 & uVar3);
  uVar2 = uVar2 * 0x80 | uVar2 >> 0x19;
  uVar3 = uVar3 + param_2[6] + (uVar2 & uVar1 | ~uVar2 & uVar4);
  uVar3 = uVar3 * 0x800 | uVar3 >> 0x15;
  uVar4 = uVar4 + param_2[7] + (uVar3 & uVar2 | ~uVar3 & uVar1);
  uVar4 = uVar4 * 0x80000 | uVar4 >> 0xd;
  uVar1 = uVar1 + param_2[8] + (uVar4 & uVar3 | ~uVar4 & uVar2);
  uVar5 = uVar1 * 8 | uVar1 >> 0x1d;
  uVar2 = uVar2 + param_2[9] + (uVar5 & uVar4 | ~uVar5 & uVar3);
  uVar1 = uVar2 * 0x80 | uVar2 >> 0x19;
  uVar3 = uVar3 + param_2[10] + (uVar1 & uVar5 | ~uVar1 & uVar4);
  uVar3 = uVar3 * 0x800 | uVar3 >> 0x15;
  uVar4 = uVar4 + param_2[0xb] + (uVar3 & uVar1 | ~uVar3 & uVar5);
  uVar4 = uVar4 * 0x80000 | uVar4 >> 0xd;
  uVar5 = uVar5 + param_2[0xc] + (uVar4 & uVar3 | ~uVar4 & uVar1);
  uVar5 = uVar5 * 8 | uVar5 >> 0x1d;
  uVar1 = uVar1 + param_2[0xd] + (uVar5 & uVar4 | ~uVar5 & uVar3);
  uVar6 = uVar1 * 0x80 | uVar1 >> 0x19;
  uVar3 = uVar3 + param_2[0xe] + (uVar6 & uVar5 | ~uVar6 & uVar4);
  uVar1 = uVar3 * 0x800 | uVar3 >> 0x15;
  uVar4 = uVar4 + param_2[0xf] + (uVar1 & uVar6 | ~uVar1 & uVar5);
  uVar2 = uVar4 * 0x80000 | uVar4 >> 0xd;
  uVar4 = uVar5 + *param_2 + (uVar2 & (uVar1 | uVar6) | uVar1 & uVar6) + 0x5a827999;
  uVar4 = uVar4 * 8 | uVar4 >> 0x1d;
  uVar3 = uVar6 + param_2[4] + (uVar4 & (uVar2 | uVar1) | uVar2 & uVar1) + 0x5a827999;
  uVar3 = uVar3 * 0x20 | uVar3 >> 0x1b;
  uVar1 = uVar1 + param_2[8] + (uVar3 & (uVar4 | uVar2) | uVar4 & uVar2) + 0x5a827999;
  uVar1 = uVar1 * 0x200 | uVar1 >> 0x17;
  uVar2 = uVar2 + param_2[0xc] + (uVar1 & (uVar3 | uVar4) | uVar3 & uVar4) + 0x5a827999;
  uVar2 = uVar2 * 0x2000 | uVar2 >> 0x13;
  uVar4 = uVar4 + param_2[1] + (uVar2 & (uVar1 | uVar3) | uVar1 & uVar3) + 0x5a827999;
  uVar4 = uVar4 * 8 | uVar4 >> 0x1d;
  uVar3 = uVar3 + param_2[5] + (uVar4 & (uVar2 | uVar1) | uVar2 & uVar1) + 0x5a827999;
  uVar3 = uVar3 * 0x20 | uVar3 >> 0x1b;
  uVar1 = uVar1 + param_2[9] + (uVar3 & (uVar4 | uVar2) | uVar4 & uVar2) + 0x5a827999;
  uVar1 = uVar1 * 0x200 | uVar1 >> 0x17;
  uVar2 = uVar2 + param_2[0xd] + (uVar1 & (uVar3 | uVar4) | uVar3 & uVar4) + 0x5a827999;
  uVar2 = uVar2 * 0x2000 | uVar2 >> 0x13;
  uVar4 = uVar4 + param_2[2] + (uVar2 & (uVar1 | uVar3) | uVar1 & uVar3) + 0x5a827999;
  uVar4 = uVar4 * 8 | uVar4 >> 0x1d;
  uVar3 = uVar3 + param_2[6] + (uVar4 & (uVar2 | uVar1) | uVar2 & uVar1) + 0x5a827999;
  uVar3 = uVar3 * 0x20 | uVar3 >> 0x1b;
  uVar1 = uVar1 + param_2[10] + (uVar3 & (uVar4 | uVar2) | uVar4 & uVar2) + 0x5a827999;
  uVar1 = uVar1 * 0x200 | uVar1 >> 0x17;
  uVar2 = uVar2 + param_2[0xe] + (uVar1 & (uVar3 | uVar4) | uVar3 & uVar4) + 0x5a827999;
  uVar2 = uVar2 * 0x2000 | uVar2 >> 0x13;
  uVar4 = uVar4 + param_2[3] + (uVar2 & (uVar1 | uVar3) | uVar1 & uVar3) + 0x5a827999;
  uVar4 = uVar4 * 8 | uVar4 >> 0x1d;
  uVar3 = uVar3 + param_2[7] + (uVar4 & (uVar2 | uVar1) | uVar2 & uVar1) + 0x5a827999;
  uVar3 = uVar3 * 0x20 | uVar3 >> 0x1b;
  uVar1 = uVar1 + param_2[0xb] + (uVar3 & (uVar4 | uVar2) | uVar4 & uVar2) + 0x5a827999;
  uVar1 = uVar1 * 0x200 | uVar1 >> 0x17;
  uVar2 = uVar2 + param_2[0xf] + (uVar1 & (uVar3 | uVar4) | uVar3 & uVar4) + 0x5a827999;
  uVar2 = uVar2 * 0x2000 | uVar2 >> 0x13;
  uVar4 = uVar4 + *param_2 + (uVar2 ^ uVar1 ^ uVar3) + 0x6ed9eba1;
  uVar4 = uVar4 * 8 | uVar4 >> 0x1d;
  uVar3 = uVar3 + param_2[8] + (uVar4 ^ uVar2 ^ uVar1) + 0x6ed9eba1;
  uVar3 = uVar3 * 0x200 | uVar3 >> 0x17;
  uVar1 = uVar1 + param_2[4] + (uVar3 ^ uVar4 ^ uVar2) + 0x6ed9eba1;
  uVar1 = uVar1 * 0x800 | uVar1 >> 0x15;
  uVar2 = uVar2 + param_2[0xc] + (uVar1 ^ uVar3 ^ uVar4) + 0x6ed9eba1;
  uVar2 = uVar2 * 0x8000 | uVar2 >> 0x11;
  uVar4 = uVar4 + param_2[2] + (uVar2 ^ uVar1 ^ uVar3) + 0x6ed9eba1;
  uVar4 = uVar4 * 8 | uVar4 >> 0x1d;
  uVar3 = uVar3 + param_2[10] + (uVar4 ^ uVar2 ^ uVar1) + 0x6ed9eba1;
  uVar3 = uVar3 * 0x200 | uVar3 >> 0x17;
  uVar1 = uVar1 + param_2[6] + (uVar3 ^ uVar4 ^ uVar2) + 0x6ed9eba1;
  uVar1 = uVar1 * 0x800 | uVar1 >> 0x15;
  uVar2 = uVar2 + param_2[0xe] + (uVar1 ^ uVar3 ^ uVar4) + 0x6ed9eba1;
  uVar2 = uVar2 * 0x8000 | uVar2 >> 0x11;
  uVar4 = uVar4 + param_2[1] + (uVar2 ^ uVar1 ^ uVar3) + 0x6ed9eba1;
  uVar4 = uVar4 * 8 | uVar4 >> 0x1d;
  uVar3 = uVar3 + param_2[9] + (uVar4 ^ uVar2 ^ uVar1) + 0x6ed9eba1;
  uVar3 = uVar3 * 0x200 | uVar3 >> 0x17;
  uVar1 = uVar1 + param_2[5] + (uVar3 ^ uVar4 ^ uVar2) + 0x6ed9eba1;
  uVar1 = uVar1 * 0x800 | uVar1 >> 0x15;
  uVar2 = uVar2 + param_2[0xd] + (uVar1 ^ uVar3 ^ uVar4) + 0x6ed9eba1;
  uVar2 = uVar2 * 0x8000 | uVar2 >> 0x11;
  uVar4 = uVar4 + param_2[3] + (uVar2 ^ uVar1 ^ uVar3) + 0x6ed9eba1;
  uVar4 = uVar4 * 8 | uVar4 >> 0x1d;
  uVar3 = uVar3 + param_2[0xb] + (uVar4 ^ uVar2 ^ uVar1) + 0x6ed9eba1;
  uVar3 = uVar3 * 0x200 | uVar3 >> 0x17;
  uVar1 = uVar1 + param_2[7] + (uVar3 ^ uVar4 ^ uVar2) + 0x6ed9eba1;
  uVar1 = uVar1 * 0x800 | uVar1 >> 0x15;
  uVar2 = uVar2 + param_2[0xf] + (uVar1 ^ uVar3 ^ uVar4) + 0x6ed9eba1;
  *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + uVar4;
  *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + (uVar2 * 0x8000 | uVar2 >> 0x11);
  *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + uVar1;
  *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + uVar3;
  return;
}

