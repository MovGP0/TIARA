/* Ghidra address: 0132d6e0 */
/* Ghidra symbol: FUN_0132d6e0 */


double FUN_0132d6e0(short *param_1)

{
  double dVar1;
  ushort uVar2;
  short sVar3;
  double dVar4;
  
  sVar3 = *param_1;
  dVar4 = **(double **)(param_1 + 4);
  uVar2 = 0;
  do {
    dVar1 = *(double *)
             (*(longlong *)(param_1 + 4) + (ulonglong)((uint)uVar2 * (uint)(ushort)param_1[1]) * 8);
    if (dVar4 < dVar1) {
      dVar4 = dVar1;
    }
    uVar2 = uVar2 + 1;
    sVar3 = sVar3 + -1;
  } while (sVar3 != 0);
  return dVar4;
}

