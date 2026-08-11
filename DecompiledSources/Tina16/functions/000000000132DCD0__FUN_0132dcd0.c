/* Ghidra address: 0132dcd0 */
/* Ghidra symbol: FUN_0132dcd0 */


double FUN_0132dcd0(ushort *param_1)

{
  ushort uVar1;
  ushort uVar2;
  double dVar3;
  
  dVar3 = 0.0;
  uVar1 = 0;
  uVar2 = *param_1;
  do {
    dVar3 = dVar3 + *(double *)
                     (*(longlong *)(param_1 + 4) + (ulonglong)((uint)uVar1 * (uint)param_1[1]) * 8);
    uVar1 = uVar1 + 1;
    uVar2 = uVar2 - 1;
  } while (uVar2 != 0);
  return dVar3 / (double)*param_1;
}

