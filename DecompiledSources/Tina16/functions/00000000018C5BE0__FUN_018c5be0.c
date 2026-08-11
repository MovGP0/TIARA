/* Ghidra address: 018c5be0 */
/* Ghidra symbol: FUN_018c5be0 */


bool FUN_018c5be0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  
  *(undefined8 *)(param_1 + 0x100) = 0;
  (**(code **)(**(longlong **)(param_1 + 0x38) + 0x30))(*(longlong **)(param_1 + 0x38));
  *(undefined1 *)(*(longlong *)(param_1 + 0x38) + 8) = 1;
  uVar9 = FUN_00448e70();
  *(undefined8 *)(param_1 + 0x50) = uVar9;
  uVar9 = FUN_00448ea0();
  *(undefined8 *)(param_1 + 0x58) = uVar9;
  *(undefined1 *)(param_1 + 0x48) = 1;
  *(undefined1 *)(param_1 + 0xf1) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  (**(code **)**(undefined8 **)(param_1 + 0x98))(*(undefined8 **)(param_1 + 0x98));
  iVar4 = FUN_0196f500();
  iVar6 = 0;
  if (-1 < iVar4 + -1) {
    do {
      uVar9 = FUN_0196f4e0(*(undefined8 *)(param_1 + 0x40),iVar6);
      cVar3 = FUN_004113d0(uVar9,&PTR_FUN_01934910);
      if (cVar3 != '\0') {
        uVar9 = FUN_0196f4e0(*(undefined8 *)(param_1 + 0x40),iVar6);
        *(undefined8 *)(param_1 + 0x128) = uVar9;
        FUN_018c7200(param_1,*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x1b0),0);
        FUN_018c7200(param_1,*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x1b0));
      }
      iVar6 = iVar6 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  iVar4 = FUN_0196f500();
  iVar6 = 0;
  if (-1 < iVar4 + -1) {
    do {
      uVar9 = FUN_0196f4e0(*(undefined8 *)(param_1 + 0x40),iVar6);
      cVar3 = FUN_004113d0(uVar9,&PTR_FUN_01934910);
      if (cVar3 != '\0') {
        uVar9 = FUN_0196f4e0(*(undefined8 *)(param_1 + 0x40),iVar6);
        *(undefined8 *)(param_1 + 0x128) = uVar9;
        lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x160);
        if ((lVar5 != 0) && (lVar5 == *(longlong *)(*(longlong *)(param_1 + 0x128) + 0x198))) {
          plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x40) + 0x1b0);
          (**(code **)(*plVar1 + 0x78))
                    (plVar1,L"Cannot use the same dataset for Report.DataSet and Page.DataSet");
          break;
        }
        iVar8 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x128) + 0x240) + 0x10);
        iVar7 = 0;
        if (-1 < iVar8 + -1) {
          do {
            lVar5 = FUN_004aeac0(*(undefined8 *)(*(longlong *)(param_1 + 0x128) + 0x240),iVar7);
            if ((lVar5 != 0) && (*(longlong *)(lVar5 + 600) != 0)) {
              lVar2 = *(longlong *)(param_1 + 0x40);
              if (*(longlong *)(lVar2 + 0x160) == *(longlong *)(lVar5 + 600)) {
                (**(code **)(**(longlong **)(lVar2 + 0x1b0) + 0x78))
                          (*(longlong **)(lVar2 + 0x1b0),
                           L"Cannot use the same dataset for Report.DataSet and Band.DataSet");
                break;
              }
              if (*(longlong *)(*(longlong *)(param_1 + 0x128) + 0x198) ==
                  *(longlong *)(lVar5 + 600)) {
                (**(code **)(**(longlong **)(lVar2 + 0x1b0) + 0x78))
                          (*(longlong **)(lVar2 + 0x1b0),
                           L"Cannot use the same dataset for Page.DataSet and Band.DataSet");
                break;
              }
            }
            iVar7 = iVar7 + 1;
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
        }
      }
      iVar6 = iVar6 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x40) + 0x1b0);
  iVar4 = (**(code **)(*plVar1 + 0x28))(plVar1);
  return iVar4 == 0;
}

