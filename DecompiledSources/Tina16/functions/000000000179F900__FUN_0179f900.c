/* Ghidra address: 0179f900 */
/* Ghidra symbol: FUN_0179f900 */


void FUN_0179f900(longlong param_1,char param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar3 = FUN_0064d120(*(undefined8 *)(param_1 + 0x758));
  iVar4 = FUN_0068bbb0(*(undefined8 *)(param_1 + 0x758));
  if ((param_2 == '\0') ||
     (iVar5 = FUN_0068bee0(*(undefined8 *)(param_1 + 0x758),
                           (longlong)iVar3 % (longlong)iVar4 & 0xffffffff), 0x7fffffff < iVar5 - 1U)
     ) {
    if (param_2 != '\0') {
      return;
    }
    iVar5 = FUN_0068bee0(*(undefined8 *)(param_1 + 0x758));
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x758) + 0x4a0);
    iVar6 = (**(code **)(*plVar1 + 0x28))(plVar1);
    if (iVar6 <= iVar5 + iVar3 / iVar4) {
      return;
    }
  }
  *(char *)(param_1 + 0xc92) = param_2;
  (**(code **)(**(longlong **)(param_1 + 0xcb8) + 0x30))(*(longlong **)(param_1 + 0xcb8));
  if (param_2 == '\0') {
    uVar2 = *(undefined8 *)(param_1 + 0x758);
    iVar3 = FUN_0068bee0(uVar2);
    FUN_0068c170(uVar2,iVar3 + 1);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x758);
    iVar3 = FUN_0068bee0(uVar2);
    FUN_0068c170(uVar2,iVar3 + -1);
  }
  (**(code **)(**(longlong **)(param_1 + 0xcb8) + 0x40))(*(longlong **)(param_1 + 0xcb8));
  FUN_00742eb0(*(undefined8 *)(param_1 + 0xc10),1);
  return;
}

