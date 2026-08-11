/* Ghidra address: 01c07a70 */
/* Ghidra symbol: FUN_01c07a70 */


void FUN_01c07a70(longlong param_1,longlong param_2)

{
  if ((*(longlong *)(param_2 + 0x10) != param_1) && (*(char *)(param_1 + 0x328) != '\0')) {
    FUN_01c07a10(param_1,0);
  }
  return;
}

