/* Ghidra address: 017bd510 */
/* Ghidra symbol: FUN_017bd510 */


int FUN_017bd510(longlong param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  FUN_00b94c60();
  uVar1 = *(int *)(param_1 + 0xb8) - *(int *)(param_1 + 0xc);
  uVar3 = (int)uVar1 >> 0x1f;
  iVar2 = (uVar1 ^ uVar3) - uVar3;
  if (iVar2 == 0) {
    iVar2 = 2;
  }
  return iVar2;
}

