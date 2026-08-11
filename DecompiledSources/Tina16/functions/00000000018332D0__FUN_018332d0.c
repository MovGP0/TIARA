/* Ghidra address: 018332d0 */
/* Ghidra symbol: FUN_018332d0 */


longlong FUN_018332d0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x90);
  cVar2 = FUN_004113d0(lVar1,&PTR_FUN_0182da68);
  if (cVar2 == '\0') {
    cVar2 = FUN_004113d0(lVar1,&PTR_FUN_0182d660);
    lVar3 = 0;
    if (cVar2 != '\0') {
      lVar3 = lVar1;
    }
  }
  else {
    lVar3 = *(longlong *)(lVar1 + 0xa0);
    cVar2 = FUN_004113d0(lVar3,&PTR_FUN_01846bd8);
    if (cVar2 != '\0') {
      lVar3 = *(longlong *)(lVar3 + 0x30);
    }
  }
  return lVar3;
}

