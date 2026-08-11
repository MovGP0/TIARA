/* Ghidra address: 019a38e0 */
/* Ghidra symbol: FUN_019a38e0 */


void FUN_019a38e0(undefined8 param_1,longlong param_2)

{
  *(undefined1 *)(param_2 + 0x396) = 0;
  *(longlong *)(param_2 + 0x388) = param_2 + 0x398;
  do {
    FUN_00410f20(**(undefined8 **)(param_2 + 0x388));
    *(char *)(param_2 + 0x396) = *(char *)(param_2 + 0x396) + '\x01';
    *(longlong *)(param_2 + 0x388) = *(longlong *)(param_2 + 0x388) + 8;
  } while (*(char *)(param_2 + 0x396) != '\x04');
  return;
}

