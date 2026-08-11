/* Ghidra address: 004ba9c0 */
/* Ghidra symbol: FUN_004ba9c0 */


undefined8 FUN_004ba9c0(undefined8 *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = (**(code **)*param_1)(param_1);
  lVar4 = FUN_004b6da0(param_1);
  if (lVar3 - lVar4 < (longlong)param_3) {
    param_3 = (**(code **)*param_1)(param_1);
    iVar1 = FUN_004b6da0(param_1);
    param_3 = param_3 - iVar1;
  }
  uVar2 = FUN_004b6da0(param_1);
  FUN_0045aba0(param_1[6],param_2,param_1[5],uVar2,param_3);
  lVar3 = FUN_004b6da0(param_1);
  FUN_004b6dc0(param_1,lVar3 + param_3);
  return param_2;
}

