/* Ghidra address: 00cb5280 */
/* Ghidra symbol: FUN_00cb5280 */


void FUN_00cb5280(longlong param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_00cb4b00);
  if (cVar1 != '\0') {
    *(undefined1 *)(param_1 + 0x118) = *(undefined1 *)(param_2 + 0x118);
    *(undefined1 *)(param_1 + 0x119) = *(undefined1 *)(param_2 + 0x119);
  }
  FUN_00cb1a60(param_1,param_2);
  return;
}

