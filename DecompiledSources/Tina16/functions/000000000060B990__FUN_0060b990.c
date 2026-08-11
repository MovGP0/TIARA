/* Ghidra address: 0060b990 */
/* Ghidra symbol: FUN_0060b990 */


void FUN_0060b990(longlong param_1,longlong param_2)

{
  if (*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x18) != param_2) {
    *(longlong *)(*(longlong *)(param_1 + 0x60) + 0x18) = param_2;
    *(undefined1 *)(param_1 + 0x52) = 1;
    *(undefined1 *)(param_1 + 0x51) = 1;
  }
  return;
}

