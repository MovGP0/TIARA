/* Ghidra address: 01b81be0 */
/* Ghidra symbol: FUN_01b81be0 */


void FUN_01b81be0(longlong param_1,undefined8 param_2)

{
  if (*(char *)(param_1 + 0x3c1) == '\0') {
    *(undefined8 *)(PTR_DAT_02004010 + 0xe8) = param_2;
  }
  else {
    *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x57a) = param_2;
  }
  return;
}

