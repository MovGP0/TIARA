/* Ghidra address: 00aa3430 */
/* Ghidra symbol: FUN_00aa3430 */


int FUN_00aa3430(longlong param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x560) + 0x174);
  if (iVar1 == 0) {
    iVar1 = 3;
  }
  return iVar1;
}

