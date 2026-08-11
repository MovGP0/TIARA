/* Ghidra address: 0130b680 */
/* Ghidra symbol: FUN_0130b680 */


double FUN_0130b680(longlong param_1)

{
  double *pdVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  
  dVar4 = *(double *)(*(longlong *)(param_1 + 0x198) + 8);
  iVar2 = FUN_01cc7250(*(undefined8 *)(param_1 + 400),*(undefined8 *)(param_1 + 0x228));
  iVar3 = 0;
  if (-1 < iVar2 + -1) {
    do {
      pdVar1 = (double *)(*(longlong *)(param_1 + 0x198) + 8 + (longlong)iVar3 * 0x18);
      if (*pdVar1 <= dVar4 && dVar4 != *pdVar1) {
        dVar4 = *(double *)(*(longlong *)(param_1 + 0x198) + 8 + (longlong)iVar3 * 0x18);
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return dVar4;
}

