/* Ghidra address: 017b5160 */
/* Ghidra symbol: FUN_017b5160 */


void FUN_017b5160(longlong param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  
  if ((-1 < param_2) && (param_2 <= *(int *)(param_1 + 0x60) + -1)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x58) + (longlong)param_2 * 8);
    *piVar1 = *piVar1 + param_3;
    piVar1 = (int *)(*(longlong *)(param_1 + 0x58) + 4 + (longlong)param_2 * 8);
    *piVar1 = *piVar1 + param_4;
    FUN_017b51d0();
  }
  return;
}

