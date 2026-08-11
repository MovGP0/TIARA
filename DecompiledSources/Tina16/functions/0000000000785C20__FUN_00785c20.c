/* Ghidra address: 00785c20 */
/* Ghidra symbol: FUN_00785c20 */


void FUN_00785c20(longlong param_1)

{
  if (*(char *)(param_1 + 0x18) == '\0') {
    *(undefined1 *)(param_1 + 0x18) = 1;
    (**(code **)(*(longlong *)(param_1 + 0x10) + 0x80))
              (*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x88));
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  else {
    (**(code **)(*(longlong *)(param_1 + 0x10) + 0x80))
              (*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x88));
  }
  return;
}

