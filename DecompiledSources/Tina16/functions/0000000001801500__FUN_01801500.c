/* Ghidra address: 01801500 */
/* Ghidra symbol: FUN_01801500 */


void FUN_01801500(longlong param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_01800b50);
  if (cVar1 != '\0') {
    *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
    FUN_01801610(param_1,*(undefined4 *)(param_2 + 0x14));
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
    FUN_01801600(param_1,*(undefined4 *)(param_2 + 0xc));
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  }
  return;
}

