/* Ghidra address: 01bfb5b0 */
/* Ghidra symbol: FUN_01bfb5b0 */


void FUN_01bfb5b0(longlong param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_01bee940);
  if ((cVar1 != '\0') && (*(longlong *)(param_2 + 0x18) != 0)) {
    FUN_0064dfb0(*(undefined8 *)(param_2 + 0x18),*(undefined1 *)(param_1 + 0x4c));
  }
  return;
}

