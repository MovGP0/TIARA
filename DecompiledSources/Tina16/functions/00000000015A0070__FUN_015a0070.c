/* Ghidra address: 015a0070 */
/* Ghidra symbol: FUN_015a0070 */


undefined4 FUN_015a0070(longlong param_1)

{
  undefined4 local_18;
  
  if ((param_1 == 0) || (*(longlong *)(param_1 + 0x28) == 0)) {
    local_18 = 0xfffffffe;
  }
  else if ((**(int **)(param_1 + 0x28) == 0xd) && ((*(int **)(param_1 + 0x28))[0x11] == 0)) {
    local_18 = 1;
  }
  else {
    local_18 = 0;
  }
  return local_18;
}

