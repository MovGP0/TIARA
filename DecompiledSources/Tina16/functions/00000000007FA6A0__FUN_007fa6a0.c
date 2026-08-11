/* Ghidra address: 007fa6a0 */
/* Ghidra symbol: FUN_007fa6a0 */


void FUN_007fa6a0(longlong param_1,char param_2)

{
  if ((*(char *)(param_1 + 0x34) != param_2) &&
     (*(char *)(param_1 + 0x34) = param_2, param_2 != '\0')) {
    FUN_007fa670(param_1,0xff000014);
  }
  return;
}

