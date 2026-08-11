/* Ghidra address: 01bd84c0 */
/* Ghidra symbol: FUN_01bd84c0 */


void FUN_01bd84c0(longlong param_1,longlong param_2)

{
  FUN_00654e40(param_1,param_2);
  if (*(longlong *)(param_1 + 0x358) != 0) {
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & 0xbfffffff | 0x80000000;
  }
  *(undefined4 *)(param_2 + 0x30) = 0x809;
  *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 0xc) | 8;
  return;
}

