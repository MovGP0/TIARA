/* Ghidra address: 01ce1d40 */
/* Ghidra symbol: FUN_01ce1d40 */


void FUN_01ce1d40(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  
  local_50 = 0;
  local_58 = 0;
  local_40[0] = 0;
  local_48 = 0;
  plVar2 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x28))();
  iVar5 = 0;
  if (-1 < iVar1 + -1) {
    do {
      lVar3 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x30))
                        (*(longlong **)(param_1 + 0x78),iVar5);
      iVar7 = *(int *)(*(longlong *)(lVar3 + 0xf8) + 0x10);
      iVar6 = 0;
      if (-1 < iVar7 + -1) {
        do {
          uVar4 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x30))
                            (*(longlong **)(param_1 + 0x78),iVar5);
          FUN_01cd6430(uVar4,local_40);
          FUN_0043f750(&local_48,iVar6);
          FUN_00416ad0(local_40,local_48);
          lVar3 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x30))
                            (*(longlong **)(param_1 + 0x78),iVar5);
          uVar4 = FUN_004aeac0(*(undefined8 *)(lVar3 + 0xf8),iVar6);
          (**(code **)(*plVar2 + 0x80))(plVar2,local_40[0],uVar4);
          iVar6 = iVar6 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      lVar3 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x30))
                        (*(longlong **)(param_1 + 0x78),iVar5);
      if (*(longlong *)(lVar3 + 0x118) != 0) {
        lVar3 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x30))
                          (*(longlong **)(param_1 + 0x78),iVar5);
        iVar7 = *(int *)(*(longlong *)(*(longlong *)(lVar3 + 0x118) + 0xf8) + 0x10);
        iVar6 = 0;
        if (-1 < iVar7 + -1) {
          do {
            lVar3 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x30))
                              (*(longlong **)(param_1 + 0x78),iVar5);
            FUN_01cd6430(*(undefined8 *)(lVar3 + 0x118),&local_50);
            FUN_0043f750(&local_58,iVar6);
            FUN_00416ad0(&local_50,local_58);
            lVar3 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x30))
                              (*(longlong **)(param_1 + 0x78),iVar5);
            uVar4 = FUN_004aeac0(*(undefined8 *)(*(longlong *)(lVar3 + 0x118) + 0xf8),iVar6);
            (**(code **)(*plVar2 + 0x80))(plVar2,local_50,uVar4);
            iVar6 = iVar6 + 1;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
        }
      }
      iVar5 = iVar5 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  (**(code **)(**(longlong **)(param_1 + 0x80) + 0x10))(*(longlong **)(param_1 + 0x80),plVar2);
  FUN_00410f20(plVar2);
  FUN_00414560(&local_58,4);
  return;
}

