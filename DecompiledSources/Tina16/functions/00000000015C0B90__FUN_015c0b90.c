/* Ghidra address: 015c0b90 */
/* Ghidra symbol: FUN_015c0b90 */


undefined1 FUN_015c0b90(byte param_1)

{
  undefined1 local_9;
  
  local_9 = 0;
  if (param_1 == 0) {
    local_9 = 0;
  }
  else if (param_1 < 4) {
    local_9 = 1;
  }
  else if (param_1 < 7) {
    local_9 = 2;
  }
  else if (param_1 < 10) {
    local_9 = 3;
  }
  return local_9;
}

