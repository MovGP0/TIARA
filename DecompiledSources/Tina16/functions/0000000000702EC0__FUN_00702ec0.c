/* Ghidra address: 00702ec0 */
/* Ghidra symbol: FUN_00702ec0 */


undefined8 FUN_00702ec0(longlong param_1)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  
  cVar2 = FUN_005b4c50(param_1);
  if ((cVar2 == '\0') ||
     (iVar1 = *(int *)(*(longlong *)(param_1 + 0x28) + 0x31c),
     iVar1 != *(int *)(*(longlong *)(param_1 + 0x18) + 0x110))) {
    uVar3 = 0;
  }
  else {
    uVar3 = CONCAT71((uint7)(uint3)((uint)iVar1 >> 8),1);
  }
  return uVar3;
}

