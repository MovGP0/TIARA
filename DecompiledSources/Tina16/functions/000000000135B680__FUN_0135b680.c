/* Ghidra address: 0135b680 */
/* Ghidra symbol: FUN_0135b680 */


void FUN_0135b680(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = FUN_00611650(*(undefined8 *)(param_1 + 8));
  if (iVar1 < 2) {
    lVar2 = 0;
  }
  else {
    lVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 8))(*(longlong **)(param_1 + 8));
  }
  if (lVar2 != 0) {
    FUN_00611620(*(undefined8 *)(param_1 + 0x10),lVar2);
    iVar1 = FUN_00611650(*(undefined8 *)(param_1 + 8));
    if (iVar1 < 1) {
      lVar2 = 0;
    }
    else {
      lVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8));
    }
    if (lVar2 != 0) {
      FUN_0135b570(param_1,lVar2,param_2);
    }
  }
  return;
}

