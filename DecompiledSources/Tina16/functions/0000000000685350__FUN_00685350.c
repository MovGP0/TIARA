/* Ghidra address: 00685350 */
/* Ghidra symbol: FUN_00685350 */


void FUN_00685350(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  (**(code **)(**(longlong **)(param_1 + 0x4f0) + 0x80))
            (*(longlong **)(param_1 + 0x4f0),local_res10[0],param_3);
  FUN_00414480(local_res10);
  return;
}

