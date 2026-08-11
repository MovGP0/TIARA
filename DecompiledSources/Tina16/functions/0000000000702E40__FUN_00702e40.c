/* Ghidra address: 00702e40 */
/* Ghidra symbol: FUN_00702e40 */


undefined8 FUN_00702e40(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  cVar2 = FUN_0064b700(param_1);
  if ((cVar2 == '\0') ||
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x330),
     lVar1 != *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x138))) {
    uVar3 = 0;
  }
  else {
    uVar3 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
  }
  return uVar3;
}

