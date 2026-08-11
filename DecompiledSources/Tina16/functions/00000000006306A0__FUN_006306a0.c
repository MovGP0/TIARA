/* Ghidra address: 006306a0 */
/* Ghidra symbol: FUN_006306a0 */


undefined8 FUN_006306a0(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  char cVar11;
  char *pcVar12;
  char cVar13;
  uint uVar14;
  char acStack_1d [5];
  
  uVar4 = 0xfffffffe;
  if (((((param_1 != (longlong *)0x0) && (param_1[6] != 0)) && (param_1[7] != 0)) &&
      ((plVar2 = (longlong *)param_1[5], plVar2 != (longlong *)0x0 &&
       ((longlong *)*plVar2 == param_1)))) &&
     (((int)plVar2[1] - 0x3f34U < 0x20 &&
      ((uVar8 = *(uint *)(param_1 + 1), uVar8 != 0 ||
       (uVar4 = 0xfffffffb, 7 < *(uint *)((longlong)plVar2 + 0x4c))))))) {
    if ((int)plVar2[1] == 0x3f53) {
      uVar5 = *(uint *)((longlong)plVar2 + 0x84);
    }
    else {
      *(undefined4 *)(plVar2 + 1) = 0x3f53;
      uVar8 = (int)plVar2[9] << ((byte)*(uint *)((longlong)plVar2 + 0x4c) & 7);
      uVar10 = (ulonglong)uVar8;
      *(uint *)(plVar2 + 9) = uVar8;
      uVar8 = *(uint *)((longlong)plVar2 + 0x4c) & 0xfffffff8;
      *(uint *)((longlong)plVar2 + 0x4c) = uVar8;
      if (uVar8 < 8) {
        *(undefined4 *)((longlong)plVar2 + 0x84) = 0;
        uVar5 = 0;
      }
      else {
        uVar14 = (uVar8 - 8 >> 3) + 1;
        uVar6 = (ulonglong)(uVar14 & 7);
        uVar3 = 0;
        if (uVar8 - 8 < 0x38) {
          lVar7 = 0;
        }
        else {
          lVar7 = 0;
          do {
            acStack_1d[lVar7 + 1] = (char)uVar10;
            acStack_1d[lVar7 + 2] = (char)(uVar10 >> 8);
            acStack_1d[lVar7 + 3] = (char)(uVar10 >> 0x10);
            acStack_1d[lVar7 + 4] = (char)(uVar10 >> 0x18);
            *(undefined4 *)(&stack0xffffffffffffffe8 + lVar7) = 0;
            lVar7 = lVar7 + 8;
            uVar10 = 0;
          } while (uVar14 - uVar6 != lVar7);
          uVar10 = 0;
        }
        if (uVar6 != 0) {
          pcVar12 = acStack_1d + lVar7 + 1;
          lVar7 = -uVar6;
          do {
            *pcVar12 = (char)uVar10;
            uVar3 = (undefined4)(uVar10 >> 8);
            pcVar12 = pcVar12 + 1;
            lVar7 = lVar7 + 1;
            uVar10 = uVar10 >> 8;
          } while (lVar7 != 0);
        }
        *(undefined4 *)(plVar2 + 9) = uVar3;
        *(undefined4 *)((longlong)plVar2 + 0x4c) = 0;
        *(undefined4 *)((longlong)plVar2 + 0x84) = 0;
        uVar10 = 1;
        uVar5 = 0;
        do {
          cVar13 = '\0';
          if (1 < uVar5) {
            cVar13 = -1;
          }
          if (cVar13 == acStack_1d[uVar10]) {
            uVar5 = uVar5 + 1;
          }
          else {
            uVar5 = 4 - uVar5;
            if (acStack_1d[uVar10] != '\0') {
              uVar5 = 0;
            }
          }
        } while ((uVar10 < uVar14) && (uVar10 = uVar10 + 1, uVar5 < 4));
      }
      *(uint *)((longlong)plVar2 + 0x84) = uVar5;
      uVar8 = *(uint *)(param_1 + 1);
    }
    lVar7 = *param_1;
    uVar10 = 0;
    if ((uVar8 != 0) && (uVar5 < 4)) {
      uVar6 = 0;
      do {
        cVar13 = *(char *)(lVar7 + uVar6);
        cVar11 = '\0';
        if (1 < uVar5) {
          cVar11 = -1;
        }
        if (cVar11 == cVar13) {
          uVar5 = uVar5 + 1;
        }
        else {
          uVar5 = 4 - uVar5;
          if (cVar13 != '\0') {
            uVar5 = 0;
          }
        }
        uVar10 = uVar6 + 1;
      } while ((uVar10 < uVar8) && (uVar10 = uVar6 + 1, uVar6 = uVar10, uVar5 < 4));
    }
    *(uint *)((longlong)plVar2 + 0x84) = uVar5;
    *(int *)(param_1 + 1) = (int)param_1[1] - (int)uVar10;
    *param_1 = lVar7 + (uVar10 & 0xffffffff);
    iVar9 = (int)uVar10 + *(int *)((longlong)param_1 + 0xc);
    *(int *)((longlong)param_1 + 0xc) = iVar9;
    uVar4 = 0xfffffffd;
    if (uVar5 == 4) {
      uVar3 = *(undefined4 *)((longlong)param_1 + 0x1c);
      *(undefined8 *)((longlong)plVar2 + 0x34) = 0;
      *(undefined4 *)((longlong)plVar2 + 0x3c) = 0;
      *(undefined4 *)((longlong)plVar2 + 0x24) = 0;
      *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      param_1[4] = 0;
      if (*(uint *)(plVar2 + 2) != 0) {
        *(uint *)((longlong)param_1 + 0x4c) = *(uint *)(plVar2 + 2) & 1;
      }
      *(undefined4 *)((longlong)plVar2 + 0xc) = 0;
      *(undefined4 *)((longlong)plVar2 + 0x14) = 0;
      *(undefined4 *)((longlong)plVar2 + 0x1c) = 0x8000;
      plVar2[5] = 0;
      plVar2[9] = 0;
      plVar1 = plVar2 + 0xaa;
      plVar2[0x11] = (longlong)plVar1;
      plVar2[0xd] = (longlong)plVar1;
      plVar2[0xc] = (longlong)plVar1;
      plVar2[0x37c] = -0xffffffff;
      *(int *)((longlong)param_1 + 0xc) = iVar9;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar3;
      *(undefined4 *)(plVar2 + 1) = 0x3f3f;
      uVar4 = 0;
    }
  }
  return uVar4;
}

