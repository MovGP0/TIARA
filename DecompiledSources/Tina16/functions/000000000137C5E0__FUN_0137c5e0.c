/* Ghidra address: 0137c5e0 */
/* Ghidra symbol: FUN_0137c5e0 */


void FUN_0137c5e0(longlong *param_1,undefined4 param_2,undefined1 param_3)

{
  undefined4 local_res10 [2];
  undefined1 local_res18 [16];
  
  local_res10[0] = param_2;
  local_res18[0] = param_3;
  (**(code **)(*param_1 + 0x130))(param_1,local_res10,local_res18,1);
  *(undefined4 *)(param_1 + 0x18) = local_res10[0];
  *(undefined1 *)((longlong)param_1 + 0xcc) = local_res18[0];
  return;
}

