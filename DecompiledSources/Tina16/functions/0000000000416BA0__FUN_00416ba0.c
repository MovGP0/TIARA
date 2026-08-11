/* Ghidra address: 00416ba0 */
/* Ghidra symbol: FUN_00416ba0 */


void FUN_00416ba0(longlong *param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if (param_2 == 0) {
    FUN_00414ad0(param_1,param_3);
  }
  else if (param_3 == 0) {
    FUN_00414ad0(param_1,param_2);
  }
  else if (*param_1 == param_2) {
    FUN_00416ad0(param_1,param_3);
  }
  else if (*param_1 == param_3) {
    uVar1 = *(uint *)(param_2 + -4);
    uVar2 = *(uint *)(param_3 + -4);
    if (((uVar1 & uVar2 | ~(uVar1 + uVar2) & (uVar1 | uVar2)) & 0x80000000) != 0) {
      FUN_00410ab0();
    }
    lVar3 = FUN_00414350(uVar1 + uVar2);
    uVar4 = FUN_00416740(param_2);
    FUN_00409a70(uVar4,lVar3,uVar1 * 2);
    uVar4 = FUN_00416740(param_3);
    FUN_00409a70(uVar4,lVar3 + (ulonglong)uVar1 * 2,uVar2 * 2);
    FUN_00414480(param_1);
    *param_1 = lVar3;
  }
  else {
    FUN_00414ad0(param_1,param_2);
    FUN_00416ad0(param_1,param_3);
  }
  return;
}

