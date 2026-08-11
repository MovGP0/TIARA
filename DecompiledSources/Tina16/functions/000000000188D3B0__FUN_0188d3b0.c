/* Ghidra address: 0188d3b0 */
/* Ghidra symbol: FUN_0188d3b0 */


void FUN_0188d3b0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_res10;
  undefined8 local_res18;
  
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  uVar1 = FUN_0188b5c0(&LAB_0188a6d8,1,local_res10,local_res18);
  (**(code **)(**(longlong **)(param_1 + 200) + 0x80))
            (*(longlong **)(param_1 + 200),local_res10,uVar1);
  FUN_00414560(&local_res10,2);
  return;
}

