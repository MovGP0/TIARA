/* Ghidra address: 00c44870 */
/* Ghidra symbol: FUN_00c44870 */


void FUN_00c44870(undefined8 *param_1,double *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  dVar3 = (double)FUN_0040af80(uVar1);
  FUN_00c43c40(uVar2,0x401921fb54442d18);
  dVar4 = (double)FUN_0040bcd0();
  *param_2 = dVar3 * dVar4;
  dVar3 = (double)FUN_0040af80(uVar1);
  FUN_00c43c40(uVar2,0x401921fb54442d18);
  dVar4 = (double)FUN_0040bdd0();
  param_2[1] = dVar3 * dVar4;
  return;
}

