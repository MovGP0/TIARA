/* Ghidra address: 00de0540 */
/* Ghidra symbol: FUN_00de0540 */


void FUN_00de0540(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined2 local_20 [4];
  undefined8 local_18;
  
  local_30 = auStack_58;
  local_20[0] = 8;
  local_18 = FUN_00418700(param_3);
  FUN_00de0420(param_1,param_2,local_20);
  thunk_FUN_041b9bbd(local_18);
  return;
}

