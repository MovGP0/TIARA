/* Ghidra address: 007f9d00 */
/* Ghidra symbol: FUN_007f9d00 */


void FUN_007f9d00(longlong param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_007e9e18);
  if (cVar1 == '\0') {
    FUN_004b1060(param_1,param_2);
  }
  else {
    FUN_007fa8a0(param_1,*(undefined1 *)(param_2 + 0x24));
    FUN_007fa870(param_1,*(undefined4 *)(param_2 + 0x18));
    FUN_007fa6c0(param_1,*(undefined4 *)(param_2 + 0x14));
    *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)(param_2 + 0x10);
  }
  return;
}

