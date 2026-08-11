/* Ghidra address: 00c8faa0 */
/* Ghidra symbol: FUN_00c8faa0 */


void FUN_00c8faa0(longlong param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_00c8d880);
  if (cVar1 == '\0') {
    FUN_004b1060(param_1,param_2);
  }
  else {
    FUN_00414ad0(param_1 + 0x30,*(undefined8 *)(param_2 + 0x30));
    *(undefined2 *)(param_1 + 0x40) = *(undefined2 *)(param_2 + 0x40);
    FUN_00414ad0(param_1 + 0x38,*(undefined8 *)(param_2 + 0x38));
    *(undefined2 *)(param_1 + 0x42) = *(undefined2 *)(param_2 + 0x42);
    *(undefined1 *)(param_1 + 0x55) = *(undefined1 *)(param_2 + 0x55);
  }
  return;
}

