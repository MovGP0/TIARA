/* Ghidra address: 00c41560 */
/* Ghidra symbol: FUN_00c41560 */


void FUN_00c41560(undefined8 param_1,longlong param_2)

{
  *(undefined1 *)(param_2 + 0xbf) = 0;
  *(longlong *)(param_2 + 0xb0) = param_2 + 0x90;
  do {
    FUN_00410f20(**(undefined8 **)(param_2 + 0xb0));
    *(char *)(param_2 + 0xbf) = *(char *)(param_2 + 0xbf) + '\x01';
    *(longlong *)(param_2 + 0xb0) = *(longlong *)(param_2 + 0xb0) + 8;
  } while (*(char *)(param_2 + 0xbf) != '\x04');
  return;
}

