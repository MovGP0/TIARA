/* Ghidra address: 0196d7b0 */
/* Ghidra symbol: FUN_0196d7b0 */


ulonglong FUN_0196d7b0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x40);
  cVar2 = FUN_004113d0(lVar1,&PTR_FUN_01920040);
  if (cVar2 == '\0') {
    cVar2 = FUN_004113d0(lVar1,&PTR_FUN_01920448);
    if (cVar2 == '\0') {
      uVar3 = 0x1fffffff;
    }
    else {
      uVar3 = FUN_01957a10(lVar1);
    }
  }
  else {
    uVar3 = (ulonglong)*(uint *)(lVar1 + 8);
  }
  return uVar3;
}

