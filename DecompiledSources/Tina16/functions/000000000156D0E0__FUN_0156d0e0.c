/* Ghidra address: 0156d0e0 */
/* Ghidra symbol: FUN_0156d0e0 */


void FUN_0156d0e0(longlong param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    *(undefined4 *)(param_1 + 0x848 + (longlong)iVar1 * 4) = 0;
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x20);
  return;
}

