/* Ghidra address: 00416490 */
/* Ghidra symbol: FUN_00416490 */


void FUN_00416490(longlong *param_1,int param_2,int param_3)

{
  uint uVar1;
  longlong lVar2;
  
  uVar1 = 0;
  if (*param_1 != 0) {
    uVar1 = *(uint *)(*param_1 + -4) >> 1;
  }
  if ((((uVar1 != 0) && (0 < param_2)) && (param_2 <= (int)uVar1)) && (0 < param_3)) {
    param_2 = param_2 + -1;
    param_3 = (uVar1 - param_2) - param_3;
    if (param_3 < 0) {
      param_3 = 0;
    }
    if ((param_2 == 0) && (param_3 == 0)) {
      lVar2 = 0;
    }
    else {
      lVar2 = FUN_00414450(param_2 + param_3);
      if (0 < param_2) {
        FUN_00409a70(*param_1,lVar2,(longlong)(param_2 * 2));
      }
      if (0 < param_3) {
        FUN_00409a70(*param_1 + (longlong)(int)(uVar1 - param_3) * 2,lVar2 + (longlong)param_2 * 2,
                     (longlong)(param_3 * 2));
      }
    }
    FUN_00415e00(param_1,lVar2);
  }
  return;
}

