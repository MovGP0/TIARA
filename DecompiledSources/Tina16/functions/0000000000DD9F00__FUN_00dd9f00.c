/* Ghidra address: 00dd9f00 */
/* Ghidra symbol: FUN_00dd9f00 */


undefined4 FUN_00dd9f00(longlong param_1)

{
  undefined4 local_c;
  
  local_c = 0;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x48) + 0x38))(*(longlong **)(param_1 + 0x48),&local_c);
  }
  return local_c;
}

