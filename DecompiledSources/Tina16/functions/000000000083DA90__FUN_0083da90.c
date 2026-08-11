/* Ghidra address: 0083da90 */
/* Ghidra symbol: FUN_0083da90 */


void FUN_0083da90(longlong *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  if (*param_1 != 0) {
    uVar1 = *(undefined4 *)(*param_1 + (longlong)param_2 * 4);
    if (param_2 < param_3) {
      FUN_00409a70(*param_1 + (longlong)(param_2 + 1) * 4,*param_1 + (longlong)param_2 * 4,
                   (longlong)((param_3 - param_2) * 4));
    }
    else if (param_3 < param_2) {
      FUN_00409a70(*param_1 + (longlong)param_3 * 4,*param_1 + (longlong)(param_3 + 1) * 4,
                   (longlong)((param_2 - param_3) * 4));
    }
    *(undefined4 *)(*param_1 + (longlong)param_3 * 4) = uVar1;
  }
  return;
}

