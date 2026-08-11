/* Ghidra address: 005dce70 */
/* Ghidra symbol: FUN_005dce70 */


void FUN_005dce70(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x28) == '\0') {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 8);
    iVar3 = (**(code **)(*plVar1 + 0x28))(plVar1);
    bVar2 = 0 < iVar3;
  }
  else {
    bVar2 = true;
  }
  *(bool *)(param_1 + 0x28) = bVar2;
  FUN_005dc1a0(*(undefined8 *)(param_1 + 0x18));
  return;
}

