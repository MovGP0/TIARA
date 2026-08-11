/* Ghidra address: 004b8060 */
/* Ghidra symbol: FUN_004b8060 */


longlong FUN_004b8060(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  iVar1 = (**(code **)(*param_1 + 0x20))(param_1,local_res10,8);
  return (longlong)iVar1;
}

