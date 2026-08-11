/* Ghidra address: 015e4350 */
/* Ghidra symbol: FUN_015e4350 */


undefined4 FUN_015e4350(longlong param_1)

{
  undefined4 local_c;
  
  if (*(short *)(param_1 + 0x1c0) == 1) {
    local_c = 0;
  }
  else {
    local_c = *(undefined4 *)(param_1 + 0x1c4);
  }
  return local_c;
}

