/* Ghidra address: 019551b0 */
/* Ghidra symbol: FUN_019551b0 */


undefined8 FUN_019551b0(longlong param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_01936058);
  if (((cVar1 != '\0') || (cVar1 = FUN_004113d0(param_2,&PTR_FUN_0191c328), cVar1 != '\0')) &&
     (*(longlong *)(param_2 + 0xf0) != param_1)) {
    return 1;
  }
  return 0;
}

