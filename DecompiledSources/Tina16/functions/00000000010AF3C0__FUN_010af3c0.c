/* Ghidra address: 010af3c0 */
/* Ghidra symbol: FUN_010af3c0 */


void FUN_010af3c0(longlong param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0xd8))
            (*(longlong **)(param_1 + 0x20),local_res10[0]);
  FUN_00414480(local_res10);
  return;
}

