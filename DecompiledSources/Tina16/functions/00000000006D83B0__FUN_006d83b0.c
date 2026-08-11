/* Ghidra address: 006d83b0 */
/* Ghidra symbol: FUN_006d83b0 */


void FUN_006d83b0(undefined8 param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_006affd0);
  if (cVar1 == '\0') {
    FUN_004b1060(param_1,param_2);
  }
  else {
    FUN_006d85c0(param_1,*(undefined8 *)(param_2 + 0x18));
    FUN_006d8600(param_1,*(undefined4 *)(param_2 + 0x20));
    FUN_006d8560(param_1,*(undefined1 *)(param_2 + 0x24));
    FUN_006d8580(param_1,*(undefined1 *)(param_2 + 0x25));
    FUN_006d85a0(param_1,*(undefined1 *)(param_2 + 0x28));
  }
  return;
}

