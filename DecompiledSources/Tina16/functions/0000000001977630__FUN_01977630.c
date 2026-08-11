/* Ghidra address: 01977630 */
/* Ghidra symbol: FUN_01977630 */


void FUN_01977630(longlong param_1,char param_2)

{
  *(char *)(param_1 + 0x288) = param_2;
  if (param_2 != '\0') {
    FUN_0184ee00(*(undefined8 *)(param_1 + 0x248));
  }
  return;
}

