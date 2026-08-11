/* Ghidra address: 004b7b60 */
/* Ghidra symbol: FUN_004b7b60 */


longlong FUN_004b7b60(longlong *param_1,undefined1 param_2)

{
  int iVar1;
  undefined1 local_res10 [24];
  
  local_res10[0] = param_2;
  iVar1 = (**(code **)(*param_1 + 0x20))(param_1,local_res10,1);
  return (longlong)iVar1;
}

