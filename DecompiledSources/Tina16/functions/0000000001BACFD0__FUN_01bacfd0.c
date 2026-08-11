/* Ghidra address: 01bacfd0 */
/* Ghidra symbol: FUN_01bacfd0 */


void FUN_01bacfd0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  
  lVar4 = FUN_019a4600();
  if (*(char *)(lVar4 + 0x218) == '\0') {
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x700) + 0x260))(*(longlong **)(param_1 + 0x700))
    ;
    if (-1 < iVar2) {
      plVar1 = *(longlong **)(param_1 + 0x700);
      uVar3 = (**(code **)(*plVar1 + 0x260))(plVar1);
      lVar4 = FUN_006efcb0(plVar1[0x9c],uVar3);
      *(undefined4 *)(param_1 + 0x508) = **(undefined4 **)(lVar4 + 0x40);
    }
  }
  return;
}

