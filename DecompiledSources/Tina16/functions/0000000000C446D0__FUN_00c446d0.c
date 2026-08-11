/* Ghidra address: 00c446d0 */
/* Ghidra symbol: FUN_00c446d0 */


double FUN_00c446d0(undefined8 *param_1)

{
  double dVar1;
  undefined8 local_28;
  undefined8 uStack_20;
  
  local_28 = *param_1;
  uStack_20 = param_1[1];
  dVar1 = (double)FUN_00c445d0(&local_28);
  if (dVar1 < 0.0) {
    dVar1 = dVar1 + 6.283185307179586;
  }
  return dVar1;
}

