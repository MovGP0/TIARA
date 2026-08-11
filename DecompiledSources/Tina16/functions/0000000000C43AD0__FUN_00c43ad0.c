/* Ghidra address: 00c43ad0 */
/* Ghidra symbol: FUN_00c43ad0 */


void FUN_00c43ad0(double *param_1,double *param_2)

{
  double dVar1;
  undefined8 uVar2;
  double dVar3;
  
  dVar1 = *param_1;
  uVar2 = FUN_00c43c40(*param_2,0x401921fb54442d18);
  dVar3 = (double)FUN_0040bcd0(uVar2);
  *param_1 = dVar1 * dVar3;
  dVar3 = (double)FUN_0040bdd0(uVar2);
  *param_2 = dVar1 * dVar3;
  return;
}

