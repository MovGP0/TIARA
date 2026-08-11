/* Ghidra address: 00f48930 */
/* Ghidra symbol: FUN_00f48930 */


longlong FUN_00f48930(longlong param_1,int param_2)

{
  if (*(short *)(param_1 + 8) != param_2) {
    if (*(longlong *)(param_1 + 0x38) == 0) {
      param_1 = 0;
    }
    else {
      param_1 = FUN_00f48930(*(longlong *)(param_1 + 0x38));
    }
  }
  return param_1;
}

