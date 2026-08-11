/* Ghidra address: 00416660 */
/* Ghidra symbol: FUN_00416660 */


void FUN_00416660(longlong *param_1,uint param_2)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  if (0 < (int)param_2) {
    uVar3 = FUN_00414450(param_2);
    uVar2 = 0;
    lVar1 = *param_1;
    if (lVar1 != 0) {
      uVar2 = *(uint *)(lVar1 + -4) >> 1;
    }
    if (uVar2 != 0) {
      if ((int)param_2 < (int)uVar2) {
        uVar2 = param_2;
      }
      FUN_00409a70(lVar1,uVar3,(longlong)(int)(uVar2 * 2));
    }
  }
  FUN_00415e00(param_1,uVar3);
  return;
}

