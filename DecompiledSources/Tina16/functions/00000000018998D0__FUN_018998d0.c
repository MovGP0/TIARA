/* Ghidra address: 018998d0 */
/* Ghidra symbol: FUN_018998d0 */


void FUN_018998d0(longlong param_1,char param_2)

{
  *(char *)(param_1 + 0x4e1) = param_2;
  if (param_2 == '\0') {
    FUN_0064c650(*(undefined8 *)(param_1 + 0x4b8),1);
  }
  else if (param_2 == '\x01') {
    FUN_0064c650(*(undefined8 *)(param_1 + 0x4b8),2);
  }
  return;
}

