/* Ghidra address: 0179f700 */
/* Ghidra symbol: FUN_0179f700 */


void FUN_0179f700(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 local_30 [2];
  
  local_30[0] = FUN_00498310(param_4,param_5);
  iVar2 = FUN_0068c230(*(undefined8 *)(param_1 + 0x758),local_30,0);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x758) + 0x4a0);
  iVar3 = (**(code **)(*plVar1 + 0x28))(plVar1);
  if (iVar3 + -1 <= iVar2) {
    iVar2 = iVar3 + -1;
  }
  if (-1 < iVar2) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x758) + 0x4a0);
    iVar3 = (**(code **)(*plVar1 + 0x28))(plVar1);
    if (iVar2 <= iVar3) {
      iVar3 = (**(code **)(**(longlong **)(param_1 + 0x758) + 0x260))
                        (*(longlong **)(param_1 + 0x758));
      if (*(int *)(param_1 + 0xca0) == iVar3) {
        *(int *)(param_1 + 0xca0) = iVar2;
      }
      uVar4 = (**(code **)(**(longlong **)(param_1 + 0x758) + 0x260))
                        (*(longlong **)(param_1 + 0x758));
      (**(code **)(**(longlong **)(param_1 + 0xd18) + 0xa0))
                (*(longlong **)(param_1 + 0xd18),iVar2,uVar4);
      plVar1 = *(longlong **)(param_1 + 0x758);
      uVar4 = (**(code **)(*plVar1 + 0x260))(plVar1);
      (**(code **)(*(longlong *)plVar1[0x94] + 0xa0))((longlong *)plVar1[0x94],iVar2,uVar4);
      FUN_01795670(param_1,1);
      (**(code **)(**(longlong **)(param_1 + 0xc38) + 0x268))(*(longlong **)(param_1 + 0xc38),0);
    }
  }
  return;
}

