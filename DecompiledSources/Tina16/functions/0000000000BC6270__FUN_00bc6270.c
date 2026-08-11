/* Ghidra address: 00bc6270 */
/* Ghidra symbol: FUN_00bc6270 */


void FUN_00bc6270(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x4f) == '\0') {
    FUN_00bc5ca0(*(undefined8 *)(param_2 + 0x70));
  }
  *(undefined8 *)(*(longlong *)(param_2 + 0x70) + 0x170) = 0;
  *(undefined1 *)(*(longlong *)(param_2 + 0x70) + 0x178) = *(undefined1 *)(param_2 + 0x4f);
  return;
}

