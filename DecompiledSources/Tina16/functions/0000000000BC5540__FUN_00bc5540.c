/* Ghidra address: 00bc5540 */
/* Ghidra symbol: FUN_00bc5540 */


int FUN_00bc5540(longlong param_1,int param_2)

{
  int iVar1;
  
  if ((((param_2 < 0) || (0xe < param_2)) || (*(longlong *)(param_1 + 400) == 0)) ||
     ((*(longlong *)(param_1 + 8 + (longlong)param_2 * 8) == 0 ||
      (*(longlong *)(param_1 + 0x80 + (longlong)param_2 * 8) == 0)))) {
    iVar1 = -1;
  }
  else {
    iVar1 = (int)((*(longlong *)(param_1 + 8 + (longlong)param_2 * 8) - *(longlong *)(param_1 + 400)
                  ) / 2) + 1;
  }
  return iVar1;
}

