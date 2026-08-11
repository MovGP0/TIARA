/* Ghidra address: 007dcda0 */
/* Ghidra symbol: FUN_007dcda0 */


undefined8 FUN_007dcda0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  cVar2 = FUN_004113d0(lVar1,&PTR_FUN_0061c2b8);
  if ((cVar2 == '\0') ||
     (*(char *)(*(longlong *)(param_1 + 0x20) + 0x150) != *(char *)(lVar1 + 0xca))) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}

