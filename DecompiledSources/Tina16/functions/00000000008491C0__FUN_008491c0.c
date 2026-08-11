/* Ghidra address: 008491c0 */
/* Ghidra symbol: FUN_008491c0 */


void FUN_008491c0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x510) != 0) {
    lVar1 = FUN_0065b870(*(longlong *)(param_1 + 0x510));
    if ((*(longlong *)(param_2 + 0x10) == lVar1) && (*(short *)(param_2 + 10) == 0x300)) {
      FUN_008490a0(param_1);
    }
  }
  return;
}

