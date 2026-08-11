/* Ghidra address: 01bfb860 */
/* Ghidra symbol: FUN_01bfb860 */


void FUN_01bfb860(longlong param_1,longlong param_2)

{
  char cVar1;
  
  FUN_004b1ce0(param_1,param_2);
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_01bef088);
  if (cVar1 != '\0') {
    FUN_01bfa570(param_1,*(undefined1 *)(param_2 + 0x30));
    *(undefined1 *)(param_1 + 0x40) = *(undefined1 *)(param_2 + 0x40);
    FUN_01bfbc20(param_1,*(undefined1 *)(param_2 + 0x4a));
    FUN_01bfbb40(param_1,*(undefined1 *)(param_2 + 0x48));
    FUN_01bfbc70(param_1,*(undefined1 *)(param_2 + 0x49));
  }
  return;
}

