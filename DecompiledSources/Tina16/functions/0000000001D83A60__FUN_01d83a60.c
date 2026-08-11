/* Ghidra address: 01d83a60 */
/* Ghidra symbol: FUN_01d83a60 */


void FUN_01d83a60(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x9d8) + 0x260))(*(longlong **)(param_1 + 0x9d8));
  if (iVar2 != -1) {
    plVar1 = *(longlong **)(param_1 + 0x9d8);
    uVar3 = (**(code **)(*plVar1 + 0x260))(plVar1);
    uVar4 = (**(code **)(*(longlong *)plVar1[0x9e] + 0x30))((longlong *)plVar1[0x9e],uVar3);
    *(undefined8 *)(param_1 + 0xaa8) = uVar4;
    uVar3 = (**(code **)(**(longlong **)(param_1 + 0x9d8) + 0x260))(*(longlong **)(param_1 + 0x9d8))
    ;
    (**(code **)(**(longlong **)(param_1 + 0xa88) + 0x118))(*(longlong **)(param_1 + 0xa88),uVar3);
    if (*(char *)(param_1 + 0xaa0) != '\0') {
      (**(code **)(**(longlong **)(param_1 + 0xa88) + 0x168))(*(longlong **)(param_1 + 0xa88));
    }
  }
  return;
}

