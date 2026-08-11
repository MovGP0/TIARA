/* Ghidra address: 00463e90 */
/* Ghidra symbol: FUN_00463e90 */


undefined1 FUN_00463e90(undefined8 param_1)

{
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined1 local_21;
  undefined1 local_20 [24];
  
  local_30 = auStack_58;
  thunk_FUN_04125dff(local_20);
  FUN_00461840(local_20,param_1);
  (*(code *)PTR_FUN_02010970)(local_20);
  local_21 = FUN_00463f70(local_20);
  FUN_00460b80(local_20);
  return local_21;
}

