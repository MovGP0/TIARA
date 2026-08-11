/* Ghidra address: 00dd9f30 */
/* Ghidra symbol: FUN_00dd9f30 */


undefined4 FUN_00dd9f30(longlong param_1)

{
  undefined4 local_c;
  
  local_c = 0;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x48) + 0x30))(*(longlong **)(param_1 + 0x48),&local_c);
  }
  return local_c;
}

