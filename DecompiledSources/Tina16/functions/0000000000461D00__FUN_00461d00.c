/* Ghidra address: 00461d00 */
/* Ghidra symbol: FUN_00461d00 */


void FUN_00461d00(undefined8 param_1,undefined8 param_2,undefined2 param_3)

{
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined1 local_20 [24];
  
  local_30 = auStack_58;
  thunk_FUN_04125dff(local_20);
  FUN_00461840(local_20,param_2);
  (*(code *)PTR_FUN_02010970)(local_20);
  FUN_004620f0(param_1,local_20,param_3);
  FUN_00460b80(local_20);
  return;
}

