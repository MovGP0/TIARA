/* Ghidra address: 0181a6a0 */
/* Ghidra symbol: FUN_0181a6a0 */


void FUN_0181a6a0(longlong param_1)

{
  FUN_007fdaa0(param_1);
  if ((*(char *)(param_1 + 0x6cd) == '\x02') ||
     ((*(char *)(param_1 + 0x6cd) == '\x01' && (*(char *)(param_1 + 0x6cb) == '\0')))) {
    FUN_0181b150(param_1,1);
  }
  return;
}

