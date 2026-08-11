/* Ghidra address: 00462580 */
/* Ghidra symbol: FUN_00462580 */


undefined4 FUN_00462580(undefined8 param_1)

{
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined4 local_24;
  undefined1 local_20 [24];
  
  local_30 = auStack_58;
  thunk_FUN_04125dff(local_20);
  FUN_00461840(local_20,param_1);
  (*(code *)PTR_FUN_02010970)(local_20);
  local_24 = FUN_00462650(local_20);
  FUN_00460b80(local_20);
  return local_24;
}

