/* Ghidra address: 00416550 */
/* Ghidra symbol: FUN_00416550 */


void FUN_00416550(longlong param_1,longlong *param_2,int param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  undefined4 local_2c;
  
  uVar2 = 0;
  if (param_1 != 0) {
    uVar2 = *(uint *)(param_1 + -4) >> 1;
  }
  if (uVar2 != 0) {
    uVar3 = 0;
    if (*param_2 != 0) {
      uVar3 = *(uint *)(*param_2 + -4) >> 1;
    }
    if (param_3 < 1) {
      local_2c = 0;
    }
    else {
      local_2c = param_3 - 1U;
      if ((int)uVar3 < (int)(param_3 - 1U)) {
        local_2c = uVar3;
      }
    }
    lVar1 = FUN_00414450(uVar3 + uVar2);
    if (0 < (int)local_2c) {
      FUN_00409a70(*param_2,lVar1,(longlong)(int)(local_2c * 2));
    }
    FUN_00409a70(param_1,lVar1 + (longlong)(int)local_2c * 2,(longlong)(int)(uVar2 * 2));
    if ((int)local_2c < (int)uVar3) {
      FUN_00409a70(*param_2 + (longlong)(int)local_2c * 2,
                   lVar1 + (longlong)(int)(local_2c + uVar2) * 2,
                   (longlong)(int)((uVar3 - local_2c) * 2));
    }
    FUN_00415e00(param_2,lVar1);
  }
  return;
}

