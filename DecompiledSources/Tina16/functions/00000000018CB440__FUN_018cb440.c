/* Ghidra address: 018cb440 */
/* Ghidra symbol: FUN_018cb440 */


void FUN_018cb440(longlong param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_0192e210);
  if ((cVar1 == '\0') || (*(char *)(param_2 + 0x240) == '\0')) {
    cVar1 = FUN_004113d0(param_2,&PTR_FUN_019317f0);
    if (cVar1 == '\0') {
      return;
    }
    if (*(char *)(param_2 + 0x255) == '\0') {
      return;
    }
  }
  FUN_004ae7e0(*(undefined8 *)(param_1 + 0x140),param_2);
  return;
}

