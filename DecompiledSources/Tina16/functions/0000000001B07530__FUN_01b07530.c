/* Ghidra address: 01b07530 */
/* Ghidra symbol: FUN_01b07530 */


void FUN_01b07530(longlong param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  (**(code **)(**(longlong **)(param_1 + 0x1328) + 0x78))
            (*(longlong **)(param_1 + 0x1328),local_res10[0]);
  FUN_00414480(local_res10);
  return;
}

