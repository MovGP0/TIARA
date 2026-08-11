/* Ghidra address: 018d43e0 */
/* Ghidra symbol: FUN_018d43e0 */


void FUN_018d43e0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_res10;
  undefined8 local_res18;
  
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  (**(code **)(**(longlong **)(param_1 + 0x208) + 0x78))
            (*(longlong **)(param_1 + 0x208),local_res10);
  (**(code **)(**(longlong **)(param_1 + 0x200) + 0x78))
            (*(longlong **)(param_1 + 0x200),local_res18);
  FUN_00414560(&local_res10,2);
  return;
}

