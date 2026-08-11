/* Ghidra address: 0080d240 */
/* Ghidra symbol: FUN_0080d240 */


void FUN_0080d240(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  
  lVar1 = thunk_FUN_041d93e9();
  if (lVar1 != 0) {
    uVar2 = thunk_FUN_041d93e9();
    thunk_FUN_041b2403(uVar2,0x1f,0,0);
  }
  uVar2 = FUN_004097b0();
  cVar4 = FUN_0080d190(uVar2,&PTR_FUN_004334c0);
  if (cVar4 == '\0') {
    uVar3 = FUN_004097e0();
    FUN_0044d280(uVar2,uVar3);
  }
  else {
    cVar4 = FUN_0080d190(uVar2,&PTR_FUN_00434b98);
    if (cVar4 == '\0') {
      if (*(longlong *)(param_1 + 0x1d0) == 0) {
        FUN_0080d620(param_1,uVar2);
      }
      else {
        (**(code **)(param_1 + 0x1d0))(*(undefined8 *)(param_1 + 0x1d8),param_2,uVar2);
      }
    }
  }
  return;
}

