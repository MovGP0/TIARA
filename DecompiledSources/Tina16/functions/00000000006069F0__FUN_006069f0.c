/* Ghidra address: 006069f0 */
/* Ghidra symbol: FUN_006069f0 */


void FUN_006069f0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x48) != 0) {
    if (*(char *)(param_1 + 0x50) == '\0') {
      FUN_00606f90();
    }
    else {
      FUN_00606ee0();
    }
  }
  return;
}

