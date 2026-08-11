/* Ghidra address: 0064cee0 */
/* Ghidra symbol: FUN_0064cee0 */


void FUN_0064cee0(longlong *param_1,longlong param_2,undefined8 param_3)

{
  char cVar1;
  
  cVar1 = FUN_004113d0(param_1,&PTR_FUN_00640c18);
  if (cVar1 == '\0') {
    FUN_0064e4c0(param_1,*(undefined1 *)((longlong)param_1 + 0xa9),0);
  }
  if (param_1[0xf] == param_2) {
    FUN_0064d040(param_1,param_3);
  }
  else {
    FUN_0064fe10(param_1,param_3);
  }
  if ((param_2 == 0) || (param_2 == 0xffffffff)) {
    (**(code **)(*param_1 + 0x130))(param_1,0);
  }
  return;
}

