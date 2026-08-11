/* Ghidra address: 004b58d0 */
/* Ghidra symbol: FUN_004b58d0 */


void FUN_004b58d0(longlong param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_00478280);
  if (cVar1 != '\0') {
    *(undefined1 *)(param_1 + 0x4a) = *(undefined1 *)(param_2 + 0x4a);
    *(undefined1 *)(param_1 + 0x49) = *(undefined1 *)(param_2 + 0x49);
    *(undefined1 *)(param_1 + 0x48) = *(undefined1 *)(param_2 + 0x48);
  }
  FUN_004b30d0(param_1,param_2);
  return;
}

