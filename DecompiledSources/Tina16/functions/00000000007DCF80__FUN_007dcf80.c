/* Ghidra address: 007dcf80 */
/* Ghidra symbol: FUN_007dcf80 */


undefined8 FUN_007dcf80(longlong param_1)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  
  cVar2 = FUN_005b4c50(param_1);
  if ((cVar2 == '\0') ||
     (iVar1 = *(int *)(*(longlong *)(param_1 + 0x20) + 0x88),
     iVar1 != *(int *)(*(longlong *)(param_1 + 0x18) + 0x110))) {
    uVar3 = 0;
  }
  else {
    uVar3 = CONCAT71((uint7)(uint3)((uint)iVar1 >> 8),1);
  }
  return uVar3;
}

