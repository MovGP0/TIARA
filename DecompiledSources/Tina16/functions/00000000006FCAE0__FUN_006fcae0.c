/* Ghidra address: 006fcae0 */
/* Ghidra symbol: FUN_006fcae0 */


void FUN_006fcae0(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x4e4) != param_2) {
    *(char *)(param_1 + 0x4e4) = param_2;
    FUN_00655b90(param_1);
  }
  *(undefined1 *)(param_1 + 0x4e5) = 1;
  return;
}

