/* Ghidra address: 012dadd0 */
/* Ghidra symbol: FUN_012dadd0 */


void FUN_012dadd0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (*(longlong *)(lVar1 + 0x80) != 0) {
    FUN_012ccc10(*(longlong *)(lVar1 + 0x80),*(undefined8 *)(param_1 + 0x58),
                 *(int *)(lVar1 + 0x68) + -1,*(undefined4 *)(lVar1 + 0x6c),
                 *(int *)(lVar1 + 0x70) + 1);
    FUN_012d7d80(lVar1,0);
  }
  return;
}

