/* Ghidra address: 017c2630 */
/* Ghidra symbol: FUN_017c2630 */


int FUN_017c2630(longlong param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = *(int *)(param_1 + 0x94) - *(int *)(param_1 + 0x10);
  uVar3 = (int)uVar1 >> 0x1f;
  iVar2 = (uVar1 ^ uVar3) - uVar3;
  if (iVar2 == 0) {
    iVar2 = 2;
  }
  return iVar2;
}

