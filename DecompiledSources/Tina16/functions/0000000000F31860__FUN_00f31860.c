/* Ghidra address: 00f31860 */
/* Ghidra symbol: FUN_00f31860 */


ulonglong FUN_00f31860(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar2 = FUN_00f2cef0(&LAB_00f233a8,1);
  FUN_00f30f10(param_2,uVar2);
  uVar3 = FUN_00f32880(param_1,uVar2);
  if (0 < (int)uVar3) {
    FUN_00f2e320(param_1);
    if ((*(ulonglong *)(param_1 + 0x18) < *(ulonglong *)(param_1 + 8)) &&
       (*(int *)(param_1 + 0x34) <= *(int *)(param_1 + 0x30))) {
      lVar4 = *(ulonglong *)(param_1 + 8) - *(longlong *)(param_1 + 0x10);
      if (0xffffffff < lVar4 + 0x80000000U) {
        lVar4 = FUN_00410a90();
      }
      uVar3 = (ulonglong)(uint)-(int)lVar4;
    }
    else {
      cVar1 = FUN_00f2e280(param_1);
      if (cVar1 == ':') {
        if (*(int *)(param_1 + 0x30) < *(int *)(param_1 + 0x34)) {
          *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
        }
        else {
          *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 1;
        }
        FUN_00f2e320(param_1);
        uVar3 = FUN_00f31c40(param_1,uVar2,param_3);
      }
      else {
        lVar4 = *(longlong *)(param_1 + 8) - *(longlong *)(param_1 + 0x10);
        if (0xffffffff < lVar4 + 0x80000000U) {
          lVar4 = FUN_00410a90();
        }
        uVar3 = (ulonglong)(uint)-(int)lVar4;
      }
    }
  }
  return uVar3;
}

