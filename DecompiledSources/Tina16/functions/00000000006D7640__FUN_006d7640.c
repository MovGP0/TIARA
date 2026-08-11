/* Ghidra address: 006d7640 */
/* Ghidra symbol: FUN_006d7640 */


void FUN_006d7640(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                 undefined8 param_5)

{
  longlong lVar1;
  undefined8 local_30 [2];
  
  local_30[0] = *param_4;
  lVar1 = FUN_006d7590(param_1,param_2);
  *(bool *)param_5 = lVar1 == 0;
  FUN_00659160(param_1,param_2,param_3,local_30,param_5);
  return;
}

