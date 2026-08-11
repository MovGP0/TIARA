/* Ghidra address: 0179a260 */
/* Ghidra symbol: FUN_0179a260 */


void FUN_0179a260(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 local_40 [2];
  undefined *local_30;
  
  local_40[0] = 0;
  local_30 = (undefined *)0x0;
  plVar2 = (longlong *)FUN_007fc180(&PTR_FUN_017810f8,1,*(undefined8 *)PTR_DAT_02004030);
  iVar6 = *(int *)(*(longlong *)(param_1 + 0xd10) + 0x10);
  iVar5 = 0;
  if (-1 < iVar6 + -1) {
    do {
      uVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xd10),iVar5);
      cVar1 = FUN_004113d0(uVar3,&PTR_FUN_017a79c0);
      if (cVar1 != '\0') {
        lVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xd10),iVar5);
        FUN_004169a0(&local_30,lVar4 + 0x40);
        if (local_30 == (undefined *)0x0) {
          FUN_0043f750(local_40,iVar5);
          FUN_00416cd0(&local_30,3,L"(pin ",local_40[0],&DAT_0179a4ac);
        }
        uVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xd10),iVar5);
        (**(code **)(**(longlong **)(plVar2[0xda] + 0x4a0) + 0x80))
                  (*(longlong **)(plVar2[0xda] + 0x4a0),local_30,uVar3);
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  iVar6 = (**(code **)(*plVar2 + 0x2d0))(plVar2);
  if (iVar6 == 1) {
    iVar7 = 0;
    iVar5 = 0;
    iVar6 = *(int *)(*(longlong *)(param_1 + 0xd10) + 0x10);
    if (-1 < iVar6 + -1) {
      do {
        uVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xd10),iVar5);
        cVar1 = FUN_004113d0(uVar3,&PTR_FUN_017a79c0);
        if (cVar1 != '\0') {
          uVar3 = (**(code **)(**(longlong **)(plVar2[0xda] + 0x4a0) + 0x30))
                            (*(longlong **)(plVar2[0xda] + 0x4a0),iVar7);
          FUN_004aedb0(*(undefined8 *)(param_1 + 0xd10),iVar5,uVar3);
          iVar7 = iVar7 + 1;
        }
        iVar5 = iVar5 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    FUN_01795670(param_1,1);
  }
  FUN_00410f20(plVar2);
  FUN_00414480(local_40);
  FUN_00414480(&local_30);
  return;
}

