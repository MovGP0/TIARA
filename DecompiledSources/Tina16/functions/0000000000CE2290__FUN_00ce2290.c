/* Ghidra address: 00ce2290 */
/* Ghidra symbol: FUN_00ce2290 */


void FUN_00ce2290(longlong param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_00cdf0b0);
  if (cVar1 == '\0') {
    FUN_004b1190(param_1,param_2);
  }
  else {
    FUN_00414ad0(param_2 + 0x10,*(undefined8 *)(param_1 + 0x10));
    *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_1 + 0x18);
    FUN_00414ad0(param_2 + 0x20,*(undefined8 *)(param_1 + 0x20));
    FUN_00414ad0(param_2 + 0x28,*(undefined8 *)(param_1 + 0x28));
    *(undefined1 *)(param_2 + 0x30) = *(undefined1 *)(param_1 + 0x30);
  }
  return;
}

