/* Ghidra address: 0196c480 */
/* Ghidra symbol: FUN_0196c480 */


void FUN_0196c480(longlong param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_01937480);
  if (cVar1 != '\0') {
    *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
    *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
    *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0x10);
    *(undefined1 *)(param_1 + 0x21) = *(undefined1 *)(param_2 + 0x21);
    FUN_00414ad0(param_1 + 0x28,*(undefined8 *)(param_2 + 0x28));
    *(undefined1 *)(param_1 + 0x30) = *(undefined1 *)(param_2 + 0x30);
    *(undefined1 *)(param_1 + 0x32) = *(undefined1 *)(param_2 + 0x32);
    *(undefined1 *)(param_1 + 0x33) = *(undefined1 *)(param_2 + 0x33);
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  }
  return;
}

