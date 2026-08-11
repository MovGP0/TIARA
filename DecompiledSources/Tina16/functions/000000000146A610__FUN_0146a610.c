/* Ghidra address: 0146a610 */
/* Ghidra symbol: FUN_0146a610 */


void FUN_0146a610(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x728) + 0xd0);
  (**(code **)(*plVar1 + 0x10))(plVar1,*(undefined8 *)(*(longlong *)(param_1 + 0x6e8) + 0xb8));
  cVar2 = (**(code **)(**(longlong **)(param_1 + 0x728) + 0xa8))(*(longlong **)(param_1 + 0x728));
  if (cVar2 != '\0') {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6e8) + 0xb8);
    (**(code **)(*plVar1 + 0x10))(plVar1,*(undefined8 *)(*(longlong *)(param_1 + 0x728) + 0xd0));
    plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x8e0) + 0x90) + 0x80);
    (**(code **)(*plVar1 + 0x10))(plVar1,*(undefined8 *)(*(longlong *)(param_1 + 0x728) + 0xd0));
    if (*PTR_DAT_02004cc0 != '\0') {
      *(undefined4 *)(param_1 + 0x508) = 1;
    }
  }
  FUN_0146af40(param_1,param_2);
  return;
}

