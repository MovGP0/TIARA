/* Ghidra address: 018d9f10 */
/* Ghidra symbol: FUN_018d9f10 */


void FUN_018d9f10(longlong param_1)

{
  double *pdVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  
  iVar3 = (*(int *)(*(longlong *)(param_1 + 0x160) + 0x78) + 0x168) % 0x168;
  *(int *)(*(longlong *)(param_1 + 0x160) + 0x78) = iVar3;
  uVar8 = FUN_0040bcd0((double)iVar3 * 0.017453292519943295);
  *(undefined8 *)(param_1 + 0x128) = uVar8;
  uVar8 = FUN_0040bdd0((double)*(int *)(*(longlong *)(param_1 + 0x160) + 0x78) *
                       0.017453292519943295);
  *(undefined8 *)(param_1 + 0x120) = uVar8;
  dVar9 = (double)FUN_0040c850(*(undefined8 *)(param_1 + 0x128));
  dVar10 = (double)FUN_0040c850(*(undefined8 *)(param_1 + 0x120));
  iVar3 = *(int *)(param_1 + 0x11c);
  iVar7 = 0;
  lVar6 = *(longlong *)(param_1 + 0x160);
  piVar2 = (int *)(lVar6 + 0x80);
  iVar5 = *(int *)(*(longlong *)(param_1 + 0x160) + 0x78);
  if (iVar5 < 0xb5) {
    if (iVar5 == 0xb4) {
      *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(lVar6 + 0x88);
      *(undefined4 *)(param_1 + 0x114) = *(undefined4 *)(lVar6 + 0x8c);
      *(int *)(param_1 + 0x110) = *(int *)(lVar6 + 0x88) - *piVar2;
      iVar7 = *(int *)(lVar6 + 0x8c) - *(int *)(lVar6 + 0x84);
    }
    else if (iVar5 - 1U == 0xffffffff) {
      *(int *)(param_1 + 0x118) = *piVar2;
      *(undefined4 *)(param_1 + 0x114) = *(undefined4 *)(lVar6 + 0x84);
      *(int *)(param_1 + 0x110) = *(int *)(lVar6 + 0x88) - *piVar2;
      iVar7 = *(int *)(lVar6 + 0x8c) - *(int *)(lVar6 + 0x84);
    }
    else if (iVar5 - 1U < 0x59) {
      *(int *)(param_1 + 0x118) = *piVar2;
      uVar4 = FUN_0040c770(((double)(*(int *)(lVar6 + 0x88) - *piVar2) -
                           (double)*(int *)(param_1 + 0x11c) * dVar10) / dVar9);
      *(undefined4 *)(param_1 + 0x110) = uVar4;
      iVar5 = FUN_0040c770((double)*(int *)(param_1 + 0x110) * dVar10);
      *(int *)(param_1 + 0x114) = *(int *)(lVar6 + 0x84) + iVar5;
      iVar5 = FUN_0040c770((double)*(int *)(param_1 + 0x11c) * dVar9);
      iVar7 = ((*(int *)(lVar6 + 0x8c) - *(int *)(param_1 + 0x114)) - iVar5) +
              *(int *)(param_1 + 0x11c);
      *(undefined8 *)(param_1 + 0x128) = 0x3ff0000000000000;
      *(undefined8 *)(param_1 + 0x120) = 0;
    }
    else if (iVar5 == 0x5a) {
      *(int *)(param_1 + 0x118) = *piVar2;
      *(undefined4 *)(param_1 + 0x114) = *(undefined4 *)(lVar6 + 0x8c);
      *(int *)(param_1 + 0x110) = *(int *)(lVar6 + 0x8c) - *(int *)(lVar6 + 0x84);
      iVar7 = *(int *)(lVar6 + 0x88) - *piVar2;
    }
    else {
      iVar7 = 0;
      if (iVar5 - 0x5bU < 0x59) {
        *(undefined4 *)(param_1 + 0x114) = *(undefined4 *)(lVar6 + 0x8c);
        uVar4 = FUN_0040c770(((double)(*(int *)(lVar6 + 0x88) - *piVar2) -
                             (double)*(int *)(param_1 + 0x11c) * dVar10) / dVar9);
        *(undefined4 *)(param_1 + 0x110) = uVar4;
        iVar5 = FUN_0040c770((double)*(int *)(param_1 + 0x110) * dVar9);
        *(int *)(param_1 + 0x118) = *piVar2 + iVar5;
        iVar5 = FUN_0040c770((double)*(int *)(param_1 + 0x11c) * dVar9 +
                             (double)*(int *)(param_1 + 0x110) * dVar10);
        iVar7 = ((*(int *)(lVar6 + 0x8c) - *(int *)(lVar6 + 0x84)) - iVar5) +
                *(int *)(param_1 + 0x11c);
        *(undefined8 *)(param_1 + 0x128) = 0xbff0000000000000;
        *(undefined8 *)(param_1 + 0x120) = 0;
      }
    }
  }
  else if (iVar5 - 0xb5U < 0x59) {
    *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(lVar6 + 0x88);
    uVar4 = FUN_0040c770(((double)(*(int *)(lVar6 + 0x88) - *piVar2) -
                         (double)*(int *)(param_1 + 0x11c) * dVar10) / dVar9);
    *(undefined4 *)(param_1 + 0x110) = uVar4;
    iVar5 = FUN_0040c770((double)*(int *)(param_1 + 0x110) * dVar10);
    *(int *)(param_1 + 0x114) = *(int *)(lVar6 + 0x8c) - iVar5;
    iVar5 = FUN_0040c770((double)*(int *)(param_1 + 0x11c) * dVar9);
    iVar7 = ((*(int *)(param_1 + 0x114) - *(int *)(lVar6 + 0x84)) - iVar5) +
            *(int *)(param_1 + 0x11c);
    *(undefined8 *)(param_1 + 0x128) = 0xbff0000000000000;
    *(undefined8 *)(param_1 + 0x120) = 0;
  }
  else if (iVar5 == 0x10e) {
    *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(lVar6 + 0x88);
    *(undefined4 *)(param_1 + 0x114) = *(undefined4 *)(lVar6 + 0x84);
    *(int *)(param_1 + 0x110) = *(int *)(lVar6 + 0x8c) - *(int *)(lVar6 + 0x84);
    iVar7 = *(int *)(lVar6 + 0x88) - *piVar2;
  }
  else if (iVar5 - 0x10fU < 0x59) {
    *(undefined4 *)(param_1 + 0x114) = *(undefined4 *)(lVar6 + 0x84);
    uVar4 = FUN_0040c770(((double)(*(int *)(lVar6 + 0x88) - *piVar2) -
                         (double)*(int *)(param_1 + 0x11c) * dVar10) / dVar9);
    *(undefined4 *)(param_1 + 0x110) = uVar4;
    iVar5 = FUN_0040c770((double)*(int *)(param_1 + 0x11c) * dVar10);
    *(int *)(param_1 + 0x118) = *piVar2 + iVar5;
    iVar5 = FUN_0040c770((double)*(int *)(param_1 + 0x110) * dVar10 +
                         (double)*(int *)(param_1 + 0x11c) * dVar9);
    iVar7 = ((*(int *)(lVar6 + 0x8c) - *(int *)(lVar6 + 0x84)) - iVar5) + *(int *)(param_1 + 0x11c);
    *(undefined8 *)(param_1 + 0x128) = 0x3ff0000000000000;
    *(undefined8 *)(param_1 + 0x120) = 0;
  }
  pdVar1 = (double *)(*(longlong *)(param_1 + 0x160) + 0x40);
  if ((*pdVar1 <= 0.0 && *pdVar1 != 0.0) && (*(char *)(param_1 + 0x178) != '\0')) {
    lVar6 = FUN_0040c770(*(double *)(*(longlong *)(param_1 + 0x160) + 0x40) * 2.0);
    if (lVar6 < 0) {
      lVar6 = -lVar6;
    }
    iVar3 = iVar3 + (int)lVar6;
  }
  if (*(char *)(param_1 + 0x178) == '\x01') {
    iVar5 = FUN_0040c770(*(double *)(param_1 + 0x128) * (double)(iVar7 - iVar3));
    *(int *)(param_1 + 0x114) = *(int *)(param_1 + 0x114) + iVar5;
    iVar3 = FUN_0040c770(*(double *)(param_1 + 0x120) * (double)(iVar7 - iVar3));
    *(int *)(param_1 + 0x118) = *(int *)(param_1 + 0x118) + iVar3;
  }
  else if (*(char *)(param_1 + 0x178) == '\x02') {
    iVar5 = FUN_0040c770((*(double *)(param_1 + 0x128) * (double)(iVar7 - iVar3)) / 2.0);
    *(int *)(param_1 + 0x114) = *(int *)(param_1 + 0x114) + iVar5;
    iVar3 = FUN_0040c770((*(double *)(param_1 + 0x120) * (double)(iVar7 - iVar3)) / 2.0);
    *(int *)(param_1 + 0x118) = *(int *)(param_1 + 0x118) + iVar3;
  }
  uVar8 = FUN_0040bcd0((double)*(int *)(*(longlong *)(param_1 + 0x160) + 0x78) *
                       0.017453292519943295);
  *(undefined8 *)(param_1 + 0x128) = uVar8;
  uVar8 = FUN_0040bdd0((double)*(int *)(*(longlong *)(param_1 + 0x160) + 0x78) *
                       0.017453292519943295);
  *(undefined8 *)(param_1 + 0x120) = uVar8;
  return;
}

