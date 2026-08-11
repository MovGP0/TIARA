/* Ghidra address: 0199c3e0 */
/* Ghidra symbol: FUN_0199c3e0 */


void FUN_0199c3e0(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_0199c440(param_1,param_2,param_3);
  if (lVar1 == 0) {
    if ((int)param_1[2] < 0x7ffffffe) {
      uVar2 = FUN_0199c320(0,&PTR_FUN_01984a48,param_2,param_3);
      (**(code **)(*param_1 + 0x20))(param_1,uVar2);
    }
  }
  else {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  return;
}

