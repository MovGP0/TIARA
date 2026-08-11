/* Ghidra address: 00418820 */
/* Ghidra symbol: FUN_00418820 */


undefined8 FUN_00418820(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = param_2;
  if (param_2 < 0) {
    lVar1 = -param_2;
  }
  FUN_00418760(param_1,lVar1,param_3,param_2 < 0);
  return param_1;
}

