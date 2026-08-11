/* Ghidra address: 0155c910 */
/* Ghidra symbol: FUN_0155c910 */


void FUN_0155c910(longlong param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  (**(code **)(**(longlong **)(param_1 + 0x918) + 0x78))
            (*(longlong **)(param_1 + 0x918),local_res10[0]);
  FUN_00414480(local_res10);
  return;
}

