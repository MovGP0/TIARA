/* Ghidra address: 008b1530 */
/* Ghidra symbol: FUN_008b1530 */


undefined8
FUN_008b1530(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,longlong param_4,
            longlong param_5)

{
  longlong lVar1;
  longlong lVar2;
  
  if (-1 < param_4) {
    FUN_004b6dc0(param_3,param_4);
  }
  lVar1 = (**(code **)*param_3)(param_3);
  lVar2 = FUN_004b6da0(param_3);
  lVar1 = lVar1 - lVar2;
  if (-1 < param_5) {
    lVar1 = FUN_008764e0(lVar1,param_5);
  }
  (**(code **)*param_1)(param_1,param_2,param_3,lVar1);
  return param_2;
}

