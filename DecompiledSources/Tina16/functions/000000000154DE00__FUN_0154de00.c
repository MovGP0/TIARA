/* Ghidra address: 0154de00 */
/* Ghidra symbol: FUN_0154de00 */


void FUN_0154de00(longlong param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  (**(code **)(**(longlong **)(param_1 + 0x70) + 0x78))
            (*(longlong **)(param_1 + 0x70),local_res10[0]);
  FUN_00414480(local_res10);
  return;
}

