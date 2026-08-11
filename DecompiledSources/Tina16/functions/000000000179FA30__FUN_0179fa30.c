/* Ghidra address: 0179fa30 */
/* Ghidra symbol: FUN_0179fa30 */


void FUN_0179fa30(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x758) + 0x260))(*(longlong **)(param_1 + 0x758));
  if (-1 < iVar2 + -1) {
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x758) + 0x260))(*(longlong **)(param_1 + 0x758))
    ;
    if (*(int *)(param_1 + 0xca0) == iVar2) {
      iVar2 = (**(code **)(**(longlong **)(param_1 + 0x758) + 0x260))
                        (*(longlong **)(param_1 + 0x758));
      *(int *)(param_1 + 0xca0) = iVar2 + -1;
    }
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x758) + 0x260))(*(longlong **)(param_1 + 0x758))
    ;
    uVar3 = (**(code **)(**(longlong **)(param_1 + 0x758) + 0x260))(*(longlong **)(param_1 + 0x758))
    ;
    (**(code **)(**(longlong **)(param_1 + 0xd18) + 0xa0))
              (*(longlong **)(param_1 + 0xd18),iVar2 + -1,uVar3);
    plVar1 = *(longlong **)(param_1 + 0x758);
    iVar2 = (**(code **)(*plVar1 + 0x260))(plVar1);
    uVar3 = (**(code **)(**(longlong **)(param_1 + 0x758) + 0x260))(*(longlong **)(param_1 + 0x758))
    ;
    (**(code **)(*(longlong *)plVar1[0x94] + 0xa0))((longlong *)plVar1[0x94],iVar2 + -1,uVar3);
    FUN_01795670(param_1,1);
    (**(code **)(**(longlong **)(param_1 + 0xc38) + 0x268))(*(longlong **)(param_1 + 0xc38),0);
  }
  return;
}

