/* Ghidra address: 0132dd50 */
/* Ghidra symbol: FUN_0132dd50 */


double FUN_0132dd50(ushort *param_1)

{
  double dVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  double dVar5;
  
  uVar2 = *param_1;
  dVar5 = 0.0;
  uVar3 = 0;
  uVar4 = uVar2;
  do {
    dVar1 = *(double *)
             (*(longlong *)(param_1 + 4) + (ulonglong)((uint)uVar3 * (uint)param_1[1]) * 8);
    dVar5 = dVar5 + dVar1 * dVar1;
    uVar3 = uVar3 + 1;
    uVar4 = uVar4 - 1;
  } while (uVar4 != 0);
  dVar5 = (double)FUN_0040c760(dVar5);
  return dVar5 / (double)uVar2;
}

