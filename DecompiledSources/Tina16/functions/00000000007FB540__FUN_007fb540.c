/* Ghidra address: 007fb540 */
/* Ghidra symbol: FUN_007fb540 */


void FUN_007fb540(longlong param_1,int param_2,int param_3)

{
  if (param_2 != param_3) {
    if ((*(ushort *)(param_1 + 0x34) & 1) == 0) {
      *(undefined1 *)(*(longlong *)(param_1 + 0x498) + 0x26) = 1;
      *(undefined1 *)(*(longlong *)(param_1 + 0x4b0) + 0x26) = 1;
    }
    if (*(char *)(param_1 + 0x494) == '\0') {
      FUN_007fa1a0(*(undefined8 *)(param_1 + 0x498),param_2,param_3);
      FUN_007fa1a0(*(undefined8 *)(param_1 + 0x4b0),param_2,param_3);
    }
  }
  *(undefined1 *)(*(longlong *)(param_1 + 0x498) + 0x26) = 0;
  *(undefined1 *)(*(longlong *)(param_1 + 0x4b0) + 0x26) = 0;
  return;
}

