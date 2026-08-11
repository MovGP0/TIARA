/* Ghidra address: 0055bbd0 */
/* Ghidra symbol: FUN_0055bbd0 */


void FUN_0055bbd0(undefined8 param_1,longlong param_2)

{
  FUN_0055ad40(*(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x20),*(undefined8 *)(param_2 + 0x88)
               ,*(undefined8 *)(param_2 + 0x50),param_2 + 0x30);
  if (*(char *)(*(longlong *)(*(longlong *)(param_2 + 0x80) + 0x20) + 0x38) == '\x04') {
    *(longlong *)(*(longlong *)(param_2 + 0x88) + 0x30) = (longlong)*(int *)(param_2 + 0x5c);
  }
  return;
}

