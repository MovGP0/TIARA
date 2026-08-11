/* Ghidra address: 00c44c20 */
/* Ghidra symbol: FUN_00c44c20 */


double * FUN_00c44c20(double *param_1,undefined8 *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined8 local_58;
  undefined8 uStack_50;
  
  local_58 = *param_2;
  uStack_50 = param_2[1];
  FUN_00c44590(&local_58);
  dVar1 = (double)FUN_0040c760();
  dVar2 = (double)FUN_00c445d0(&local_58);
  dVar3 = (double)FUN_0040bcd0(dVar2 * 0.5);
  *param_1 = dVar1 * dVar3;
  dVar2 = (double)FUN_0040bdd0(dVar2 * 0.5);
  param_1[1] = dVar1 * dVar2;
  return param_1;
}

