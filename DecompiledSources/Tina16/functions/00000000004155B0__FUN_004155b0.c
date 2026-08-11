/* Ghidra address: 004155b0 */
/* Ghidra symbol: FUN_004155b0 */


void FUN_004155b0(longlong *param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  if (param_2 != 0) {
    if (*param_1 == 0) {
      FUN_00414bf0(param_1,param_2);
    }
    else {
      uVar1 = *(uint *)(*param_1 + -4);
      uVar2 = *(uint *)(param_2 + -4);
      if (((uVar1 & uVar2 | ~(uVar1 + uVar2) & (uVar1 | uVar2)) & 0x80000000) != 0) {
        FUN_00410ab0();
      }
      lVar3 = FUN_00414df0(param_1);
      uVar5 = (ulonglong)DAT_01dbc158;
      FUN_00415d10(param_1,uVar1 + uVar2,*(undefined2 *)(*param_1 + -0xc));
      if (lVar3 + -1 + uVar5 == param_2 + -1 + (ulonglong)DAT_01dbc158) {
        lVar3 = FUN_00414df0(param_1);
        lVar3 = lVar3 + -1 + (ulonglong)DAT_01dbc158;
      }
      else {
        lVar3 = param_2 + -1 + (ulonglong)DAT_01dbc158;
      }
      lVar4 = FUN_00414df0(param_1);
      FUN_00409a70(lVar3,lVar4 + -1 + (ulonglong)(uVar1 + DAT_01dbc158),uVar2);
    }
  }
  return;
}

