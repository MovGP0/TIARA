/* Ghidra address: 008f4f40 */
/* Ghidra symbol: FUN_008f4f40 */


void FUN_008f4f40(longlong param_1,longlong param_2)

{
  if (*(int *)(param_1 + 0xa0) == 9) {
    *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 1;
    *(longlong *)(param_2 + 0x30) = *(longlong *)(param_2 + 0x30) + 1;
  }
  else if (*(int *)(param_1 + 0xa0) == 10) {
    *(longlong *)(param_2 + 0x20) = *(longlong *)(param_2 + 0x20) + 1;
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined8 *)(param_2 + 0x30) = 0;
  }
  else {
    *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 1;
  }
  return;
}

