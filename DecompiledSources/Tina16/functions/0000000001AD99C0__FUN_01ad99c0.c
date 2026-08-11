/* Ghidra address: 01ad99c0 */
/* Ghidra symbol: FUN_01ad99c0 */


void FUN_01ad99c0(undefined8 param_1,longlong param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined8 uVar13;
  longlong local_60 [7];
  
  cVar1 = FUN_01ad1090(param_1,param_2,local_60);
  if (cVar1 != '\0') {
    uVar4 = FUN_01cd6670(param_2);
    if ((byte)uVar4 < 8) {
      bVar9 = ((int)CONCAT71((int7)((ulonglong)uVar4 >> 8),1) << ((byte)uVar4 & 0x1f) & 0x51U) != 0;
    }
    else {
      bVar9 = false;
    }
    if (bVar9) {
      if (*(char *)(local_60[0] + 0x58) == '\0') {
        uVar4 = FUN_004aeac0(*(undefined8 *)(param_2 + 0xf8),0);
        dVar10 = (double)FUN_01ab2a30(uVar4);
        lVar5 = FUN_004aeac0(*(undefined8 *)(param_2 + 0xf8),0);
        dVar10 = dVar10 + *(double *)(lVar5 + 0xf0);
        uVar4 = FUN_004aeac0(*(undefined8 *)(param_2 + 0xf8),0);
        dVar11 = (double)FUN_01ab2a60(uVar4);
        lVar5 = FUN_004aeac0(*(undefined8 *)(param_2 + 0xf8),0);
        dVar11 = dVar11 + *(double *)(lVar5 + 0xf0);
        iVar8 = *(int *)(*(longlong *)(param_2 + 0xf8) + 0x10);
        iVar6 = 2;
        if (1 < iVar8) {
          iVar8 = iVar8 + -1;
          do {
            iVar7 = iVar6 + -1;
            uVar4 = FUN_004aeac0(*(undefined8 *)(param_2 + 0xf8),iVar7);
            dVar12 = (double)FUN_01ab2a30(uVar4);
            lVar5 = FUN_004aeac0(*(undefined8 *)(param_2 + 0xf8),iVar7);
            dVar10 = (double)FUN_00b90650(dVar10,dVar12 + *(double *)(lVar5 + 0xf0));
            uVar4 = FUN_004aeac0(*(undefined8 *)(param_2 + 0xf8),iVar7);
            dVar12 = (double)FUN_01ab2a60(uVar4);
            lVar5 = FUN_004aeac0(*(undefined8 *)(param_2 + 0xf8),iVar7);
            dVar11 = (double)FUN_00b90620(dVar11,dVar12 + *(double *)(lVar5 + 0xf0));
            iVar6 = iVar6 + 1;
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
        }
        uVar4 = FUN_00b90620(*(double *)(param_2 + 0xb8) -
                             (*(double *)(param_2 + 0xc0) - *(double *)(param_2 + 0xb8)) / 2.0,
                             dVar10);
        uVar13 = FUN_00b90650(*(double *)(param_2 + 0xc0) +
                              (*(double *)(param_2 + 0xc0) - *(double *)(param_2 + 0xb8)) / 2.0,
                              dVar11);
        *(undefined8 *)(param_2 + 0xb8) = uVar4;
        *(undefined8 *)(param_2 + 0xc0) = uVar13;
        *(undefined8 *)(param_2 + 200) = *(undefined8 *)(param_2 + 0xb8);
        *(undefined8 *)(param_2 + 0xd0) = *(undefined8 *)(param_2 + 0xc0);
        uVar2 = FUN_01ccdde0(param_2);
        uVar3 = FUN_01ccde00(param_2);
        FUN_01cd43b0(param_2,uVar2,uVar3);
        *(undefined8 *)(param_2 + 200) = *(undefined8 *)(param_2 + 0xb8);
        *(undefined8 *)(param_2 + 0xd0) = *(undefined8 *)(param_2 + 0xc0);
      }
      else {
        FUN_01ad85f0(param_1,param_2,0);
      }
    }
    else {
      uVar4 = FUN_01cd6670(param_2);
      if ((byte)uVar4 < 8) {
        bVar9 = ((int)CONCAT71((int7)((ulonglong)uVar4 >> 8),1) << ((byte)uVar4 & 0x1f) & 0xa6U) !=
                0;
      }
      else {
        bVar9 = false;
      }
      if (bVar9) {
        if (*(char *)(local_60[0] + 0x58) == '\0') {
          lVar5 = FUN_004aeac0(*(undefined8 *)(param_2 + 0xf8),0);
          uVar4 = *(undefined8 *)(lVar5 + 0x90);
          lVar5 = FUN_004aeac0(*(undefined8 *)(param_2 + 0xf8),0);
          uVar13 = *(undefined8 *)(lVar5 + 0x98);
          iVar8 = *(int *)(*(longlong *)(param_2 + 0xf8) + 0x10);
          iVar6 = 2;
          if (1 < iVar8) {
            iVar8 = iVar8 + -1;
            do {
              lVar5 = FUN_004aeac0(*(undefined8 *)(param_2 + 0xf8),iVar6 + -1);
              uVar4 = FUN_00b90650(uVar4,*(undefined8 *)(lVar5 + 0x90));
              lVar5 = FUN_004aeac0(*(undefined8 *)(param_2 + 0xf8),iVar6 + -1);
              uVar13 = FUN_00b90620(uVar13,*(undefined8 *)(lVar5 + 0x98));
              iVar6 = iVar6 + 1;
              iVar8 = iVar8 + -1;
            } while (iVar8 != 0);
          }
          uVar4 = FUN_00b90620(*(double *)(param_2 + 0xb8) -
                               (*(double *)(param_2 + 0xc0) - *(double *)(param_2 + 0xb8)) / 2.0,
                               uVar4);
          uVar13 = FUN_00b90650(*(double *)(param_2 + 0xc0) +
                                (*(double *)(param_2 + 0xc0) - *(double *)(param_2 + 0xb8)) / 2.0,
                                uVar13);
          *(undefined8 *)(param_2 + 0xb8) = uVar4;
          *(undefined8 *)(param_2 + 0xc0) = uVar13;
          *(undefined8 *)(param_2 + 200) = *(undefined8 *)(param_2 + 0xb8);
          *(undefined8 *)(param_2 + 0xd0) = *(undefined8 *)(param_2 + 0xc0);
          uVar2 = FUN_01ccdde0(param_2);
          uVar3 = FUN_01ccde00(param_2);
          FUN_01cd43b0(param_2,uVar2,uVar3);
          *(undefined8 *)(param_2 + 200) = *(undefined8 *)(param_2 + 0xb8);
          *(undefined8 *)(param_2 + 0xd0) = *(undefined8 *)(param_2 + 0xc0);
        }
        else {
          FUN_01ad85f0(param_1,param_2,0);
        }
      }
    }
  }
  return;
}

