/* Ghidra address: 00466420 */
/* Ghidra symbol: FUN_00466420 */


void FUN_00466420(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined1 local_20 [24];
  
  local_30 = auStack_58;
  thunk_FUN_04125dff(local_20);
  FUN_00461840(local_20,param_3);
  (*(code *)PTR_FUN_02010970)(local_20);
  FUN_00466730(param_2,local_20,*(undefined2 *)(param_1 + 0x60));
  FUN_00460b80(local_20);
  return;
}

