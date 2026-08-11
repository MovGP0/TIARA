/* Ghidra address: 0119a4f0 */
/* Ghidra symbol: FUN_0119a4f0 */


int FUN_0119a4f0(uint param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = 1;
  iVar2 = 0;
  iVar3 = 8;
  do {
    if ((param_1 | uVar1) == param_1) {
      iVar2 = iVar2 + 1;
    }
    uVar1 = uVar1 * 2;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return iVar2;
}

