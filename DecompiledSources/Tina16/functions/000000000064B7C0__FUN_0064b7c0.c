/* Ghidra address: 0064b7c0 */
/* Ghidra symbol: FUN_0064b7c0 */


undefined8 FUN_0064b7c0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  cVar3 = FUN_004113d0(lVar1,&PTR_FUN_00638968);
  if ((cVar3 == '\0') ||
     (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0xe8),
     lVar2 != *(longlong *)(lVar1 + 0x140))) {
    uVar4 = 0;
  }
  else {
    uVar4 = CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
  }
  return uVar4;
}

