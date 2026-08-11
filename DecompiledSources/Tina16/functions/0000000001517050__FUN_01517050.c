/* Ghidra address: 01517050 */
/* Ghidra symbol: FUN_01517050 */


undefined8 FUN_01517050(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 local_68;
  undefined8 local_60 [2];
  undefined8 local_50;
  int local_44;
  longlong local_40 [2];
  
  local_68 = 0;
  local_60[0] = 0;
  local_50 = 0;
  FUN_0153a7f0(local_40,&local_44,1,*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x408));
  plVar1 = *(longlong **)(param_1 + 8);
  if ((plVar1 != (longlong *)0x0) && (local_40[0] != 0)) {
    (**(code **)(*plVar1 + 0x90))(plVar1);
    if ((local_44 != 0) && (iVar5 = 0, iVar6 = local_44, -1 < local_44 + -1)) {
      do {
        lVar3 = FUN_01107b90(&PTR_FUN_01106728,1);
        plVar1 = *(longlong **)(local_40[0] + (longlong)iVar5 * 8);
        (**(code **)(*plVar1 + 0x288))(plVar1,local_60);
        FUN_00414ad0(lVar3 + 8,local_60[0]);
        if (*(longlong *)(lVar3 + 8) == 0) {
          FUN_0043f750(&local_68,iVar5);
          FUN_00416ba0(lVar3 + 8,L"LA_CHN_NAME",local_68);
          uVar4 = FUN_019a45d0();
          uVar4 = FUN_0198d430(uVar4);
          FUN_017bf050(*(undefined8 *)(local_40[0] + (longlong)iVar5 * 8),uVar4,
                       *(undefined8 *)(lVar3 + 8));
        }
        *(int *)(lVar3 + 0x80) = iVar5 % 0xb;
        *(int *)(lVar3 + 0x94) = iVar5;
        (**(code **)(**(longlong **)(param_1 + 8) + 0x80))
                  (*(longlong **)(param_1 + 8),*(undefined8 *)(lVar3 + 8),lVar3);
        iVar5 = iVar5 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    iVar6 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))(*(longlong **)(param_1 + 8));
    iVar6 = iVar6 + -2;
    if (-1 < iVar6) {
      do {
        iVar5 = 0;
        if (-1 < iVar6) {
          iVar7 = iVar6 + 1;
          do {
            cVar2 = FUN_01516e80(param_1,iVar5,iVar5 + 1);
            if (cVar2 != '\0') {
              (**(code **)(**(longlong **)(param_1 + 8) + 0xa0))
                        (*(longlong **)(param_1 + 8),iVar5,iVar5 + 1);
            }
            iVar5 = iVar5 + 1;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
        }
        iVar6 = iVar6 + -1;
      } while (iVar6 != -1);
    }
    iVar6 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))();
    iVar5 = 0;
    if (-1 < iVar6 + -1) {
      do {
        lVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))
                          (*(longlong **)(param_1 + 8),iVar5);
        FUN_00414b50(&local_50,*(undefined8 *)(lVar3 + 8));
        FUN_01516e00(&local_50);
        FUN_00414ad0(lVar3 + 8,local_50);
        (**(code **)(**(longlong **)(param_1 + 8) + 0x40))
                  (*(longlong **)(param_1 + 8),iVar5,local_50);
        *(int *)(lVar3 + 0x80) = iVar5 % 0xb;
        iVar5 = iVar5 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
  }
  uVar4 = *(undefined8 *)(param_1 + 8);
  FUN_00414560(&local_68,2);
  FUN_00414480(&local_50);
  return uVar4;
}

