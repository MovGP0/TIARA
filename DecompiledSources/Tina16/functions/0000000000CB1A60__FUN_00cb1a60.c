/* Ghidra address: 00cb1a60 */
/* Ghidra symbol: FUN_00cb1a60 */


void FUN_00cb1a60(longlong param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_00cb11c0);
  if (cVar1 == '\0') {
    FUN_004b1060(param_1,param_2);
  }
  else {
    FUN_00414ad0(param_1 + 0xf0,*(undefined8 *)(param_2 + 0xf0));
    FUN_00414ad0(param_1 + 0xf8,*(undefined8 *)(param_2 + 0xf8));
    *(undefined2 *)(param_1 + 0x100) = *(undefined2 *)(param_2 + 0x100);
    *(undefined1 *)(param_1 + 0x102) = *(undefined1 *)(param_2 + 0x102);
    FUN_00414ad0(param_1 + 0x108,*(undefined8 *)(param_2 + 0x108));
  }
  return;
}

