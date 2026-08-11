/* Ghidra address: 00af5a30 */
/* Ghidra symbol: FUN_00af5a30 */


void FUN_00af5a30(longlong param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_00af2f30(param_1);
  if (cVar1 == '\0') {
    FUN_00742eb0(*(undefined8 *)(param_1 + 0x928),0);
    FUN_00af5780(param_1);
  }
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x920) + 0x28))(*(longlong **)(param_1 + 0x920));
  if (0 < iVar2) {
    FUN_00742eb0(*(undefined8 *)(param_1 + 0x928),1);
  }
  return;
}

