/* Ghidra address: 00a02a60 */
/* Ghidra symbol: FUN_00a02a60 */


void FUN_00a02a60(longlong param_1,ulonglong param_2)

{
  if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
    if (*(longlong *)(param_1 + 0x28) == 0) {
      FUN_00a02aa0(param_1,param_2 & 0xffffffff,param_2 & 0xffffffff);
    }
    else {
      FUN_00a02aa0(param_1,param_2,*(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0x1c));
    }
  }
  return;
}

