/* Ghidra address: 006d8430 */
/* Ghidra symbol: FUN_006d8430 */


void FUN_006d8430(longlong param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x26)) {
    *(char *)(param_1 + 0x26) = param_2;
    *(undefined1 *)(param_1 + 0x27) = 0;
    FUN_004b1830(param_1,0);
  }
  return;
}

