/* Ghidra address: 004169f0 */
/* Ghidra symbol: FUN_004169f0 */


void FUN_004169f0(longlong *param_1,uint param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong local_30;
  
  if ((int)param_2 < 1) {
    FUN_00414480(param_1);
  }
  else {
    local_30 = *param_1;
    if ((local_30 == 0) || (*(int *)(local_30 + -8) != 1)) {
      lVar1 = FUN_00414350(param_2);
      if (*param_1 != 0) {
        uVar3 = *(uint *)(*param_1 + -4);
        if ((int)param_2 < (int)uVar3) {
          uVar3 = param_2;
        }
        uVar2 = FUN_00416740(*param_1);
        FUN_00409a70(uVar2,lVar1,(longlong)(int)(uVar3 * 2));
        FUN_00414480(param_1);
      }
      *param_1 = lVar1;
    }
    else {
      local_30 = local_30 + -0x10;
      if (0x7ffffff6 < param_2) {
        FUN_00410ab0();
      }
      FUN_00409620(&local_30,(longlong)(int)((param_2 + 1) * 2 + 0x10));
      *(uint *)(local_30 + 0xc) = param_2;
      *param_1 = local_30 + 0x10;
      lVar1 = FUN_00416740(*param_1);
      *(undefined2 *)(lVar1 + (longlong)(int)param_2 * 2) = 0;
    }
  }
  return;
}

