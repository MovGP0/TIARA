/* Ghidra address: 00cd1d10 */
/* Ghidra symbol: FUN_00cd1d10 */


undefined4 FUN_00cd1d10(longlong param_1)

{
  undefined4 local_c;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    FUN_0040d200(&local_c,4,0);
  }
  else {
    local_c = (**(code **)PTR_DAT_02003b60)(*(longlong *)(param_1 + 8));
  }
  return local_c;
}

