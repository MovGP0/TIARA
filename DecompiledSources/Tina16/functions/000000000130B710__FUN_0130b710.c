/* Ghidra address: 0130b710 */
/* Ghidra symbol: FUN_0130b710 */


double FUN_0130b710(longlong param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  double dVar3;
  
  dVar3 = *(double *)(*(longlong *)(param_1 + 0x198) + 8);
  iVar1 = FUN_01cc7250(*(undefined8 *)(param_1 + 400),*(undefined8 *)(param_1 + 0x228));
  iVar2 = 0;
  if (-1 < iVar1 + -1) {
    do {
      if (dVar3 < *(double *)(*(longlong *)(param_1 + 0x198) + 8 + (longlong)iVar2 * 0x18)) {
        dVar3 = *(double *)(*(longlong *)(param_1 + 0x198) + 8 + (longlong)iVar2 * 0x18);
        *param_2 = iVar2;
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return dVar3;
}

