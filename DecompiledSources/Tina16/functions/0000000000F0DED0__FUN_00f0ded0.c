/* Ghidra address: 00f0ded0 */
/* Ghidra symbol: FUN_00f0ded0 */


void FUN_00f0ded0(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  
  uVar3 = FUN_005fdaa0(*(undefined8 *)(*(longlong *)(param_1 + 0x760) + 800));
  plVar1 = *(longlong **)(param_1 + 0x758);
  *(undefined4 *)(plVar1 + 0x1a) = uVar3;
  cVar2 = (**(code **)(*plVar1 + 0xa8))(plVar1);
  if (cVar2 != '\0') {
    FUN_005fdab0(*(undefined8 *)(*(longlong *)(param_1 + 0x760) + 800),
                 *(undefined4 *)(*(longlong *)(param_1 + 0x758) + 0xd0));
  }
  return;
}

