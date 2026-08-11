/* Ghidra address: 00f767f0 */
/* Ghidra symbol: FUN_00f767f0 */


void FUN_00f767f0(longlong param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x78))
            (*(longlong **)(param_1 + 0x10),local_res10[0]);
  FUN_00414480(local_res10);
  return;
}

