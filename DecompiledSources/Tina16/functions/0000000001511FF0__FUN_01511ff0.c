/* Ghidra address: 01511ff0 */
/* Ghidra symbol: FUN_01511ff0 */


void FUN_01511ff0(longlong param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  if (*(char *)(*(longlong *)(param_1 + 0xce0) + 0x328) != '\0') {
    plVar1 = *(longlong **)(param_1 + 0xd00);
    uVar3 = (**(code **)(**(longlong **)(param_1 + 0xee0) + 0xa0))(*(longlong **)(param_1 + 0xee0));
    (**(code **)(*(longlong *)plVar1[0x9e] + 0x10))((longlong *)plVar1[0x9e],uVar3);
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0xee0) + 0xa8))(*(longlong **)(param_1 + 0xee0));
    (**(code **)(*plVar1 + 0x268))(plVar1,uVar2);
  }
  return;
}

