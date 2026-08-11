/* Ghidra address: 01981280 */
/* Ghidra symbol: FUN_01981280 */


void FUN_01981280(longlong param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_019185f0);
  if (cVar1 != '\0') {
    FUN_019816d0(param_1,*(undefined8 *)(param_2 + 8));
    *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
    *(undefined1 *)(param_1 + 0x19) = *(undefined1 *)(param_2 + 0x19);
  }
  return;
}

