/* Ghidra address: 0196a170 */
/* Ghidra symbol: FUN_0196a170 */


void FUN_0196a170(longlong param_1,double param_2)

{
  undefined4 uVar1;
  float fVar2;
  
  fVar2 = (float)FUN_0196a360(param_1);
  uVar1 = FUN_0040c770(param_2 * (double)fVar2);
  FUN_007fdf10(*(undefined8 *)(param_1 + 0x180),uVar1);
  *(double *)(param_1 + 0x1e8) = param_2;
  fVar2 = (float)FUN_0196a360(param_1);
  FUN_01950d30(param_1,(double)*(int *)(*(longlong *)(param_1 + 0x180) + 0x9c) / (double)fVar2);
  return;
}

