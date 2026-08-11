/* Ghidra address: 0080dd80 */
/* Ghidra symbol: FUN_0080dd80 */


void FUN_0080dd80(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0xd4) != param_2) {
    *(int *)(param_1 + 0xd4) = param_2;
    if (*(longlong *)(param_1 + 0x100) != 0) {
      FUN_0064e030(*(longlong *)(param_1 + 0x100));
    }
  }
  return;
}

