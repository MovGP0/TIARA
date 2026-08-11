/* Ghidra address: 015c0b40 */
/* Ghidra symbol: FUN_015c0b40 */


undefined4 FUN_015c0b40(byte param_1)

{
  undefined4 local_c;
  
  local_c = 0x100000;
  if (param_1 != 0) {
    if (param_1 < 4) {
      local_c = 0x80000;
    }
    else if (param_1 < 7) {
      local_c = 0x100000;
    }
    else if (param_1 < 10) {
      local_c = 0x180000;
    }
  }
  return local_c;
}

