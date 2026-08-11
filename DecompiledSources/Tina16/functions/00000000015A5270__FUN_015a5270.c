/* Ghidra address: 015a5270 */
/* Ghidra symbol: FUN_015a5270 */


undefined8 FUN_015a5270(longlong param_1)

{
  undefined8 uVar1;
  int local_18;
  uint local_14;
  
  local_14 = 0xf3ffc07f;
  local_18 = 0;
  while( true ) {
    if (0x1f < local_18) {
      if (((*(short *)(param_1 + 0xd1) == 0) && (*(short *)(param_1 + 0xd5) == 0)) &&
         (*(short *)(param_1 + 0xe1) == 0)) {
        for (local_18 = 0x20; local_18 < 0x100; local_18 = local_18 + 1) {
          if (*(short *)(param_1 + 0xad + (longlong)local_18 * 4) != 0) {
            return 1;
          }
        }
        uVar1 = 0;
      }
      else {
        uVar1 = 1;
      }
      return uVar1;
    }
    if (((local_14 & 1) != 0) && (*(short *)(param_1 + 0xad + (longlong)local_18 * 4) != 0)) break;
    local_18 = local_18 + 1;
    local_14 = local_14 >> 1;
  }
  return 0;
}

