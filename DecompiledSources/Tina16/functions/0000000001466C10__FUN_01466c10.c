/* Ghidra address: 01466c10 */
/* Ghidra symbol: FUN_01466c10 */


void FUN_01466c10(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x778) + 0xd0);
  (**(code **)(*plVar1 + 0x10))(plVar1,*(undefined8 *)(*(longlong *)(param_1 + 0x798) + 0x80));
  cVar2 = (**(code **)(**(longlong **)(param_1 + 0x778) + 0xa8))(*(longlong **)(param_1 + 0x778));
  if (cVar2 != '\0') {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x798) + 0x80);
    (**(code **)(*plVar1 + 0x10))(plVar1,*(undefined8 *)(*(longlong *)(param_1 + 0x778) + 0xd0));
    FUN_014666a0(param_1);
    FUN_01466580(param_1);
  }
  return;
}

