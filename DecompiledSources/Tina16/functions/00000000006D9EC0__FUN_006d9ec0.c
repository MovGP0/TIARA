/* Ghidra address: 006d9ec0 */
/* Ghidra symbol: FUN_006d9ec0 */


void FUN_006d9ec0(longlong param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x34)) {
    *(char *)(param_1 + 0x34) = param_2;
    *(undefined1 *)(param_1 + 0x35) = 0;
    FUN_004b1830(param_1,0);
  }
  return;
}

