/* Ghidra address: 0161bb40 */
/* Ghidra symbol: FUN_0161bb40 */


void FUN_0161bb40(longlong param_1)

{
  if (*(char *)(param_1 + 0x18) == '\0') {
    FUN_01613110(0);
  }
  if (*(char *)(param_1 + 0x19) == '\0') {
    FUN_016353c0(*(undefined8 *)(param_1 + 0x20));
  }
  else {
    FUN_01647430(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x10));
  }
  return;
}

