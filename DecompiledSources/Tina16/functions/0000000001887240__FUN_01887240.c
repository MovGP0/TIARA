/* Ghidra address: 01887240 */
/* Ghidra symbol: FUN_01887240 */


void FUN_01887240(undefined8 param_1,longlong param_2)

{
  if (*(char *)(*(longlong *)(param_2 + 0x70) + 0x28) == '\0') {
    *(undefined4 *)(*(longlong *)(param_2 + 0x40) + 0x28) = 0;
  }
  else {
    *(undefined4 *)(*(longlong *)(param_2 + 0x40) + 0x18) = 0;
  }
  return;
}

