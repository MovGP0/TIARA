/* Ghidra address: 01d53750 */
/* Ghidra symbol: FUN_01d53750 */


void FUN_01d53750(longlong param_1,undefined8 param_2,longlong param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 *puVar3;
  char cVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  FUN_016ee1f0(param_2,param_1,0x120);
  cVar4 = (char)param_4;
  if (cVar4 == '\x01') {
    uVar1 = FUN_01322fa0(param_3);
    *(undefined4 *)(param_1 + 0x11c) = uVar1;
  }
  else {
    *(undefined4 *)(param_1 + 0x11c) = 0;
  }
  dVar5 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),*(undefined1 *)(param_1 + 1)
                               ,0,0);
  if (cVar4 == '\x01') {
    dVar8 = (double)*(int *)(param_1 + 0x11c);
  }
  else {
    dVar8 = (double)FUN_016ed780(param_3,param_4);
  }
  dVar6 = *(double *)(param_1 + 0xb0);
  if ((*(double *)(param_1 + 0xb8) <= dVar8 && dVar8 != *(double *)(param_1 + 0xb8)) ||
     (dVar8 == 0.0)) {
    iVar2 = 1;
    puVar3 = (undefined8 *)(param_1 + 0x10);
    do {
      *puVar3 = *(undefined8 *)(param_1 + 8 + (longlong)(iVar2 + 1) * 8);
      puVar3[10] = *(undefined8 *)(param_1 + 0x58 + (longlong)(iVar2 + 1) * 8);
      iVar2 = iVar2 + 1;
      puVar3 = puVar3 + 1;
    } while (iVar2 != 10);
  }
  *(double *)(param_1 + 0x58) = dVar5;
  *(double *)(param_1 + 0xa8) = dVar8;
  if (*(int *)(param_1 + 0xcc) < 2) {
    if (*(int *)(param_1 + 0xcc) == 1) {
      if (dVar5 < *(double *)(param_1 + 8) || dVar5 == *(double *)(param_1 + 8)) {
        *(undefined1 *)(param_1 + 200) = 1;
        *(undefined1 *)(param_1 + 0xc9) = 0;
      }
      else {
        *(undefined1 *)(param_1 + 200) = 0;
        *(undefined1 *)(param_1 + 0xc9) = 1;
      }
      FUN_01d52090(*(undefined8 *)(param_1 + 0xb0),*(undefined8 *)(param_1 + 8),param_1);
      if (0.0 <= dVar5) {
        dVar6 = (double)FUN_01d51e50(dVar5,param_1);
      }
      else {
        dVar6 = (double)FUN_01d51e90(dVar5,param_1);
      }
    }
    if (*(int *)(param_1 + 0xcc) == 0) {
      *(undefined8 *)(param_1 + 8) = 0;
      iVar2 = 10;
      puVar3 = (undefined8 *)(param_1 + 0x60);
      do {
        *puVar3 = 0;
        puVar3[-10] = 0;
        puVar3 = puVar3 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    *(int *)(param_1 + 0xcc) = *(int *)(param_1 + 0xcc) + 1;
  }
  else {
    if ((*(double *)(param_1 + 0x50) <= *(double *)(param_1 + 0x58) &&
         *(double *)(param_1 + 0x58) != *(double *)(param_1 + 0x50)) &&
       (*(char *)(param_1 + 200) == '\0')) {
      *(undefined1 *)(param_1 + 200) = 1;
      FUN_01d52090(*(undefined8 *)(param_1 + 0xb0),*(undefined8 *)(param_1 + 8),param_1);
    }
    if ((*(double *)(param_1 + 0x58) <= *(double *)(param_1 + 0x48) &&
         *(double *)(param_1 + 0x48) != *(double *)(param_1 + 0x58)) &&
       (*(char *)(param_1 + 200) != '\0')) {
      *(undefined1 *)(param_1 + 200) = 0;
      FUN_01d52090(*(undefined8 *)(param_1 + 0xb0),*(undefined8 *)(param_1 + 8),param_1);
    }
    if (((*(double *)(param_1 + 0x50) <= *(double *)(param_1 + 0x58) &&
          *(double *)(param_1 + 0x58) != *(double *)(param_1 + 0x50)) &&
        (*(char *)(param_1 + 0xc9) != '\0')) && (*(char *)(param_1 + 200) != '\0')) {
      if (dVar5 < *(double *)(param_1 + 0xe0) || dVar5 == *(double *)(param_1 + 0xe0)) {
        dVar6 = (double)FUN_01d51ef0(dVar5,param_1);
        *(undefined1 *)(param_1 + 0xc9) = 0;
      }
      else {
        dVar6 = (double)FUN_01d51ef0(dVar5,param_1);
      }
    }
    if (((*(double *)(param_1 + 0x50) <= *(double *)(param_1 + 0x58) &&
          *(double *)(param_1 + 0x58) != *(double *)(param_1 + 0x50)) &&
        (*(char *)(param_1 + 0xc9) == '\0')) && (*(char *)(param_1 + 200) != '\0')) {
      if (*(double *)(param_1 + 0xe0) <= dVar5) {
        dVar6 = (double)FUN_01d52030(dVar5,param_1);
        *(undefined1 *)(param_1 + 0xc9) = 1;
      }
      else {
        dVar6 = (double)FUN_01d52030(dVar5,param_1);
      }
    }
    if (((*(double *)(param_1 + 0x58) <= *(double *)(param_1 + 0x50)) &&
        (*(char *)(param_1 + 0xc9) != '\0')) && (*(char *)(param_1 + 200) == '\0')) {
      if (-*(double *)(param_1 + 0xe0) <= dVar5) {
        dVar6 = (double)FUN_01d51fa0(dVar5,param_1);
        *(undefined1 *)(param_1 + 0xc9) = 0;
      }
      else {
        dVar6 = (double)FUN_01d51fa0(dVar5,param_1);
      }
    }
    if (((*(double *)(param_1 + 0x58) <= *(double *)(param_1 + 0x50)) &&
        (*(char *)(param_1 + 0xc9) == '\0')) && (*(char *)(param_1 + 200) == '\0')) {
      if (dVar5 <= -*(double *)(param_1 + 0xe0)) {
        dVar6 = (double)FUN_01d51f60(dVar5,param_1);
        *(undefined1 *)(param_1 + 0xc9) = 1;
      }
      else {
        dVar6 = (double)FUN_01d51f60(dVar5,param_1);
      }
    }
  }
  dVar7 = (double)FUN_01d51dc0(dVar5 - *(double *)(param_1 + 8));
  if (dVar7 <= 1e-20) {
    dVar7 = 0.0;
  }
  else if (dVar8 < *(double *)(param_1 + 0xb8) || dVar8 == *(double *)(param_1 + 0xb8)) {
    dVar7 = *(double *)(param_1 + 0xc0);
  }
  else {
    dVar7 = (dVar6 - *(double *)(param_1 + 0xb0)) / (dVar5 - *(double *)(param_1 + 8));
  }
  *(double *)(param_1 + 0xc0) = dVar7;
  *(double *)(param_1 + 0xb8) = dVar8;
  *(double *)(param_1 + 8) = dVar5;
  *(double *)(param_1 + 0xb0) = dVar6;
  if (cVar4 == '\x01') {
    FUN_016ed320(param_2,2,dVar6 - dVar7 * dVar5,dVar7,0);
  }
  else if (cVar4 == '\x06') {
    FUN_016ed320(param_2,2,dVar6 - dVar7 * dVar5,dVar7,0);
  }
  else if (cVar4 == '\b') {
    FUN_016ed320(param_2,2,dVar6 - dVar7 * dVar5,dVar7,0);
  }
  FUN_016ea050(param_2,param_1,0x120);
  return;
}

