/* Ghidra address: 018012b0 */
/* Ghidra symbol: FUN_018012b0 */


void FUN_018012b0(longlong param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_01800f10);
  if (cVar1 != '\0') {
    FUN_018014c0(param_1,*(undefined8 *)(param_2 + 0x18));
    *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
    FUN_018014e0(param_1,*(undefined8 *)(param_2 + 0x10));
    *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_2 + 0x20);
  }
  return;
}

