/* Ghidra address: 00bf2b30 */
/* Ghidra symbol: FUN_00bf2b30 */


undefined8 FUN_00bf2b30(longlong param_1)

{
  undefined8 local_10;
  
  if ((*(int *)(param_1 + 0x4c0) < *(int *)(param_1 + 0x4b8)) ||
     ((*(int *)(param_1 + 0x4c0) == *(int *)(param_1 + 0x4b8) &&
      (*(int *)(param_1 + 0x4bc) < *(int *)(param_1 + 0x4b4))))) {
    local_10 = *(undefined8 *)(param_1 + 0x4bc);
  }
  else {
    local_10 = *(undefined8 *)(param_1 + 0x4b4);
  }
  return local_10;
}

