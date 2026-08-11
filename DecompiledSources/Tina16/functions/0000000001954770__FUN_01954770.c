/* Ghidra address: 01954770 */
/* Ghidra symbol: FUN_01954770 */


undefined8 FUN_01954770(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  
  uVar1 = FUN_019508b0(param_1);
  uVar2 = FUN_01950860(param_1);
  dVar3 = (double)FUN_019508b0(param_1);
  dVar4 = (double)FUN_01950860(param_1);
  FUN_0180d9d0(param_2,uVar1,uVar2,dVar3 + *(double *)(param_1 + 0xa8),
               dVar4 + *(double *)(param_1 + 0xb0));
  return param_2;
}

