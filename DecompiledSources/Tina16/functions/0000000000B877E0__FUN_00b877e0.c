/* Ghidra address: 00b877e0 */
/* Ghidra symbol: FUN_00b877e0 */


void FUN_00b877e0(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  
  FUN_0040d200(&local_78,0x40,0);
  FUN_00409a70(param_1 + 0x9c,&local_78,0x40);
  uVar4 = *(uint *)(param_1 + 0x90);
  uVar3 = *(uint *)(param_1 + 0x94);
  uVar2 = *(uint *)(param_1 + 0x98);
  uVar1 = FUN_00b877c0(*(int *)(param_1 + 0x8c) + (uVar2 ^ uVar4 & (uVar3 ^ uVar2)) + local_78,3);
  uVar2 = FUN_00b877c0(uVar2 + (uVar3 ^ uVar1 & (uVar4 ^ uVar3)) + local_74,7);
  uVar3 = FUN_00b877c0(uVar3 + (uVar4 ^ uVar2 & (uVar1 ^ uVar4)) + local_70,0xb);
  uVar4 = FUN_00b877c0(uVar4 + (uVar1 ^ uVar3 & (uVar2 ^ uVar1)) + local_6c,0x13);
  uVar1 = FUN_00b877c0(uVar1 + (uVar2 ^ uVar4 & (uVar3 ^ uVar2)) + local_68,3);
  uVar2 = FUN_00b877c0(uVar2 + (uVar3 ^ uVar1 & (uVar4 ^ uVar3)) + local_64,7);
  uVar3 = FUN_00b877c0(uVar3 + (uVar4 ^ uVar2 & (uVar1 ^ uVar4)) + local_60,0xb);
  uVar4 = FUN_00b877c0(uVar4 + (uVar1 ^ uVar3 & (uVar2 ^ uVar1)) + local_5c,0x13);
  uVar1 = FUN_00b877c0(uVar1 + (uVar2 ^ uVar4 & (uVar3 ^ uVar2)) + local_58,3);
  uVar2 = FUN_00b877c0(uVar2 + (uVar3 ^ uVar1 & (uVar4 ^ uVar3)) + local_54,7);
  uVar3 = FUN_00b877c0(uVar3 + (uVar4 ^ uVar2 & (uVar1 ^ uVar4)) + local_50,0xb);
  uVar4 = FUN_00b877c0(uVar4 + (uVar1 ^ uVar3 & (uVar2 ^ uVar1)) + local_4c,0x13);
  uVar1 = FUN_00b877c0(uVar1 + (uVar2 ^ uVar4 & (uVar3 ^ uVar2)) + local_48,3);
  uVar2 = FUN_00b877c0(uVar2 + (uVar3 ^ uVar1 & (uVar4 ^ uVar3)) + local_44,7);
  uVar3 = FUN_00b877c0(uVar3 + (uVar4 ^ uVar2 & (uVar1 ^ uVar4)) + local_40,0xb);
  uVar4 = FUN_00b877c0(uVar4 + (uVar1 ^ uVar3 & (uVar2 ^ uVar1)) + local_3c,0x13);
  uVar1 = FUN_00b877c0(uVar1 + (uVar4 & (uVar3 | uVar2) | uVar3 & uVar2) + local_78 + 0x5a827999,3);
  uVar2 = FUN_00b877c0(uVar2 + (uVar1 & (uVar4 | uVar3) | uVar4 & uVar3) + local_68 + 0x5a827999,5);
  uVar3 = FUN_00b877c0(uVar3 + (uVar2 & (uVar1 | uVar4) | uVar1 & uVar4) + local_58 + 0x5a827999,9);
  uVar4 = FUN_00b877c0(uVar4 + (uVar3 & (uVar2 | uVar1) | uVar2 & uVar1) + local_48 + 0x5a827999,0xd
                      );
  uVar1 = FUN_00b877c0(uVar1 + (uVar4 & (uVar3 | uVar2) | uVar3 & uVar2) + local_74 + 0x5a827999,3);
  uVar2 = FUN_00b877c0(uVar2 + (uVar1 & (uVar4 | uVar3) | uVar4 & uVar3) + local_64 + 0x5a827999,5);
  uVar3 = FUN_00b877c0(uVar3 + (uVar2 & (uVar1 | uVar4) | uVar1 & uVar4) + local_54 + 0x5a827999,9);
  uVar4 = FUN_00b877c0(uVar4 + (uVar3 & (uVar2 | uVar1) | uVar2 & uVar1) + local_44 + 0x5a827999,0xd
                      );
  uVar1 = FUN_00b877c0(uVar1 + (uVar4 & (uVar3 | uVar2) | uVar3 & uVar2) + local_70 + 0x5a827999,3);
  uVar2 = FUN_00b877c0(uVar2 + (uVar1 & (uVar4 | uVar3) | uVar4 & uVar3) + local_60 + 0x5a827999,5);
  uVar3 = FUN_00b877c0(uVar3 + (uVar2 & (uVar1 | uVar4) | uVar1 & uVar4) + local_50 + 0x5a827999,9);
  uVar4 = FUN_00b877c0(uVar4 + (uVar3 & (uVar2 | uVar1) | uVar2 & uVar1) + local_40 + 0x5a827999,0xd
                      );
  uVar1 = FUN_00b877c0(uVar1 + (uVar4 & (uVar3 | uVar2) | uVar3 & uVar2) + local_6c + 0x5a827999,3);
  uVar2 = FUN_00b877c0(uVar2 + (uVar1 & (uVar4 | uVar3) | uVar4 & uVar3) + local_5c + 0x5a827999,5);
  uVar3 = FUN_00b877c0(uVar3 + (uVar2 & (uVar1 | uVar4) | uVar1 & uVar4) + local_4c + 0x5a827999,9);
  uVar4 = FUN_00b877c0(uVar4 + (uVar3 & (uVar2 | uVar1) | uVar2 & uVar1) + local_3c + 0x5a827999,0xd
                      );
  uVar1 = FUN_00b877c0(uVar1 + (uVar4 ^ uVar3 ^ uVar2) + local_78 + 0x6ed9eba1,3);
  uVar2 = FUN_00b877c0(uVar2 + (uVar1 ^ uVar4 ^ uVar3) + local_58 + 0x6ed9eba1,9);
  uVar3 = FUN_00b877c0(uVar3 + (uVar2 ^ uVar1 ^ uVar4) + local_68 + 0x6ed9eba1,0xb);
  uVar4 = FUN_00b877c0(uVar4 + (uVar3 ^ uVar2 ^ uVar1) + local_48 + 0x6ed9eba1,0xf);
  uVar1 = FUN_00b877c0(uVar1 + (uVar4 ^ uVar3 ^ uVar2) + local_70 + 0x6ed9eba1,3);
  uVar2 = FUN_00b877c0(uVar2 + (uVar1 ^ uVar4 ^ uVar3) + local_50 + 0x6ed9eba1,9);
  uVar3 = FUN_00b877c0(uVar3 + (uVar2 ^ uVar1 ^ uVar4) + local_60 + 0x6ed9eba1,0xb);
  uVar4 = FUN_00b877c0(uVar4 + (uVar3 ^ uVar2 ^ uVar1) + local_40 + 0x6ed9eba1,0xf);
  uVar1 = FUN_00b877c0(uVar1 + (uVar4 ^ uVar3 ^ uVar2) + local_74 + 0x6ed9eba1,3);
  uVar2 = FUN_00b877c0(uVar2 + (uVar1 ^ uVar4 ^ uVar3) + local_54 + 0x6ed9eba1,9);
  uVar3 = FUN_00b877c0(uVar3 + (uVar2 ^ uVar1 ^ uVar4) + local_64 + 0x6ed9eba1,0xb);
  uVar4 = FUN_00b877c0(uVar4 + (uVar3 ^ uVar2 ^ uVar1) + local_44 + 0x6ed9eba1,0xf);
  uVar1 = FUN_00b877c0(uVar1 + (uVar4 ^ uVar3 ^ uVar2) + local_6c + 0x6ed9eba1,3);
  uVar2 = FUN_00b877c0(uVar2 + (uVar1 ^ uVar4 ^ uVar3) + local_4c + 0x6ed9eba1,9);
  uVar3 = FUN_00b877c0(uVar3 + (uVar2 ^ uVar1 ^ uVar4) + local_5c + 0x6ed9eba1,0xb);
  iVar5 = FUN_00b877c0(uVar4 + (uVar3 ^ uVar2 ^ uVar1) + local_3c + 0x6ed9eba1,0xf);
  *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + uVar1;
  *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x90) + iVar5;
  *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + uVar3;
  *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + uVar2;
  *(undefined4 *)(param_1 + 0x88) = 0;
  FUN_0040d200(param_1 + 0x9c,0x40,0);
  return;
}

