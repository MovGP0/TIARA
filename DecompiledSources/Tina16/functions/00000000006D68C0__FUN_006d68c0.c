/* Ghidra address: 006d68c0 */
/* Ghidra symbol: FUN_006d68c0 */


void FUN_006d68c0(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x4a0) != param_2) {
    *(char *)(param_1 + 0x4a0) = param_2;
    FUN_006d6950();
  }
  return;
}

