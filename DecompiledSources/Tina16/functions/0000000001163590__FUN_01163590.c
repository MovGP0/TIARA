/* Ghidra address: 01163590 */
/* Ghidra symbol: FUN_01163590 */


double FUN_01163590(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 local_68 [5];
  double *local_40;
  double *local_38;
  
  puVar2 = local_68;
  for (lVar1 = 10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *param_1;
    param_1 = param_1 + 1;
    puVar2 = puVar2 + 1;
  }
  return ((local_38[1] - *local_38) / (local_40[1] - *local_40)) / 1.2566370614359173e-06;
}

