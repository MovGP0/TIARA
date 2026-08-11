/* Ghidra address: 015b12b0 */
/* Ghidra symbol: FUN_015b12b0 */


void FUN_015b12b0(longlong param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = *(uint *)(param_1 + 0x70);
  uVar3 = *(uint *)(param_1 + 0x74);
  uVar2 = *(int *)(param_1 + 0x6c) + *param_2 + (uVar4 & uVar3 | ~uVar4 & *(uint *)(param_1 + 0x78))
  ;
  uVar1 = uVar2 * 8 | uVar2 >> 0x1d;
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
  uVar1 = uVar1 * 8 | uVar1 >> 0x1d;
  uVar2 = uVar2 + param_2[9] + (uVar1 & uVar4 | ~uVar1 & uVar3);
  uVar2 = uVar2 * 0x80 | uVar2 >> 0x19;
  uVar3 = uVar3 + param_2[10] + (uVar2 & uVar1 | ~uVar2 & uVar4);
  uVar3 = uVar3 * 0x800 | uVar3 >> 0x15;
  uVar4 = uVar4 + param_2[0xb] + (uVar3 & uVar2 | ~uVar3 & uVar1);
  uVar4 = uVar4 * 0x80000 | uVar4 >> 0xd;
  uVar1 = uVar1 + param_2[0xc] + (uVar4 & uVar3 | ~uVar4 & uVar2);
  uVar1 = uVar1 * 8 | uVar1 >> 0x1d;
  uVar2 = uVar2 + param_2[0xd] + (uVar1 & uVar4 | ~uVar1 & uVar3);
  uVar2 = uVar2 * 0x80 | uVar2 >> 0x19;
  uVar3 = uVar3 + param_2[0xe] + (uVar2 & uVar1 | ~uVar2 & uVar4);
  uVar3 = uVar3 * 0x800 | uVar3 >> 0x15;
  uVar4 = uVar4 + param_2[0xf] + (uVar3 & uVar2 | ~uVar3 & uVar1);
  uVar4 = uVar4 * 0x80000 | uVar4 >> 0xd;
  uVar1 = uVar1 + *param_2 + (uVar4 & (uVar3 | uVar2) | uVar3 & uVar2) + 0x5a827999;
  uVar1 = uVar1 * 8 | uVar1 >> 0x1d;
  uVar2 = uVar2 + param_2[4] + (uVar1 & (uVar4 | uVar3) | uVar4 & uVar3) + 0x5a827999;
  uVar2 = uVar2 * 0x20 | uVar2 >> 0x1b;
  uVar3 = uVar3 + param_2[8] + (uVar2 & (uVar1 | uVar4) | uVar1 & uVar4) + 0x5a827999;
  uVar3 = uVar3 * 0x200 | uVar3 >> 0x17;
  uVar4 = uVar4 + param_2[0xc] + (uVar3 & (uVar2 | uVar1) | uVar2 & uVar1) + 0x5a827999;
  uVar4 = uVar4 * 0x2000 | uVar4 >> 0x13;
  uVar1 = uVar1 + param_2[1] + (uVar4 & (uVar3 | uVar2) | uVar3 & uVar2) + 0x5a827999;
  uVar1 = uVar1 * 8 | uVar1 >> 0x1d;
  uVar2 = uVar2 + param_2[5] + (uVar1 & (uVar4 | uVar3) | uVar4 & uVar3) + 0x5a827999;
  uVar2 = uVar2 * 0x20 | uVar2 >> 0x1b;
  uVar3 = uVar3 + param_2[9] + (uVar2 & (uVar1 | uVar4) | uVar1 & uVar4) + 0x5a827999;
  uVar3 = uVar3 * 0x200 | uVar3 >> 0x17;
  uVar4 = uVar4 + param_2[0xd] + (uVar3 & (uVar2 | uVar1) | uVar2 & uVar1) + 0x5a827999;
  uVar4 = uVar4 * 0x2000 | uVar4 >> 0x13;
  uVar1 = uVar1 + param_2[2] + (uVar4 & (uVar3 | uVar2) | uVar3 & uVar2) + 0x5a827999;
  uVar1 = uVar1 * 8 | uVar1 >> 0x1d;
  uVar2 = uVar2 + param_2[6] + (uVar1 & (uVar4 | uVar3) | uVar4 & uVar3) + 0x5a827999;
  uVar2 = uVar2 * 0x20 | uVar2 >> 0x1b;
  uVar3 = uVar3 + param_2[10] + (uVar2 & (uVar1 | uVar4) | uVar1 & uVar4) + 0x5a827999;
  uVar3 = uVar3 * 0x200 | uVar3 >> 0x17;
  uVar4 = uVar4 + param_2[0xe] + (uVar3 & (uVar2 | uVar1) | uVar2 & uVar1) + 0x5a827999;
  uVar4 = uVar4 * 0x2000 | uVar4 >> 0x13;
  uVar1 = uVar1 + param_2[3] + (uVar4 & (uVar3 | uVar2) | uVar3 & uVar2) + 0x5a827999;
  uVar1 = uVar1 * 8 | uVar1 >> 0x1d;
  uVar2 = uVar2 + param_2[7] + (uVar1 & (uVar4 | uVar3) | uVar4 & uVar3) + 0x5a827999;
  uVar2 = uVar2 * 0x20 | uVar2 >> 0x1b;
  uVar3 = uVar3 + param_2[0xb] + (uVar2 & (uVar1 | uVar4) | uVar1 & uVar4) + 0x5a827999;
  uVar3 = uVar3 * 0x200 | uVar3 >> 0x17;
  uVar4 = uVar4 + param_2[0xf] + (uVar3 & (uVar2 | uVar1) | uVar2 & uVar1) + 0x5a827999;
  uVar4 = uVar4 * 0x2000 | uVar4 >> 0x13;
  uVar1 = uVar1 + *param_2 + (uVar4 ^ uVar3 ^ uVar2) + 0x6ed9eba1;
  uVar1 = uVar1 * 8 | uVar1 >> 0x1d;
  uVar2 = uVar2 + param_2[8] + (uVar1 ^ uVar4 ^ uVar3) + 0x6ed9eba1;
  uVar2 = uVar2 * 0x200 | uVar2 >> 0x17;
  uVar3 = uVar3 + param_2[4] + (uVar2 ^ uVar1 ^ uVar4) + 0x6ed9eba1;
  uVar3 = uVar3 * 0x800 | uVar3 >> 0x15;
  uVar4 = uVar4 + param_2[0xc] + (uVar3 ^ uVar2 ^ uVar1) + 0x6ed9eba1;
  uVar4 = uVar4 * 0x8000 | uVar4 >> 0x11;
  uVar1 = uVar1 + param_2[2] + (uVar4 ^ uVar3 ^ uVar2) + 0x6ed9eba1;
  uVar1 = uVar1 * 8 | uVar1 >> 0x1d;
  uVar2 = uVar2 + param_2[10] + (uVar1 ^ uVar4 ^ uVar3) + 0x6ed9eba1;
  uVar2 = uVar2 * 0x200 | uVar2 >> 0x17;
  uVar3 = uVar3 + param_2[6] + (uVar2 ^ uVar1 ^ uVar4) + 0x6ed9eba1;
  uVar3 = uVar3 * 0x800 | uVar3 >> 0x15;
  uVar4 = uVar4 + param_2[0xe] + (uVar3 ^ uVar2 ^ uVar1) + 0x6ed9eba1;
  uVar4 = uVar4 * 0x8000 | uVar4 >> 0x11;
  uVar1 = uVar1 + param_2[1] + (uVar4 ^ uVar3 ^ uVar2) + 0x6ed9eba1;
  uVar1 = uVar1 * 8 | uVar1 >> 0x1d;
  uVar2 = uVar2 + param_2[9] + (uVar1 ^ uVar4 ^ uVar3) + 0x6ed9eba1;
  uVar2 = uVar2 * 0x200 | uVar2 >> 0x17;
  uVar3 = uVar3 + param_2[5] + (uVar2 ^ uVar1 ^ uVar4) + 0x6ed9eba1;
  uVar3 = uVar3 * 0x800 | uVar3 >> 0x15;
  uVar4 = uVar4 + param_2[0xd] + (uVar3 ^ uVar2 ^ uVar1) + 0x6ed9eba1;
  uVar4 = uVar4 * 0x8000 | uVar4 >> 0x11;
  uVar1 = uVar1 + param_2[3] + (uVar4 ^ uVar3 ^ uVar2) + 0x6ed9eba1;
  uVar1 = uVar1 * 8 | uVar1 >> 0x1d;
  uVar2 = uVar2 + param_2[0xb] + (uVar1 ^ uVar4 ^ uVar3) + 0x6ed9eba1;
  uVar2 = uVar2 * 0x200 | uVar2 >> 0x17;
  uVar3 = uVar3 + param_2[7] + (uVar2 ^ uVar1 ^ uVar4) + 0x6ed9eba1;
  uVar3 = uVar3 * 0x800 | uVar3 >> 0x15;
  uVar4 = uVar4 + param_2[0xf] + (uVar3 ^ uVar2 ^ uVar1) + 0x6ed9eba1;
  *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + uVar1;
  *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + (uVar4 * 0x8000 | uVar4 >> 0x11);
  *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + uVar3;
  *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + uVar2;
  return;
}

