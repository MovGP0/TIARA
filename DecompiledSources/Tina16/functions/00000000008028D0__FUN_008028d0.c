/* Ghidra address: 008028d0 */
/* Ghidra symbol: FUN_008028d0 */


void FUN_008028d0(undefined4 param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  
  if (param_2 != 0) {
    do {
      lVar3 = param_2;
      param_2 = *(longlong *)(lVar3 + 0x78);
      if (param_2 == 0) break;
      cVar2 = FUN_004113d0(lVar3,&PTR_FUN_007ee548);
    } while (cVar2 == '\0');
    if ((lVar3 != 0) && (lVar3 != param_3)) {
      uVar1 = FUN_0065b870(lVar3);
      thunk_FUN_041b2403(uVar1,param_1,0,0);
    }
  }
  return;
}

