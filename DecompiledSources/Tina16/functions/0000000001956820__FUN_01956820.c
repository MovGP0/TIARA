/* Ghidra address: 01956820 */
/* Ghidra symbol: FUN_01956820 */


void FUN_01956820(longlong param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_01920040);
  if (cVar1 != '\0') {
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
    *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0x10);
  }
  return;
}

