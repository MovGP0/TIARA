/* Ghidra address: 018162d0 */
/* Ghidra symbol: FUN_018162d0 */


void FUN_018162d0(longlong param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_018153a8);
  if (cVar1 != '\0') {
    FUN_00414ad0(param_1 + 0x20,*(undefined8 *)(param_2 + 0x20));
    FUN_00461840(param_1 + 0x28,param_2 + 0x28);
    *(undefined1 *)(param_1 + 0x1c) = *(undefined1 *)(param_2 + 0x1c);
  }
  return;
}

