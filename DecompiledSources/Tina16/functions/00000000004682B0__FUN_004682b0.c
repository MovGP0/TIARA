/* Ghidra address: 004682b0 */
/* Ghidra symbol: FUN_004682b0 */


void FUN_004682b0(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  short local_20 [4];
  undefined8 local_18;
  
  local_30 = auStack_58;
  thunk_FUN_04125dff(local_20);
  FUN_00461840(local_20,param_2);
  (*(code *)PTR_FUN_02010970)(local_20);
  if (local_20[0] != 0xd) {
    FUN_00460110(0x101,0xd);
  }
  FUN_0041b840(param_1,local_18);
  FUN_00460b80(local_20);
  return;
}

