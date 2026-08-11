/* Ghidra address: 00829370 */
/* Ghidra symbol: FUN_00829370 */


undefined8 FUN_00829370(longlong param_1)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  
  cVar2 = FUN_005b4b90(param_1);
  if (((cVar2 == '\0') || (*(longlong *)(param_1 + 0x28) == 0)) ||
     (iVar1 = *(int *)(*(longlong *)(param_1 + 0x28) + 0x318),
     iVar1 != *(int *)(*(longlong *)(param_1 + 0x18) + 0xdc))) {
    uVar3 = 0;
  }
  else {
    uVar3 = CONCAT71((uint7)(uint3)((uint)iVar1 >> 8),1);
  }
  return uVar3;
}

