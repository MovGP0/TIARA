/* Ghidra address: 01b06e40 */
/* Ghidra symbol: FUN_01b06e40 */


void FUN_01b06e40(longlong *param_1,char param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  longlong lVar7;
  
  FUN_00411a80(param_1,param_2);
  lVar7 = FUN_00b921a0(param_1[0x1e6]);
  param_1[0x1e7] = lVar7;
  if (*(char *)((longlong)param_1 + 0x8b) == '\0') {
    *(undefined8 *)(param_1[0x14] + 0x488) = 0;
  }
  if ((char)param_1[0x1e3] != '\0') {
    if (*(byte *)(param_1 + 0x21) < 8) {
      bVar6 = ((int)CONCAT71((int7)((ulonglong)param_1 >> 8),1) <<
               (*(byte *)(param_1 + 0x21) & 0x1f) & 0x2cU) != 0;
    }
    else {
      bVar6 = false;
    }
    if (!bVar6) {
      (**(code **)(*param_1 + 0x28))(param_1);
    }
  }
  FUN_01b05410(param_1);
  lVar7 = param_1[0x1d];
  if ((lVar7 == 0) || (*(char *)(lVar7 + 0x22b8) == '\0')) {
    if (((*(char *)((longlong)param_1 + 0x5db) == '\x01') &&
        (*(char *)((longlong)param_1 + 0x69e) != '\0')) ||
       ((*(char *)((longlong)param_1 + 0x5db) == '\x02' &&
        (*(char *)((longlong)param_1 + 0x69f) != '\0')))) {
      lVar7 = param_1[0x15];
      *(longlong *)(lVar7 + 0xe00) = param_1[0x16];
      *(longlong *)(lVar7 + 0xe08) = param_1[0x17];
      *(longlong *)(lVar7 + 0xe10) = param_1[0x18];
      *(longlong *)(lVar7 + 0xe18) = param_1[0x19];
      *(longlong *)(lVar7 + 0xe20) = param_1[0x1a];
    }
  }
  else {
    FUN_014cd940(lVar7,(char)param_1[1],(char)param_1[0x21],0);
    lVar7 = param_1[0x15];
    *(longlong *)(lVar7 + 0xe00) = param_1[0x16];
    *(longlong *)(lVar7 + 0xe08) = param_1[0x17];
    *(longlong *)(lVar7 + 0xe10) = param_1[0x18];
    *(longlong *)(lVar7 + 0xe18) = param_1[0x19];
    *(longlong *)(lVar7 + 0xe20) = param_1[0x1a];
    *(undefined1 *)(lVar7 + 0xe28) = *(undefined1 *)(param_1[0x1d] + 0x22b8);
  }
  lVar7 = param_1[0x15];
  *(undefined1 *)(lVar7 + 0xe29) = *(undefined1 *)((longlong)param_1 + 0x332);
  *(char *)(lVar7 + 0xe2b) = (char)param_1[0x99];
  FUN_00410f20(param_1[0x22]);
  FUN_00410f20(param_1[0x1d]);
  FUN_00410f20(param_1[0x96]);
  FUN_00410f20(param_1[0x97]);
  FUN_00410f20(param_1[0x1e2]);
  FUN_00410f20(param_1[0xb8]);
  FUN_00410f20(param_1[0xb9]);
  FUN_00410f20(param_1[0xba]);
  FUN_00410f20(param_1[0x98]);
  FUN_017c58d0(param_1 + 0x1b);
  (**(code **)(*param_1 + 0x10))(param_1);
  *(undefined1 *)(param_1 + 0x1bb) = *(undefined1 *)((longlong)param_1 + 0x8a);
  if (*(char *)((longlong)param_1 + 10) == '\0') {
    FUN_00417c40(PTR_DAT_02004010,param_1 + 0xbb,&DAT_01d0d0b8);
  }
  else {
    FUN_00417c40(param_1[0x15] + 0x492,param_1 + 0xbb,&DAT_01d0d0b8);
  }
  *(undefined8 *)(param_1[0x15] + 0x488) = 0;
  *(longlong *)PTR_DAT_020027c0 = param_1[0x16];
  *(longlong *)PTR_DAT_020037b0 = param_1[0x17];
  *(longlong *)PTR_DAT_02005118 = param_1[0x18];
  *(longlong *)PTR_DAT_02001630 = param_1[0x19];
  DAT_02110b9c = (undefined1)param_1[0x99];
  *PTR_DAT_02005c10 = *(undefined1 *)((longlong)param_1 + 0x332);
  FUN_00410f20(param_1[0x20]);
  FUN_019a0af0(param_1[0x15]);
  FUN_00410f20(param_1[0x265]);
  FUN_016f8470(param_1);
  FUN_00410f20(param_1[0x269]);
  FUN_00410f20(param_1[0x26a]);
  FUN_00410f20(param_1[0x26b]);
  FUN_00410f20();
  if (param_1[0x26d] != 0) {
    iVar2 = *(int *)(param_1[0x26d] + 0x10);
    iVar3 = 0;
    if (-1 < iVar2 + -1) {
      do {
        uVar1 = FUN_004aeac0(param_1[0x26d],iVar3);
        FUN_004095f0(uVar1);
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    FUN_00410f20(param_1[0x26d]);
  }
  FUN_00410f20(param_1[0x26e]);
  FUN_00410f20(param_1[0x26f]);
  FUN_00410f20();
  if (param_1[0x9e] != 0) {
    iVar2 = *(int *)(param_1[0x9e] + 0x10);
    uVar4 = 0;
    if (-1 < iVar2 + -1) {
      do {
        lVar7 = param_1[0x9e];
        if (*(uint *)(lVar7 + 0x10) <= uVar4) {
          FUN_00594f90();
        }
        FUN_004095f0(*(undefined8 *)(*(longlong *)(lVar7 + 8) + (longlong)(int)uVar4 * 8));
        uVar4 = uVar4 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    FUN_00410f20();
  }
  if (param_1[0x9f] != 0) {
    iVar2 = *(int *)(param_1[0x9f] + 0x10);
    uVar4 = 0;
    if (-1 < iVar2 + -1) {
      do {
        lVar7 = param_1[0x9f];
        if (*(uint *)(lVar7 + 0x10) <= uVar4) {
          FUN_00594f90();
        }
        FUN_004095f0(*(undefined8 *)(*(longlong *)(lVar7 + 8) + (longlong)(int)uVar4 * 8));
        uVar4 = uVar4 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    FUN_00410f20(param_1[0x9f]);
  }
  iVar2 = (int)param_1[0x5e];
  iVar3 = 0;
  if (-1 < iVar2 + -1) {
    do {
      lVar7 = *(longlong *)(param_1[0xb3] + (longlong)iVar3 * 8);
      if (lVar7 != 0) {
        iVar5 = *(int *)(lVar7 + 0x10);
        uVar4 = 0;
        if (-1 < iVar5 + -1) {
          do {
            if (*(uint *)(lVar7 + 0x10) <= uVar4) {
              FUN_00594f90();
            }
            FUN_004095f0(*(undefined8 *)(*(longlong *)(lVar7 + 8) + (longlong)(int)uVar4 * 8));
            uVar4 = uVar4 + 1;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        FUN_00410f20(lVar7);
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_004095f0(param_1[0xb3]);
  if ('\0' < param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

