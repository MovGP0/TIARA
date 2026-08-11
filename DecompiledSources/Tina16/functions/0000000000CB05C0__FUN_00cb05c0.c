/* Ghidra address: 00cb05c0 */
/* Ghidra symbol: FUN_00cb05c0 */


void FUN_00cb05c0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_res18 [2];
  undefined1 local_1c [12];
  
  local_res18[0] = param_3;
  FUN_0041b910(param_3);
  (**(code **)(*param_1 + 0xb0))(param_1,param_2,local_1c,&LAB_00cb0658,1,local_res18[0]);
  FUN_0041b800(local_res18);
  return;
}

