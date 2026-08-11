/* Ghidra address: 01743d80 */
/* Ghidra symbol: FUN_01743d80 */


void FUN_01743d80(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0xd0);
  iVar1 = 1;
  if (0 < iVar2) {
    do {
      FUN_01743be0(param_1,iVar1,param_1 + 8 + (longlong)iVar1 * 0x30);
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *(undefined4 *)(param_1 + 0xd4) = 0xffffffff;
  return;
}

