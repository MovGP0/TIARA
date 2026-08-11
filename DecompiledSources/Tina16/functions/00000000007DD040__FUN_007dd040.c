/* Ghidra address: 007dd040 */
/* Ghidra symbol: FUN_007dd040 */


undefined8 FUN_007dd040(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  cVar2 = FUN_004d4ac0(param_1);
  if ((cVar2 == '\0') ||
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x110),
     lVar1 != *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x98))) {
    uVar3 = 0;
  }
  else {
    uVar3 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
  }
  return uVar3;
}

