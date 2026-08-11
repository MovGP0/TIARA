/* Ghidra address: 00a0eed0 */
/* Ghidra symbol: FUN_00a0eed0 */


void FUN_00a0eed0(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  code *pcVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  bool bVar12;
  
  lVar2 = param_1[0x4a];
  iVar1 = *(int *)((longlong)param_1 + 0x20c);
  iVar5 = (int)param_1[0x42];
  if (iVar1 == 0) {
    bVar12 = iVar5 == 0;
  }
  else {
    bVar12 = (int)param_1[0x36] == 1;
  }
  bVar12 = !bVar12 || iVar1 != 0 && (0x3f < iVar5 || iVar5 < iVar1);
  if ((*(int *)((longlong)param_1 + 0x214) != 0) &&
     ((int)param_1[0x43] != *(int *)((longlong)param_1 + 0x214) + -1)) {
    bVar12 = true;
  }
  if ((bVar12) || (0xd < (int)param_1[0x43])) {
    lVar10 = *param_1;
    *(undefined4 *)(lVar10 + 0x28) = 0x10;
    *(int *)(lVar10 + 0x2c) = iVar1;
    *(int *)(*param_1 + 0x30) = (int)param_1[0x42];
    *(undefined4 *)(*param_1 + 0x34) = *(undefined4 *)((longlong)param_1 + 0x214);
    *(int *)(*param_1 + 0x38) = (int)param_1[0x43];
    (**(code **)*param_1)(param_1);
  }
  iVar5 = (int)param_1[0x36];
  if (0 < iVar5) {
    lVar10 = 0;
    do {
      iVar5 = *(int *)(param_1[lVar10 + 0x37] + 4);
      lVar9 = param_1[0x18];
      if ((iVar1 != 0) && (*(int *)(lVar9 + (longlong)iVar5 * 0x100) < 0)) {
        lVar11 = *param_1;
        *(undefined4 *)(lVar11 + 0x28) = 0x73;
        *(int *)(lVar11 + 0x2c) = iVar5;
        *(undefined4 *)(*param_1 + 0x30) = 0;
        (**(code **)(*param_1 + 8))(param_1,0xffffffff);
      }
      iVar8 = *(int *)((longlong)param_1 + 0x20c);
      if (iVar8 <= (int)param_1[0x42]) {
        lVar11 = (longlong)iVar8 + -1;
        lVar9 = lVar9 + (longlong)iVar5 * 0x100;
        do {
          iVar4 = *(int *)(lVar9 + 4 + lVar11 * 4);
          if (iVar4 < 0) {
            iVar4 = 0;
          }
          if (*(int *)((longlong)param_1 + 0x214) != iVar4) {
            lVar3 = *param_1;
            *(undefined4 *)(lVar3 + 0x28) = 0x73;
            *(int *)(lVar3 + 0x2c) = iVar5;
            *(int *)(*param_1 + 0x30) = iVar8;
            (**(code **)(*param_1 + 8))(param_1,0xffffffff);
          }
          *(int *)(lVar9 + 4 + lVar11 * 4) = (int)param_1[0x43];
          lVar11 = lVar11 + 1;
          iVar8 = iVar8 + 1;
        } while (lVar11 < (int)param_1[0x42]);
      }
      lVar10 = lVar10 + 1;
      iVar5 = (int)param_1[0x36];
    } while (lVar10 < iVar5);
  }
  pcVar6 = FUN_00a0f850;
  if (iVar1 == 0) {
    pcVar6 = FUN_00a0f6d0;
  }
  pcVar7 = FUN_00a0f3f0;
  if (iVar1 == 0) {
    pcVar7 = FUN_00a0f160;
  }
  if (*(int *)((longlong)param_1 + 0x214) != 0) {
    pcVar7 = pcVar6;
  }
  *(code **)(lVar2 + 8) = pcVar7;
  if (0 < iVar5) {
    lVar10 = 0;
    do {
      if (iVar1 == 0) {
        if (*(int *)((longlong)param_1 + 0x214) == 0) {
          lVar9 = (longlong)*(int *)(param_1[lVar10 + 0x37] + 0x14);
          FUN_00a0fd40(param_1,1,lVar9,lVar2 + 0x38 + lVar9 * 8);
        }
      }
      else {
        iVar5 = *(int *)(param_1[lVar10 + 0x37] + 0x18);
        FUN_00a0fd40(param_1,0,iVar5,lVar2 + 0x38 + (longlong)iVar5 * 8);
        *(undefined8 *)(lVar2 + 0x58) = *(undefined8 *)(lVar2 + 0x38 + (longlong)iVar5 * 8);
      }
      *(undefined4 *)(lVar2 + 0x24 + lVar10 * 4) = 0;
      lVar10 = lVar10 + 1;
    } while (lVar10 < (int)param_1[0x36]);
  }
  *(undefined8 *)(lVar2 + 0x18) = 0;
  *(undefined4 *)(lVar2 + 0x10) = 0;
  *(undefined4 *)(lVar2 + 0x20) = 0;
  *(int *)(lVar2 + 0x34) = (int)param_1[0x2e];
  return;
}

