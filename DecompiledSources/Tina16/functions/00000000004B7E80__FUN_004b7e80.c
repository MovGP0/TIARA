/* Ghidra address: 004b7e80 */
/* Ghidra symbol: FUN_004b7e80 */


longlong FUN_004b7e80(longlong *param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 local_res10 [12];
  
  local_res10[0] = param_2;
  iVar1 = (**(code **)(*param_1 + 0x20))(param_1,local_res10,2);
  return (longlong)iVar1;
}

