/* Ghidra address: 0064b850 */
/* Ghidra symbol: FUN_0064b850 */


undefined8 FUN_0064b850(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  cVar2 = FUN_004d4ac0(param_1);
  if (cVar2 == '\0') {
    uVar3 = 0;
  }
  else {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x1f8);
    uVar3 = CONCAT71((int7)((ulonglong)lVar1 >> 8),
                     lVar1 == *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x98));
  }
  return uVar3;
}

