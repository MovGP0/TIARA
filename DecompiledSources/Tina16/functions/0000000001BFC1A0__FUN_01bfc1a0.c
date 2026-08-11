/* Ghidra address: 01bfc1a0 */
/* Ghidra symbol: FUN_01bfc1a0 */


undefined8 FUN_01bfc1a0(longlong param_1)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  
  cVar2 = FUN_005b4bc0(param_1);
  if ((cVar2 == '\0') ||
     (iVar1 = *(int *)(*(longlong *)(param_1 + 0x20) + 0xac),
     iVar1 != *(int *)(*(longlong *)(param_1 + 0x18) + 0xe0))) {
    uVar3 = 0;
  }
  else {
    uVar3 = CONCAT71((uint7)(uint3)((uint)iVar1 >> 8),1);
  }
  return uVar3;
}

