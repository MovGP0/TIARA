/* Ghidra address: 0145bc60 */
/* Ghidra symbol: FUN_0145bc60 */


void FUN_0145bc60(double param_1,undefined8 param_2,double param_3,double param_4,undefined8 param_5
                 ,undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                 undefined8 param_10,undefined1 param_11,longlong param_12)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  double *pdVar4;
  double *pdVar5;
  undefined8 *puVar6;
  longlong lVar7;
  int iVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 local_1e71;
  undefined1 local_1e70 [4];
  int local_1e6c;
  double local_1e68 [400];
  double local_11e8 [86];
  undefined1 local_f38;
  undefined8 auStack_578 [174];
  
  local_f38 = 0;
  dVar9 = (double)FUN_0040af40(param_3 / 360.0);
  dVar9 = dVar9 * 360.0;
  uVar1 = *(undefined8 *)(param_12 + 0xa0);
  FUN_00409a70(param_12 + 0x368,param_12 + 0x888,0x140);
  FUN_00409a70(param_12 + 0x4b0,param_12 + 0x9d0,0x140);
  FUN_00409a70(param_12 + 0xd8,param_12 + 0x5f8,0x140);
  FUN_00409a70(param_12 + 0x220,param_12 + 0x740,0x140);
  FUN_0145b6a0(param_4 * 6.283185307179586,param_12);
  FUN_01448900(param_12);
  dVar10 = (double)FUN_0040bcd0(dVar9 * 0.017453292519943295);
  dVar10 = *(double *)(param_12 + 0xa0) * param_1 * dVar10;
  FUN_0040bcd0(dVar9 * 0.017453292519943295);
  dVar11 = (double)FUN_0040c850();
  if (1e-10 < dVar11) {
    cVar2 = FUN_01449a00(param_12);
    if (cVar2 == '\0') {
      FUN_00ef4260(0x10,param_12);
    }
    else {
      iVar8 = *(int *)(param_12 + 0x48);
      iVar3 = 1;
      if (0 < iVar8) {
        puVar6 = auStack_578;
        do {
          puVar6 = puVar6 + 2;
          *puVar6 = *(undefined8 *)(param_12 + 0x368 + (longlong)iVar3 * 8);
          puVar6[1] = *(undefined8 *)(param_12 + 0x4b0 + (longlong)iVar3 * 8);
          iVar3 = iVar3 + 1;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
      iVar8 = *(int *)(param_12 + 0x4c);
      iVar3 = 1;
      if (0 < iVar8) {
        do {
          lVar7 = (longlong)(*(int *)(param_12 + 0x48) + iVar3);
          auStack_578[lVar7 * 2] = *(undefined8 *)(param_12 + 0xd8 + (longlong)iVar3 * 8);
          auStack_578[lVar7 * 2 + 1] = *(undefined8 *)(param_12 + 0x220 + (longlong)iVar3 * 8);
          iVar3 = iVar3 + 1;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
      FUN_0145a7f0(*(undefined4 *)(param_12 + 0x48),*(undefined4 *)(param_12 + 0x4c),auStack_578 + 2
                   ,0x3ff0000000000000,local_11e8,&local_1e6c,local_1e70,&local_1e71,param_12);
    }
  }
  *(undefined8 *)(param_12 + 0xa0) = uVar1;
  FUN_00409a70(param_12 + 0x888,param_12 + 0x368,0x140);
  FUN_00409a70(param_12 + 0x9d0,param_12 + 0x4b0,0x140);
  FUN_00409a70(param_12 + 0x5f8,param_12 + 0xd8,0x140);
  FUN_00409a70(param_12 + 0x740,param_12 + 0x220,0x140);
  FUN_0145b600(param_4 * 6.283185307179586,param_12);
  FUN_01448900(param_12);
  dVar11 = (double)FUN_0040bdd0(dVar9 * 0.017453292519943295);
  dVar11 = -*(double *)(param_12 + 0xa0) * param_1 * dVar11;
  FUN_0040bdd0(dVar9 * 0.017453292519943295);
  dVar12 = (double)FUN_0040c850();
  if (1e-10 < dVar12) {
    cVar2 = FUN_01449a00(param_12);
    if (cVar2 == '\0') {
      FUN_00ef4260(0x10,param_12);
    }
    else {
      iVar8 = *(int *)(param_12 + 0x48);
      iVar3 = 1;
      if (0 < iVar8) {
        puVar6 = auStack_578;
        do {
          puVar6 = puVar6 + 2;
          *puVar6 = *(undefined8 *)(param_12 + 0x368 + (longlong)iVar3 * 8);
          puVar6[1] = *(undefined8 *)(param_12 + 0x4b0 + (longlong)iVar3 * 8);
          iVar3 = iVar3 + 1;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
      iVar8 = *(int *)(param_12 + 0x4c);
      iVar3 = 1;
      if (0 < iVar8) {
        do {
          lVar7 = (longlong)(*(int *)(param_12 + 0x48) + iVar3);
          auStack_578[lVar7 * 2] = *(undefined8 *)(param_12 + 0xd8 + (longlong)iVar3 * 8);
          auStack_578[lVar7 * 2 + 1] = *(undefined8 *)(param_12 + 0x220 + (longlong)iVar3 * 8);
          iVar3 = iVar3 + 1;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
      FUN_0145a7f0(*(undefined4 *)(param_12 + 0x48),*(undefined4 *)(param_12 + 0x4c),auStack_578 + 2
                   ,0x3ff0000000000000,local_1e68,&local_1e6c,local_1e70,&local_1e71,param_12);
    }
  }
  FUN_0040bcd0(dVar9 * 0.017453292519943295);
  dVar12 = (double)FUN_0040c850();
  if (dVar12 <= 1e-10) {
    FUN_0040bdd0(dVar9 * 0.017453292519943295);
    dVar12 = (double)FUN_0040c850();
    if (1e-10 < dVar12) {
      if (0 < local_1e6c) {
        pdVar5 = local_1e68;
        pdVar4 = local_11e8;
        iVar8 = local_1e6c;
        do {
          *pdVar4 = dVar11 * *pdVar5;
          pdVar4[1] = pdVar5[1];
          pdVar4[2] = pdVar5[2];
          pdVar4[3] = pdVar5[3];
          pdVar4[4] = pdVar5[4];
          pdVar4 = pdVar4 + 5;
          pdVar5 = pdVar5 + 5;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
      goto LAB_0145c385;
    }
  }
  FUN_0040bcd0(dVar9 * 0.017453292519943295);
  dVar12 = (double)FUN_0040c850();
  if (1e-10 < dVar12) {
    FUN_0040bdd0(dVar9 * 0.017453292519943295);
    dVar12 = (double)FUN_0040c850();
    if (dVar12 < 1e-10) {
      if (0 < local_1e6c) {
        pdVar5 = local_11e8;
        iVar8 = local_1e6c;
        do {
          *pdVar5 = dVar10 * *pdVar5;
          pdVar5 = pdVar5 + 5;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
      goto LAB_0145c385;
    }
  }
  FUN_0040bcd0(dVar9 * 0.017453292519943295);
  dVar12 = (double)FUN_0040c850();
  if (1e-10 < dVar12) {
    FUN_0040bdd0(dVar9 * 0.017453292519943295);
    dVar12 = (double)FUN_0040c850();
    if (1e-10 < dVar12) {
      FUN_0144bcd0(local_11e8,local_1e68,dVar10,dVar11,&local_1e6c,local_11e8);
    }
  }
LAB_0145c385:
  *(undefined8 *)(param_12 + 0xa0) = 0x3ff0000000000000;
  if ((byte)(*(char *)(param_12 + 0xb4) - 2U) < 2) {
    FUN_01457df0(local_1e6c,local_11e8,param_11,0x3ff0000000000000,param_2,dVar9,param_4,param_5,
                 param_6,param_7,param_8,param_9,param_10,param_12);
  }
  else if (*(char *)(param_12 + 0xb4) == '\x04') {
    FUN_0144c1c0(local_1e6c,local_11e8,param_11,0x3ff0000000000000,param_2,dVar9,param_4,param_5,
                 param_6,param_7,param_8,param_9,param_10,0,param_12);
  }
  return;
}

