/* Ghidra address: 013ce640 */
/* Ghidra symbol: FUN_013ce640 */


longlong * FUN_013ce640(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  undefined8 local_40 [2];
  
  local_40[0] = 0;
  lVar4 = *(longlong *)(param_1 + 0x950);
  if (param_3 != '\0') {
    if (param_2 == 1) {
      lVar4 = *(longlong *)(param_1 + 0x700);
    }
    else {
      lVar4 = *(longlong *)(param_1 + 0x748);
    }
  }
  plVar2 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  if (*(int *)(param_1 + 0x938) == 0) {
    iVar1 = (**(code **)(**(longlong **)(lVar4 + 0x4d8) + 0x28))();
    iVar3 = 0;
    if (-1 < iVar1 + -1) {
      do {
        (**(code **)(**(longlong **)(lVar4 + 0x4d8) + 0x18))
                  (*(longlong **)(lVar4 + 0x4d8),local_40,iVar3);
        (**(code **)(*plVar2 + 0x78))(plVar2,local_40[0]);
        iVar3 = iVar3 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  else {
    iVar1 = (**(code **)(**(longlong **)(lVar4 + 0x4e8) + 0x28))();
    iVar3 = 0;
    if (-1 < iVar1 + -1) {
      do {
        (**(code **)(**(longlong **)(lVar4 + 0x4e8) + 0x18))
                  (*(longlong **)(lVar4 + 0x4e8),local_40,iVar3);
        (**(code **)(*plVar2 + 0x78))(plVar2,local_40[0]);
        iVar3 = iVar3 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  FUN_00414480(local_40);
  return plVar2;
}

