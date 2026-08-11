/* Ghidra address: 01164140 */
/* Ghidra symbol: FUN_01164140 */


double FUN_01164140(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 local_e8 [6];
  double local_b8;
  double local_b0;
  double local_98;
  
  puVar2 = local_e8;
  for (lVar1 = 0x1a; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *param_1;
    param_1 = param_1 + 1;
    puVar2 = puVar2 + 1;
  }
  return ((local_b0 / (local_b0 + 1.0)) * local_98) / local_b8;
}

