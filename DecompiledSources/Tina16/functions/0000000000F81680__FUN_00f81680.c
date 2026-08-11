/* Ghidra address: 00f81680 */
/* Ghidra symbol: FUN_00f81680 */


double FUN_00f81680(longlong param_1,double param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x30) + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      lVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x30),iVar2);
      if (param_2 < *(double *)(lVar1 + 8)) {
        return *(double *)(lVar1 + 8);
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return 1e+30;
}

