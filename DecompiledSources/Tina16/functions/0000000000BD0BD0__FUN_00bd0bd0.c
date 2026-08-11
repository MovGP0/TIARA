/* Ghidra address: 00bd0bd0 */
/* Ghidra symbol: FUN_00bd0bd0 */


void FUN_00bd0bd0(longlong param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_00bce150);
  if (cVar1 == '\0') {
    FUN_004b1060(param_1,param_2);
  }
  else {
    *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
    *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
    *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
    *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_2 + 0x14);
    FUN_00414ad0(param_1 + 0x20,*(undefined8 *)(param_2 + 0x20));
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  }
  return;
}

