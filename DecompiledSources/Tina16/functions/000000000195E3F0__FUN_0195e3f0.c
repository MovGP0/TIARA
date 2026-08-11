/* Ghidra address: 0195e3f0 */
/* Ghidra symbol: FUN_0195e3f0 */


void FUN_0195e3f0(longlong param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_019243d0);
  if (cVar1 != '\0') {
    *(undefined1 *)(param_1 + 0x21) = *(undefined1 *)(param_2 + 0x21);
    *(undefined1 *)(param_1 + 0x22) = *(undefined1 *)(param_2 + 0x22);
    *(undefined1 *)(param_1 + 0x23) = *(undefined1 *)(param_2 + 0x23);
    FUN_0195e520(param_1,*(undefined8 *)(param_2 + 0x30));
    FUN_0195e470(param_1,*(undefined8 *)(param_2 + 0x38));
    FUN_0195e5a0(param_1,*(undefined8 *)(param_2 + 0x40));
    FUN_00414ad0(param_1 + 0x28,*(undefined8 *)(param_2 + 0x28));
    *(undefined1 *)(param_1 + 0x48) = *(undefined1 *)(param_2 + 0x48);
    *(undefined1 *)(param_1 + 0x49) = *(undefined1 *)(param_2 + 0x49);
  }
  return;
}

