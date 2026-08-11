/* Ghidra address: 00f65340 */
/* Ghidra symbol: FUN_00f65340 */


void FUN_00f65340(longlong param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x92) == '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0xe0))
              (*(longlong **)(param_1 + 0x10),param_1 + 0xb0,1);
  }
  *(undefined8 *)(param_1 + 0xb0) = **(undefined8 **)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_2 + 0xa0);
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0xe0))
            (*(longlong **)(param_1 + 0x10),param_1 + 0xb0,1);
  *(undefined1 *)(param_2 + 0x92) = 0;
  return;
}

