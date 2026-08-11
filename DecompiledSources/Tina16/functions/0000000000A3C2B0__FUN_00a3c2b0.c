/* Ghidra address: 00a3c2b0 */
/* Ghidra symbol: FUN_00a3c2b0 */


void FUN_00a3c2b0(longlong param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    *(char *)(param_1 + 0x169 + (longlong)iVar1) = (char)iVar1;
    *(char *)(param_1 + 0x48 + (longlong)iVar1) = (char)iVar1;
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x100);
  return;
}

