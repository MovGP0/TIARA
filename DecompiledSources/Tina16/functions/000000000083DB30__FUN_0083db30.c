/* Ghidra address: 0083db30 */
/* Ghidra symbol: FUN_0083db30 */


bool FUN_0083db30(uint *param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  bVar3 = false;
  if (param_1 == (uint *)0x0) {
    bVar3 = param_2 == 0;
  }
  else if (param_2 != 0) {
    iVar1 = 0;
    if (*param_1 < 0x80000000) {
      iVar2 = *param_1 + 1;
      do {
        if (param_1[iVar1] != *(uint *)(param_2 + (longlong)iVar1 * 4)) {
          return false;
        }
        iVar1 = iVar1 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    bVar3 = true;
  }
  return bVar3;
}

