/* Ghidra address: 01bb3d90 */
/* Ghidra symbol: FUN_01bb3d90 */


undefined8 FUN_01bb3d90(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  
  if (*(char *)(param_1 + 0x790) == '\0') {
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x6d0) + 0x260))(*(longlong **)(param_1 + 0x6d0))
    ;
    if (cVar2 != '\0') {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6e0) + 0x4f0);
      iVar3 = (**(code **)(*plVar1 + 0x28))(plVar1);
      if (iVar3 < 1) goto LAB_01bb3dd3;
    }
    uVar4 = 1;
  }
  else {
LAB_01bb3dd3:
    uVar4 = 0;
  }
  return uVar4;
}

