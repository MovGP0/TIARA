/* Ghidra address: 0044a3c0 */
/* Ghidra symbol: FUN_0044a3c0 */


void FUN_0044a3c0(longlong param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_2;
  while( true ) {
    iVar2 = 0;
    if (param_1 != 0) {
      iVar2 = *(int *)(param_1 + -4);
    }
    if ((iVar2 < iVar1) || (*(short *)(param_1 + -2 + (longlong)iVar1 * 2) != 0x20)) break;
    iVar1 = iVar1 + 1;
  }
  *param_2 = iVar1;
  return;
}

