/* Ghidra address: 00c11340 */
/* Ghidra symbol: FUN_00c11340 */


void FUN_00c11340(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x20) != param_2) {
    *(char *)(param_1 + 0x20) = param_2;
    if (*(longlong *)(param_1 + 0x18) != 0) {
      FUN_00bf37c0(*(longlong *)(param_1 + 0x18),*(undefined4 *)(param_1 + 8),
                   *(undefined4 *)(param_1 + 8));
    }
  }
  return;
}

