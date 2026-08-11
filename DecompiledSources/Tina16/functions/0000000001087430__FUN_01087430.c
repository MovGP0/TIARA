/* Ghidra address: 01087430 */
/* Ghidra symbol: FUN_01087430 */


void FUN_01087430(longlong param_1,char param_2)

{
  *(char *)(param_1 + 0x6c4) = param_2;
  if ((param_2 != '\0') && (*(longlong *)(param_1 + 0x4d20) != 0)) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x4d20) + 0x22c8) = 0;
  }
  return;
}

