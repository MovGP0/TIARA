/* Ghidra address: 00467020 */
/* Ghidra symbol: FUN_00467020 */


void FUN_00467020(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined1 local_20 [24];
  
  local_30 = auStack_58;
  thunk_FUN_04125dff(local_20);
  FUN_00461840(local_20,param_3);
  (*(code *)PTR_FUN_02010970)(local_20);
  FUN_00467310(param_2,local_20);
  FUN_00460b80(local_20);
  return;
}

