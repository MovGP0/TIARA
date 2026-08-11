/* Ghidra address: 01950600 */
/* Ghidra symbol: FUN_01950600 */


longlong FUN_01950600(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  
  cVar2 = FUN_004113d0(param_1,&PTR_FUN_019342a8);
  if (cVar2 == '\0') {
    lVar1 = *(longlong *)(param_1 + 0xf0);
    while ((param_1 = 0, lVar1 != 0 &&
           (cVar2 = FUN_004113d0(lVar1,&PTR_FUN_019342a8), param_1 = lVar1, cVar2 == '\0'))) {
      lVar1 = *(longlong *)(lVar1 + 0xf0);
    }
  }
  return param_1;
}

