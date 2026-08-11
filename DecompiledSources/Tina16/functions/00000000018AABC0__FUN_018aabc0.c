/* Ghidra address: 018aabc0 */
/* Ghidra symbol: FUN_018aabc0 */


void FUN_018aabc0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  
  cVar2 = FUN_004113d0(*(undefined8 *)(param_1 + 0x78),&PTR_FUN_018a1608);
  if (cVar2 == '\0') {
    cVar2 = FUN_018a9930(param_1);
    FUN_018a9960(param_1,cVar2 == '\0');
  }
  else {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x6f8);
    if (*(char *)(lVar1 + 0x31a) == '\0') {
      FUN_006fa3b0(lVar1,1);
    }
    else {
      FUN_006fa3b0(lVar1,0);
    }
    FUN_018a9960(param_1,*(undefined1 *)
                          (*(longlong *)(*(longlong *)(param_1 + 0x78) + 0x6f8) + 0x31a));
  }
  return;
}

