/* Ghidra address: 0195e670 */
/* Ghidra symbol: FUN_0195e670 */


void FUN_0195e670(longlong param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_01924cb8);
  if (cVar1 != '\0') {
    FUN_00414ad0(param_1 + 0x18,*(undefined8 *)(param_2 + 0x18));
    FUN_00414ad0(param_1 + 0x20,*(undefined8 *)(param_2 + 0x20));
    FUN_00414ad0(param_1 + 0x28,*(undefined8 *)(param_2 + 0x28));
    *(undefined1 *)(param_1 + 0x30) = *(undefined1 *)(param_2 + 0x30);
  }
  return;
}

