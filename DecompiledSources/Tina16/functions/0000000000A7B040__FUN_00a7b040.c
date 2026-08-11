/* Ghidra address: 00a7b040 */
/* Ghidra symbol: FUN_00a7b040 */


void FUN_00a7b040(longlong param_1,char param_2)

{
  *(char *)(param_1 + 0xc0) = param_2;
  if (param_2 == '\0') {
    *(undefined8 *)(param_1 + 200) = 0x3ff0000000000000;
  }
  else if (param_2 == '\x01') {
    *(undefined8 *)(param_1 + 200) = 0x400451eb851eb852;
  }
  return;
}

