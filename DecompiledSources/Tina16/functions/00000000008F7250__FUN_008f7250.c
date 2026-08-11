/* Ghidra address: 008f7250 */
/* Ghidra symbol: FUN_008f7250 */


int FUN_008f7250(longlong param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  ushort *puVar3;
  ushort *puVar4;
  uint uVar5;
  uint uVar6;
  
  uVar6 = 0;
  if (param_1 != 0) {
    uVar6 = *(uint *)(param_1 + -4) >> 1;
  }
  uVar2 = 0;
  if (param_2 != 0) {
    uVar2 = *(uint *)(param_2 + -4) >> 1;
  }
  uVar5 = uVar6;
  if (0 < (int)(uVar6 - uVar2)) {
    uVar5 = uVar2;
  }
  puVar3 = (ushort *)FUN_00415f70();
  puVar4 = (ushort *)FUN_00415f70(param_2);
  for (; (iVar1 = uVar6 - uVar2, uVar5 != 0 &&
         (iVar1 = (uint)*puVar3 - (uint)*puVar4, (uint)*puVar3 - (uint)*puVar4 == 0));
      puVar3 = puVar3 + 1) {
    puVar4 = puVar4 + 1;
    uVar5 = uVar5 - 1;
  }
  return iVar1;
}

