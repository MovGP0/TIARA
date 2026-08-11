/* Ghidra address: 01ce1520 */
/* Ghidra symbol: FUN_01ce1520 */


void FUN_01ce1520(longlong param_1,int param_2,int param_3,int param_4,int param_5)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  bVar2 = *(char *)(param_1 + 0x58) - 1;
  if (bVar2 != 0xff) {
    if (bVar2 < 2) {
      iVar4 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x28))(*(longlong **)(param_1 + 0x70));
      iVar11 = 1;
      if (iVar4 < 1) {
        return;
      }
      do {
        uVar6 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x30))
                          (*(longlong **)(param_1 + 0x70),iVar11 + -1);
        iVar10 = param_4;
        if (param_2 < param_4) {
          iVar10 = param_2;
        }
        iVar9 = param_4;
        if (param_4 < param_2) {
          iVar9 = param_2;
        }
        FUN_01cd2f30(uVar6,iVar10,iVar9);
        iVar11 = iVar11 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      return;
    }
    if (4 < (byte)(*(char *)(param_1 + 0x58) - 3U)) {
      return;
    }
  }
  bVar1 = false;
  iVar4 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x28))(*(longlong **)(param_1 + 0x80));
  iVar11 = 1;
  if (0 < iVar4) {
    do {
      lVar5 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x30))
                        (*(longlong **)(param_1 + 0x80),iVar11 + -1);
      if (*(char *)(lVar5 + 0x10) != '\0') {
        bVar1 = true;
      }
      iVar11 = iVar11 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  iVar4 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x28))(*(longlong **)(param_1 + 0x70));
  iVar11 = 1;
  if (0 < iVar4) {
    do {
      lVar5 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x30))
                        (*(longlong **)(param_1 + 0x70),iVar11 + -1);
      if (*(char *)(lVar5 + 0x10) != '\0') {
        bVar1 = true;
      }
      iVar11 = iVar11 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  iVar4 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x28))(*(longlong **)(param_1 + 0x78));
  iVar11 = 1;
  if (0 < iVar4) {
    do {
      lVar5 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x30))
                        (*(longlong **)(param_1 + 0x78),iVar11 + -1);
      if (*(char *)(lVar5 + 0x10) == '\0') {
        lVar5 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x30))
                          (*(longlong **)(param_1 + 0x78),iVar11 + -1);
        if ((*(longlong *)(lVar5 + 0x118) != 0) &&
           (lVar5 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x30))
                              (*(longlong **)(param_1 + 0x78),iVar11 + -1),
           *(char *)(*(longlong *)(lVar5 + 0x118) + 0x10) != '\0')) goto LAB_01ce16a3;
      }
      else {
LAB_01ce16a3:
        bVar1 = true;
      }
      iVar11 = iVar11 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  if (bVar1) {
    iVar4 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x28))(*(longlong **)(param_1 + 0x70));
    iVar11 = 1;
    if (0 < iVar4) {
      do {
        uVar6 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x30))
                          (*(longlong **)(param_1 + 0x70),iVar11 + -1);
        lVar5 = FUN_004113f0(uVar6,&DAT_01ccbf00);
        if (*(char *)(lVar5 + 0x10) != '\0') {
          iVar10 = param_4;
          if (param_2 < param_4) {
            iVar10 = param_2;
          }
          iVar9 = param_4;
          if (param_4 < param_2) {
            iVar9 = param_2;
          }
          FUN_01cd2f30(lVar5,iVar10,iVar9);
        }
        iVar11 = iVar11 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    iVar4 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x28))(*(longlong **)(param_1 + 0x78));
    iVar11 = 1;
    if (0 < iVar4) {
      do {
        uVar6 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x30))
                          (*(longlong **)(param_1 + 0x78),iVar11 + -1);
        lVar5 = FUN_004113f0(uVar6,&DAT_01ccbf00);
        if (*(char *)(lVar5 + 0x10) != '\0') {
          iVar10 = param_5;
          if (param_5 < param_3) {
            iVar10 = param_3;
          }
          iVar9 = param_5;
          if (param_3 < param_5) {
            iVar9 = param_3;
          }
          FUN_01cd2f30(lVar5,iVar10,iVar9);
        }
        lVar5 = *(longlong *)(lVar5 + 0x118);
        if ((lVar5 != 0) && (*(char *)(lVar5 + 0x10) != '\0')) {
          iVar10 = param_5;
          if (param_5 < param_3) {
            iVar10 = param_3;
          }
          iVar9 = param_5;
          if (param_3 < param_5) {
            iVar9 = param_3;
          }
          FUN_01cd2f30(lVar5,iVar10,iVar9);
        }
        iVar11 = iVar11 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  else {
    iVar4 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x28))(*(longlong **)(param_1 + 0x70));
    iVar11 = 1;
    if (0 < iVar4) {
      do {
        plVar7 = (longlong *)
                 (**(code **)(**(longlong **)(param_1 + 0x70) + 0x30))
                           (*(longlong **)(param_1 + 0x70),iVar11 + -1);
        cVar3 = (**(code **)(*plVar7 + 0x58))(plVar7);
        if (cVar3 != '\0') {
          uVar6 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x30))
                            (*(longlong **)(param_1 + 0x70),iVar11 + -1);
          iVar10 = param_4;
          if (param_2 < param_4) {
            iVar10 = param_2;
          }
          iVar9 = param_4;
          if (param_4 < param_2) {
            iVar9 = param_2;
          }
          FUN_01cd2f30(uVar6,iVar10,iVar9);
        }
        iVar11 = iVar11 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    iVar4 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x28))(*(longlong **)(param_1 + 0x78));
    iVar11 = 1;
    if (0 < iVar4) {
      do {
        iVar10 = iVar11 + -1;
        plVar7 = (longlong *)
                 (**(code **)(**(longlong **)(param_1 + 0x78) + 0x30))
                           (*(longlong **)(param_1 + 0x78),iVar10);
        cVar3 = (**(code **)(*plVar7 + 0x58))(plVar7);
        if (cVar3 != '\0') {
          uVar6 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x30))
                            (*(longlong **)(param_1 + 0x78),iVar10);
          iVar9 = param_5;
          if (param_5 < param_3) {
            iVar9 = param_3;
          }
          iVar8 = param_5;
          if (param_3 < param_5) {
            iVar8 = param_3;
          }
          FUN_01cd2f30(uVar6,iVar9,iVar8);
          lVar5 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x30))
                            (*(longlong **)(param_1 + 0x78),iVar10);
          if (*(longlong *)(lVar5 + 0x118) != 0) {
            lVar5 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x30))
                              (*(longlong **)(param_1 + 0x78),iVar10);
            iVar10 = param_5;
            if (param_5 < param_3) {
              iVar10 = param_3;
            }
            iVar9 = param_5;
            if (param_3 < param_5) {
              iVar9 = param_3;
            }
            FUN_01cd2f30(*(undefined8 *)(lVar5 + 0x118),iVar10,iVar9);
          }
        }
        iVar11 = iVar11 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  return;
}

