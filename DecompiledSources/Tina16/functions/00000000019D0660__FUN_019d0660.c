/* Ghidra address: 019d0660 */
/* Ghidra symbol: FUN_019d0660 */


undefined8 FUN_019d0660(longlong param_1,double param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  double dVar3;
  
  *param_3 = -1;
  iVar2 = *(int *)(param_1 + 0x74);
  iVar1 = 0;
  if (-1 < iVar2 + -1) {
    do {
      dVar3 = (double)FUN_0040c850(*(double *)(param_1 + 0xb0 + (longlong)iVar1 * 0x10) - param_2);
      if (dVar3 < 1e-12) {
        *param_3 = iVar1;
        return 1;
      }
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

