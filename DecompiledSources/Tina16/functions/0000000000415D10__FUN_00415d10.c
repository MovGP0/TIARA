/* Ghidra address: 00415d10 */
/* Ghidra symbol: FUN_00415d10 */


void FUN_00415d10(longlong *param_1,int param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  longlong local_30;
  
  if (param_2 < 1) {
    FUN_004144d0(param_1);
  }
  else {
    local_30 = *param_1;
    if ((local_30 == 0) || (*(int *)(local_30 + -8) != 1)) {
      lVar1 = FUN_004143b0(param_2,param_3);
      if (*param_1 == 0) {
        *param_1 = lVar1;
      }
      else {
        iVar3 = *(int *)(*param_1 + -4);
        if (param_2 < *(int *)(*param_1 + -4)) {
          iVar3 = param_2;
        }
        uVar2 = FUN_00415ab0(*param_1);
        FUN_00409a70(uVar2,lVar1,(longlong)iVar3);
        FUN_004144d0(param_1);
        *param_1 = lVar1;
      }
    }
    else {
      local_30 = local_30 + -0x10;
      FUN_00409620(&local_30,(longlong)(param_2 + 0x11));
      *(int *)(local_30 + 0xc) = param_2;
      *param_1 = local_30 + 0x10;
      lVar1 = FUN_00415ab0(*param_1);
      *(undefined1 *)(lVar1 + param_2) = 0;
    }
  }
  return;
}

