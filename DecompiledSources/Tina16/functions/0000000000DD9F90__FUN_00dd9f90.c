/* Ghidra address: 00dd9f90 */
/* Ghidra symbol: FUN_00dd9f90 */


bool FUN_00dd9f90(longlong param_1)

{
  bool bVar1;
  uint local_c;
  
  bVar1 = false;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x48) + 0x80))(*(longlong **)(param_1 + 0x48),&local_c);
    bVar1 = (local_c & 2) != 0;
  }
  return bVar1;
}

