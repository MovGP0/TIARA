/* Ghidra address: 01899660 */
/* Ghidra symbol: FUN_01899660 */


void FUN_01899660(longlong param_1,char param_2)

{
  *(char *)(param_1 + 0x4e0) = param_2;
  if (param_2 != '\0') {
    if (param_2 == '\x01') {
      FUN_0064c650(*(undefined8 *)(param_1 + 0x4c0),4);
      return;
    }
    if (param_2 != '\x02') {
      return;
    }
  }
  FUN_0064c650(*(undefined8 *)(param_1 + 0x4c0),3);
  return;
}

