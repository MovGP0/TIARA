/* Ghidra address: 01743f90 */
/* Ghidra symbol: FUN_01743f90 */


void FUN_01743f90(longlong *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (int)param_1[0x1a];
  iVar1 = 1;
  if (0 < iVar2) {
    do {
      *(undefined1 *)(param_1 + (longlong)iVar1 * 6 + 1) = 0;
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  (**(code **)(*param_1 + 0x68))(param_1);
  return;
}

