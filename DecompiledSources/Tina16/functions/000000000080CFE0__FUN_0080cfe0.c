/* Ghidra address: 0080cfe0 */
/* Ghidra symbol: FUN_0080cfe0 */


void FUN_0080cfe0(undefined8 param_1,longlong param_2)

{
  char cVar1;
  
  if (*(longlong *)(*(longlong *)(param_2 + 0x70) + 0xa8) == 0) {
    cVar1 = FUN_004113d0(*(undefined8 *)(param_2 + 0x48),&PTR_FUN_007f0370);
    if (cVar1 != '\0') {
      *(undefined1 *)(*(longlong *)(param_2 + 0x48) + 0x680) = 0;
    }
  }
  return;
}

