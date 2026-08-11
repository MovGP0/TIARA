/* Ghidra address: 007fb740 */
/* Ghidra symbol: FUN_007fb740 */


void FUN_007fb740(longlong param_1,longlong param_2)

{
  if ((*(longlong *)(param_2 + 0x10) == 0) &&
     (*(char *)(*(longlong *)(param_1 + 0x498) + 0x24) != '\0')) {
    FUN_007fa260(*(undefined8 *)(param_1 + 0x498));
  }
  else {
    FUN_006582e0();
  }
  return;
}

