/* Ghidra address: 01b07e10 */
/* Ghidra symbol: FUN_01b07e10 */


void FUN_01b07e10(longlong param_1,longlong param_2)

{
  int iVar1;
  
  iVar1 = 1;
  while ((iVar1 <= *(int *)(param_1 + 0x2d8) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_1 + 0x2b0) + -8 + (longlong)iVar1 * 8) + 0x128) !=
          param_2))) {
    iVar1 = iVar1 + 1;
  }
  return;
}

