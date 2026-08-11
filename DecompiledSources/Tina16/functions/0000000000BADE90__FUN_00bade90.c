/* Ghidra address: 00bade90 */
/* Ghidra symbol: FUN_00bade90 */


void FUN_00bade90(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 local_res18 [2];
  undefined8 local_10;
  
  local_res18[0] = param_3;
  FUN_0041b910(param_3);
  local_10 = local_res18[0];
  FUN_00595380(*(longlong *)(param_1 + 0x18) + 8,&local_10,param_2);
  FUN_0041b800(local_res18);
  return;
}

