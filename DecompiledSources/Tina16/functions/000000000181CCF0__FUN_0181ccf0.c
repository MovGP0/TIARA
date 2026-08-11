/* Ghidra address: 0181ccf0 */
/* Ghidra symbol: FUN_0181ccf0 */


void FUN_0181ccf0(longlong param_1,undefined4 param_2)

{
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6e8),param_2);
  *(char *)(param_1 + 0x710) = (char)param_2;
  if ((char)param_2 == '\0') {
    FUN_0064cb90(*(undefined8 *)(param_1 + 0x6e0),0x23);
  }
  else {
    FUN_0064cb90(*(undefined8 *)(param_1 + 0x6e0),0xf);
  }
  return;
}

