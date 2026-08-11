/* Ghidra address: 00b506e0 */
/* Ghidra symbol: FUN_00b506e0 */


void FUN_00b506e0(longlong param_1)

{
  if (*(byte *)(param_1 + 0x28) < 7) {
    *(char *)(param_1 + 0x28) = *(char *)(param_1 + 0x28) + '\x01';
    *(undefined1 *)(param_1 + 0x40) = 1;
    (**(code **)**(undefined8 **)(param_1 + 0x10))(*(undefined8 **)(param_1 + 0x10),param_1);
  }
  return;
}

