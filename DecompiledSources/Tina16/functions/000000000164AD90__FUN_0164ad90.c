/* Ghidra address: 0164ad90 */
/* Ghidra symbol: FUN_0164ad90 */


void FUN_0164ad90(longlong param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  (**(code **)(**(longlong **)(param_1 + 0x6c8) + 0x78))
            (*(longlong **)(param_1 + 0x6c8),local_res10[0]);
  FUN_00414480(local_res10);
  return;
}

