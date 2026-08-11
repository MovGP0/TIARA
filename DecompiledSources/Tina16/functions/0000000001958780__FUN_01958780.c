/* Ghidra address: 01958780 */
/* Ghidra symbol: FUN_01958780 */


void FUN_01958780(longlong param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_019214b8);
  if (cVar1 != '\0') {
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
    *(undefined1 *)(param_1 + 0x14) = *(undefined1 *)(param_2 + 0x14);
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  }
  return;
}

