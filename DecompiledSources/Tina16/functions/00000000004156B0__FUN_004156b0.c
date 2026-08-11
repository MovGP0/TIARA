/* Ghidra address: 004156b0 */
/* Ghidra symbol: FUN_004156b0 */


void FUN_004156b0(longlong *param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if (param_2 == 0) {
    FUN_00414bf0(param_1,param_3);
  }
  else if (param_3 == 0) {
    FUN_00414bf0(param_1,param_2);
  }
  else if (*param_1 == param_2) {
    FUN_004155b0(param_1,param_3);
  }
  else if (*param_1 == param_3) {
    uVar1 = *(uint *)(param_2 + -4);
    uVar2 = *(uint *)(param_3 + -4);
    if (((uVar1 & uVar2 | ~(uVar1 + uVar2) & (uVar1 | uVar2)) & 0x80000000) != 0) {
      FUN_00410ab0();
    }
    lVar3 = FUN_004143b0(uVar1 + uVar2,*(undefined2 *)(param_3 + -0xc));
    uVar4 = FUN_00415ab0(param_2);
    FUN_00409a70(uVar4,lVar3,(ulonglong)uVar1);
    uVar4 = FUN_00415ab0(param_3);
    FUN_00409a70(uVar4,lVar3 + (ulonglong)uVar1,uVar2);
    FUN_004144d0(param_1);
    *param_1 = lVar3;
  }
  else {
    FUN_00414bf0(param_1,param_2);
    FUN_004155b0(param_1,param_3);
  }
  return;
}

