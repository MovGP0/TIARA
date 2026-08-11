/* Ghidra address: 00bbfa50 */
/* Ghidra symbol: FUN_00bbfa50 */


void FUN_00bbfa50(longlong param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_00bbd348);
  if (cVar1 == '\0') {
    FUN_004b1060(param_1,param_2);
  }
  else {
    FUN_00414ad0(param_1 + 0x20,*(undefined8 *)(param_2 + 0x20));
    FUN_00bbfaa0(param_1,param_2);
  }
  return;
}

