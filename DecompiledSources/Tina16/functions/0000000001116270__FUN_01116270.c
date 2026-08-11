/* Ghidra address: 01116270 */
/* Ghidra symbol: FUN_01116270 */


void FUN_01116270(undefined1 *param_1,char param_2)

{
  if (param_2 == '\0') {
    *param_1 = 0;
    *(undefined2 *)(param_1 + 0x53) = 0x7801;
  }
  else if (param_2 == '\x03') {
    *param_1 = 0;
    *(undefined2 *)(param_1 + 0x53) = 0x7401;
  }
  else if (param_2 == '\x04') {
    *param_1 = 2;
    *(undefined2 *)(param_1 + 0x53) = 0x7301;
  }
  else if (param_2 == '\a') {
    *param_1 = 4;
    *(undefined2 *)(param_1 + 0x53) = 0x7301;
  }
  return;
}

