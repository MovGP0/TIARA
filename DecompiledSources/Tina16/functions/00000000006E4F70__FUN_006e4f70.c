/* Ghidra address: 006e4f70 */
/* Ghidra symbol: FUN_006e4f70 */


void FUN_006e4f70(longlong param_1,char param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x568) + 0x10) + -1;
  if (0 < iVar1) {
    do {
      FUN_006e5480(param_1,iVar1);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  if (param_2 == '\0') {
    FUN_006e2590(param_1,0);
  }
  return;
}

