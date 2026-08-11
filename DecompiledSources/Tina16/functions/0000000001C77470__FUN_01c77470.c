/* Ghidra address: 01c77470 */
/* Ghidra symbol: FUN_01c77470 */


void FUN_01c77470(longlong param_1,char param_2)

{
  byte bVar1;
  longlong *plVar2;
  char cVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  int iVar8;
  short sVar9;
  int iVar10;
  uint uVar11;
  undefined8 local_30;
  
  local_30 = 0;
  lVar5 = FUN_01c8a330(param_1,*(undefined8 *)(param_1 + 0x27a8));
  if ((*(longlong *)(param_1 + 0x2788) != 0) &&
     (lVar6 = FUN_01c8a3c0(param_1,*(longlong *)(param_1 + 0x2788)), lVar6 != 0)) {
    if ((*(longlong *)(param_1 + 0x2768) != 0) &&
       ((*(char *)(*(longlong *)(param_1 + 0x2768) + 0x70) == '\x02' &&
        (*(longlong *)PTR_DAT_020057d0 != 0)))) {
      uVar4 = FUN_01c681a0(*(undefined8 *)(*(longlong *)PTR_DAT_020057d0 + 0x860));
      *(undefined4 *)(*(longlong *)(param_1 + 0x2768) + 0x98) = uVar4;
      uVar4 = FUN_00c08890(*(undefined8 *)(*(longlong *)PTR_DAT_020057d0 + 0x860));
      *(undefined4 *)(*(longlong *)(param_1 + 0x2768) + 0x9c) = uVar4;
      uVar4 = FUN_00c0faf0(*(undefined8 *)(*(longlong *)PTR_DAT_020057d0 + 0x860));
      lVar6 = *(longlong *)(param_1 + 0x2768);
      *(undefined4 *)(lVar6 + 0xa0) = uVar4;
      if (*(char *)(lVar6 + 0x115) == '\0') {
        plVar2 = *(longlong **)(*(longlong *)(*(longlong *)PTR_DAT_020057d0 + 0x860) + 0x4e8);
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
        (**(code **)(**(longlong **)(lVar6 + 0xb0) + 0x60))(*(longlong **)(lVar6 + 0xb0),local_30);
        if ((*(char *)(*(longlong *)(param_1 + 0x2768) + 0x111) != '\0') &&
           (*(char *)(*(longlong *)(*(longlong *)PTR_DAT_020057d0 + 0x860) + 0x5e0) != '\0')) {
          *(undefined1 *)(*(longlong *)(param_1 + 0x2768) + 0x111) = 0;
        }
      }
    }
    lVar6 = *(longlong *)(param_1 + 0x2768);
    if (((lVar6 != 0) && (*(char *)(lVar6 + 0x70) == '\x03')) &&
       (*(longlong *)PTR_DAT_02005100 != 0)) {
      (**(code **)(**(longlong **)(lVar6 + 0xb0) + 0x10))
                (*(longlong **)(lVar6 + 0xb0),
                 *(undefined8 *)(*(longlong *)(*(longlong *)PTR_DAT_02005100 + 0x740) + 0x4e8));
    }
    lVar6 = *(longlong *)(param_1 + 0x2768);
    if (((lVar6 != 0) && (*(char *)(lVar6 + 0x70) == '\x04')) &&
       (*(longlong *)PTR_DAT_02005100 != 0)) {
      (**(code **)(**(longlong **)(lVar6 + 0xb0) + 0x10))
                (*(longlong **)(lVar6 + 0xb0),
                 *(undefined8 *)(*(longlong *)(*(longlong *)PTR_DAT_02005100 + 0x740) + 0x4e8));
    }
    lVar6 = FUN_01c8a3c0(param_1,*(undefined8 *)(param_1 + 0x2788));
    cVar3 = FUN_01d0fb00(lVar6 + 0x40,PTR_DAT_02004010);
    if (cVar3 == '\0') {
      FUN_0199e310(*(undefined8 *)(lVar6 + 0x10),0,1,1);
    }
    FUN_00417c40(lVar6 + 0x40,PTR_DAT_02004010,&DAT_01d0d0b8);
    if (lVar5 != 0) {
      *(undefined4 *)(lVar5 + 0x97c) = *(undefined4 *)(param_1 + 0x1b60);
      *(undefined4 *)(lVar5 + 0x980) = *(undefined4 *)(param_1 + 0x1b64);
      *(undefined4 *)(lVar5 + 0x984) = *(undefined4 *)(param_1 + 0x1924);
      *(undefined *)(lVar5 + 0x988) = *PTR_DAT_02001e78;
    }
  }
  uVar7 = FUN_0065b870(*(undefined8 *)(param_1 + 0xa10));
  uVar7 = FUN_0198b200(0,&PTR_FUN_01984d18,0,uVar7);
  *(undefined8 *)(param_1 + 0x27a8) = uVar7;
  *(undefined8 *)(param_1 + 0x2788) = uVar7;
  *(undefined8 *)(param_1 + 0x2768) = 0;
  *(undefined8 *)(param_1 + 0x2770) = 0;
  FUN_01d0e500();
  iVar8 = 1;
  iVar10 = (int)*(short *)PTR_DAT_02004a38;
  if (0 < iVar10) {
    do {
      lVar5 = FUN_01d3a780(*(undefined8 *)PTR_DAT_020036c8,iVar8);
      uVar11 = (uint)*(byte *)(lVar5 + 0xb6);
      sVar9 = 0;
      if (-1 < (int)(uVar11 - 1)) {
        do {
          lVar5 = FUN_01d3a780(*(undefined8 *)PTR_DAT_020036c8,iVar8);
          lVar5 = FUN_01d3a410(*(undefined8 *)PTR_DAT_02001b18,*(short *)(lVar5 + 0x9e) + sVar9);
          bVar1 = *(byte *)(lVar5 + 0x33);
          if (bVar1 < 8) {
            if (bVar1 == 7) {
LAB_01c77895:
              *(undefined2 *)(lVar5 + 0x38) = 0x3f01;
              *(undefined2 *)(lVar5 + 0x4d) = 0x3f01;
            }
            else if (bVar1 < 4) {
              if (bVar1 == 3) {
LAB_01c7788b:
                *(undefined8 *)(lVar5 + 0x3c) = *(undefined8 *)(lVar5 + 0x34);
              }
              else if (bVar1 == 1) {
                FUN_00415020(lVar5 + 0x53,lVar5 + 0x34,0x1e);
              }
              else if (bVar1 == 2) {
                *(undefined2 *)(lVar5 + 0x36) = *(undefined2 *)(lVar5 + 0x34);
              }
            }
            else {
              if (bVar1 == 4) goto LAB_01c77895;
              if (bVar1 == 6) goto LAB_01c7788b;
            }
          }
          else if (bVar1 == 8) {
            *(undefined1 *)(lVar5 + 0x35) = *(undefined1 *)(lVar5 + 0x34);
          }
          else if (bVar1 == 9) {
            FUN_00415020(lVar5 + 0x53,lVar5 + 0x34,0x1e);
          }
          else if (bVar1 == 0xd) {
            *(undefined8 *)(lVar5 + 0x3e) = *(undefined8 *)(lVar5 + 0x36);
            *(undefined1 *)(lVar5 + 0x35) = *(undefined1 *)(lVar5 + 0x34);
          }
          else if (bVar1 == 0x10) {
            *(undefined8 *)(lVar5 + 0x3c) = *(undefined8 *)(lVar5 + 0x34);
          }
          sVar9 = sVar9 + 1;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      iVar8 = iVar8 + 1;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  if (param_2 != '\0') {
    FUN_0199e310(*(undefined8 *)(param_1 + 0x27a8),0,0,0);
  }
  (**(code **)(**(longlong **)(param_1 + 0xa10) + 0x180))(*(longlong **)(param_1 + 0xa10));
  FUN_01c7d780(param_1,0);
  if ((*PTR_DAT_020052b8 != '\0') && (*(longlong *)PTR_DAT_02004ec8 != 0)) {
    FUN_00f49430(*(undefined8 *)PTR_DAT_02004ec8);
  }
  FUN_0082a6c0(*(undefined8 *)(param_1 + 0xd08),0);
  FUN_01c87e40(param_1,0);
  FUN_01c8ab30(param_1,0,*(undefined8 *)(param_1 + 0x2788));
  FUN_014a1560();
  FUN_00414480(&local_30);
  return;
}

