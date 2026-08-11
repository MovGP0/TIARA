/* Ghidra address: 004b81a0 */
/* Ghidra symbol: FUN_004b81a0 */


longlong FUN_004b81a0(longlong *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_res10 [6];
  
  local_res10[0] = param_2;
  iVar1 = (**(code **)(*param_1 + 0x20))(param_1,local_res10,4);
  return (longlong)iVar1;
}

