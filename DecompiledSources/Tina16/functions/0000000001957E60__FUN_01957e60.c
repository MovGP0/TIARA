/* Ghidra address: 01957e60 */
/* Ghidra symbol: FUN_01957e60 */


void FUN_01957e60(longlong param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_01920928);
  if (cVar1 != '\0') {
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
    *(undefined1 *)(param_1 + 0x19) = *(undefined1 *)(param_2 + 0x19);
  }
  return;
}

