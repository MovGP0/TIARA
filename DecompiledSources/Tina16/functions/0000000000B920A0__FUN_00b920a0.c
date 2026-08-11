/* Ghidra address: 00b920a0 */
/* Ghidra symbol: FUN_00b920a0 */


double FUN_00b920a0(undefined8 param_1,undefined1 *param_2,double param_3)

{
  double dVar1;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  dVar1 = (double)FUN_00b8f030(param_1);
  if (dVar1 != param_3) {
    *param_2 = 1;
  }
  return dVar1;
}

