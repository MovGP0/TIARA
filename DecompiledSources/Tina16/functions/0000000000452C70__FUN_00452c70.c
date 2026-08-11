/* Ghidra address: 00452c70 */
/* Ghidra symbol: FUN_00452c70 */


int FUN_00452c70(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (*(longlong *)(param_1 + 8) != 0) {
    iVar2 = (int)*(undefined8 *)(*(longlong *)(param_1 + 8) + -8);
  }
  iVar1 = 0;
  if (-1 < iVar2 + -1) {
    do {
      if (*(int *)(*(longlong *)(param_1 + 8) + 8 + (longlong)iVar1 * 0x1c) == param_2) {
        return iVar1;
      }
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return -1;
}

