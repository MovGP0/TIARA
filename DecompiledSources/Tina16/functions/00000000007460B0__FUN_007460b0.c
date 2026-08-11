/* Ghidra address: 007460b0 */
/* Ghidra symbol: FUN_007460b0 */


void FUN_007460b0(longlong param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_007371d8);
  if (cVar1 != '\0') {
    *(undefined1 *)(param_2 + 0x18) = *(undefined1 *)(param_1 + 0x18);
    *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
    *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(param_1 + 0x28);
  }
  return;
}

