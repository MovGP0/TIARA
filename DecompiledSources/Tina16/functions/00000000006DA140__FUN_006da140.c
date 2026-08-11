/* Ghidra address: 006da140 */
/* Ghidra symbol: FUN_006da140 */


void FUN_006da140(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x2d) != param_2) {
    *(char *)(param_1 + 0x2d) = param_2;
    FUN_004b1830(param_1,0);
  }
  return;
}

