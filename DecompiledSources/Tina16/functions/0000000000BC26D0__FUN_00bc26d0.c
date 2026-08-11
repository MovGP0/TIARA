/* Ghidra address: 00bc26d0 */
/* Ghidra symbol: FUN_00bc26d0 */


int FUN_00bc26d0(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_2;
  if (*(longlong *)(param_1 + 0x100) != 0) {
    iVar1 = 0;
    iVar2 = 0;
    if (0 < param_2) {
      do {
        while (*(short *)(*(longlong *)(param_1 + 0x100) + (longlong)iVar1 * 2) == -0x2000) {
          iVar1 = iVar1 + 1;
        }
        iVar1 = iVar1 + 1;
        iVar2 = iVar2 + 1;
      } while (iVar2 < param_2);
    }
  }
  return iVar1;
}

