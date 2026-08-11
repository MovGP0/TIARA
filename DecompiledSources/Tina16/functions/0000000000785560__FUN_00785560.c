/* Ghidra address: 00785560 */
/* Ghidra symbol: FUN_00785560 */


byte FUN_00785560(uint param_1)

{
  undefined1 local_9;
  
  local_9 = 0;
  if ((param_1 & 1) == 1) {
    local_9 = 4;
  }
  if ((param_1 & 2) == 2) {
    local_9 = local_9 | 8;
  }
  if ((param_1 & 4) == 4) {
    local_9 = local_9 | 1;
  }
  if ((param_1 & 8) == 8) {
    local_9 = local_9 | 2;
  }
  if ((param_1 & 5) == 5) {
    local_9 = local_9 | 0x40;
  }
  if ((param_1 & 10) == 10) {
    local_9 = local_9 | 0x80;
  }
  if ((param_1 & 6) == 6) {
    local_9 = local_9 | 0x20;
  }
  if ((param_1 & 9) == 9) {
    local_9 = local_9 | 0x10;
  }
  return local_9;
}

