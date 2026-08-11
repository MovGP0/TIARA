/* Ghidra address: 00b50720 */
/* Ghidra symbol: FUN_00b50720 */


void FUN_00b50720(longlong param_1)

{
  if (*(char *)(param_1 + 0x28) != '\0') {
    *(char *)(param_1 + 0x28) = *(char *)(param_1 + 0x28) + -1;
    *(undefined1 *)(param_1 + 0x40) = 1;
    (**(code **)**(undefined8 **)(param_1 + 0x10))(*(undefined8 **)(param_1 + 0x10),param_1);
  }
  return;
}

