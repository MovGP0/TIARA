/* Ghidra address: 00b50760 */
/* Ghidra symbol: FUN_00b50760 */


void FUN_00b50760(longlong param_1,char param_2)

{
  if (param_2 != '\0') {
    *(char *)(param_1 + 0x3c) = param_2;
    *(undefined1 *)(param_1 + 0x40) = 1;
    (**(code **)**(undefined8 **)(param_1 + 0x10))(*(undefined8 **)(param_1 + 0x10),param_1);
  }
  return;
}

