/* Ghidra address: 01236ee0 */
/* Ghidra symbol: FUN_01236ee0 */


double * FUN_01236ee0(double *param_1,undefined8 *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 local_48;
  undefined8 uStack_40;
  
  local_48 = *param_2;
  uStack_40 = param_2[1];
  FUN_01236bf0(&local_48);
  dVar1 = (double)FUN_0040c760();
  dVar2 = (double)FUN_01236ad0(&local_48);
  dVar2 = (double)FUN_0040bcd0(dVar2 / 2.0);
  FUN_01236bf0(&local_48);
  dVar3 = (double)FUN_0040c760();
  dVar4 = (double)FUN_01236ad0(&local_48);
  dVar4 = (double)FUN_0040bdd0(dVar4 / 2.0);
  *param_1 = dVar1 * dVar2;
  param_1[1] = dVar3 * dVar4;
  return param_1;
}

