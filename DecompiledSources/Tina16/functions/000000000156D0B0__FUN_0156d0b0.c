/* Ghidra address: 0156d0b0 */
/* Ghidra symbol: FUN_0156d0b0 */


void FUN_0156d0b0(longlong param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    *(undefined4 *)(param_1 + 0x848 + (longlong)iVar1 * 4) = 0;
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x20);
  *(undefined4 *)(param_1 + 0x848) = param_2;
  return;
}

