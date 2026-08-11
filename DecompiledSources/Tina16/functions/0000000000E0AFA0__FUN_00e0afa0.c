/* Ghidra address: 00e0afa0 */
/* Ghidra symbol: FUN_00e0afa0 */


void FUN_00e0afa0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x9f) == '\0') {
    FUN_00410f20(**(undefined8 **)(param_2 + 0xd0));
    **(undefined8 **)(param_2 + 0xd0) = 0;
  }
  if (*(longlong *)(param_2 + 0x90) != 0) {
    FUN_00e08170(*(undefined8 *)(*(longlong *)(*(longlong *)(param_2 + 0x90) + 0x10) + 8));
  }
  if (*(longlong *)(param_2 + 0x90) != 0) {
    FUN_00410f20(*(undefined8 *)(param_2 + 0x90));
  }
  return;
}

