/* Ghidra address: 00a0b820 */
/* Ghidra symbol: FUN_00a0b820 */


void FUN_00a0b820(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)*param_2)(param_2);
  iVar2 = FUN_004b6da0(param_2);
  FUN_00a0b910(param_1,iVar1 - iVar2,param_2);
  return;
}

