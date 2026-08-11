/* Ghidra address: 01510240 */
/* Ghidra symbol: FUN_01510240 */


void FUN_01510240(longlong param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  if (*(char *)(*(longlong *)(param_1 + 0xce8) + 0x328) != '\0') {
    plVar1 = *(longlong **)(param_1 + 0xd00);
    uVar3 = (**(code **)(**(longlong **)(param_1 + 0xee0) + 0x88))(*(longlong **)(param_1 + 0xee0));
    (**(code **)(*(longlong *)plVar1[0x9e] + 0x10))((longlong *)plVar1[0x9e],uVar3);
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0xee0) + 0x90))(*(longlong **)(param_1 + 0xee0));
    (**(code **)(*plVar1 + 0x268))(plVar1,uVar2);
  }
  return;
}

