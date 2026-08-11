/* Ghidra address: 0165d830 */
/* Ghidra symbol: FUN_0165d830 */


void FUN_0165d830(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  bool bVar6;
  
  *(undefined4 *)(param_1 + 0x198) = 0;
  if (*(longlong *)(param_1 + 400) != 0) {
    lVar5 = 0;
    if (*(longlong *)(param_1 + 400) != 0) {
      lVar5 = *(longlong *)(*(longlong *)(param_1 + 400) + -8);
    }
    FUN_0040d200(*(undefined8 *)(param_1 + 400),lVar5 << 6,0);
  }
  *(undefined4 *)(param_1 + 0x1d0) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_1 + 0xf0);
  iVar3 = *(int *)(param_1 + 0xd0);
  if ((iVar3 == 0) || (uVar1 = FUN_01b11110(), (int)(uVar1 & 0xff) < iVar3)) {
    uVar1 = FUN_01b11110();
    *(uint *)(param_1 + 0xd0) = uVar1 & 0xff;
  }
  if (*(longlong *)(param_1 + 0xc0) == 0) {
    bVar6 = false;
  }
  else {
    lVar5 = 0;
    if (*(longlong *)(param_1 + 0xc0) != 0) {
      lVar5 = *(longlong *)(*(longlong *)(param_1 + 0xc0) + -8);
    }
    bVar6 = lVar5 == *(int *)(param_1 + 0xd0);
  }
  if (bVar6) {
    iVar4 = *(int *)(param_1 + 0xd0) + -1;
    iVar3 = 1;
    if (0 < iVar4) {
      do {
        lVar5 = *(longlong *)(*(longlong *)(param_1 + 0xc0) + (longlong)iVar3 * 8);
        *(undefined1 *)(lVar5 + 0xd8) = 1;
        if (*(char *)(lVar5 + 0x1b) != '\0') {
          FUN_004d1ec0(lVar5);
        }
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    iVar4 = *(int *)(param_1 + 0xd0) + -1;
    iVar3 = 1;
    if (0 < iVar4) {
      do {
        while (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0xc0) + (longlong)iVar3 * 8) + 0xd8)
               != '\0') {
          thunk_FUN_0419965d(1);
        }
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  else {
    if (*(longlong *)(param_1 + 0xc0) != 0) {
      iVar3 = 0;
      if (*(longlong *)(param_1 + 0xc0) != 0) {
        iVar3 = (int)*(undefined8 *)(*(longlong *)(param_1 + 0xc0) + -8);
      }
      iVar3 = iVar3 + -1;
      iVar4 = 1;
      if (0 < iVar3) {
        do {
          lVar5 = (longlong)iVar4;
          FUN_0165d6a0(param_1,*(longlong *)(*(longlong *)(param_1 + 0xc0) + lVar5 * 8) + 0x50);
          FUN_004d1f00(*(undefined8 *)(*(longlong *)(param_1 + 0xc0) + lVar5 * 8));
          FUN_004d1ec0(*(undefined8 *)(*(longlong *)(param_1 + 0xc0) + lVar5 * 8));
          FUN_00410f20(*(undefined8 *)(*(longlong *)(param_1 + 0xc0) + lVar5 * 8));
          iVar4 = iVar4 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
    }
    FUN_00419260(param_1 + 0xc0,&DAT_0165b7d8,1,(longlong)*(int *)(param_1 + 0xd0));
    iVar4 = *(int *)(param_1 + 0xd0) + -1;
    iVar3 = 1;
    if (0 < iVar4) {
      do {
        lVar5 = FUN_004d0ba0(&PTR_FUN_0165b6a0,1,0);
        *(longlong *)(*(longlong *)(param_1 + 0xc0) + (longlong)iVar3 * 8) = lVar5;
        *(longlong *)(lVar5 + 0xd0) = param_1;
        *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xc0) + (longlong)iVar3 * 8) + 0x48) = iVar3;
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  iVar4 = *(int *)(param_1 + 0xd0) + -1;
  iVar3 = 1;
  if (0 < iVar4) {
    do {
      while (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0xc0) + (longlong)iVar3 * 8) + 200) ==
             '\0') {
        thunk_FUN_0419965d(1);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_00419260(param_1 + 200,&DAT_0165b820,1,(longlong)*(int *)(param_1 + 0xd0));
  *(undefined1 *)(param_1 + 0xb8) = 1;
  **(longlong **)(param_1 + 200) = param_1 + 0x40;
  iVar4 = *(int *)(param_1 + 0xd0) + -1;
  iVar3 = 1;
  if (0 < iVar4) {
    do {
      *(longlong *)(*(longlong *)(param_1 + 200) + (longlong)iVar3 * 8) =
           *(longlong *)(*(longlong *)(param_1 + 0xc0) + (longlong)iVar3 * 8) + 0x50;
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  iVar3 = *(int *)(param_1 + 0xd0);
  iVar4 = 0;
  if (-1 < iVar3 + -1) {
    do {
      lVar2 = (longlong)iVar4;
      lVar5 = *(longlong *)(*(longlong *)(param_1 + 200) + lVar2 * 8);
      *(undefined4 *)(lVar5 + 0x60) = 0;
      *(undefined4 *)(lVar5 + 100) = 0;
      *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 200) + lVar2 * 8) + 0x58) = 0;
      *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 200) + lVar2 * 8) + 0x5c) = 0;
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  *(undefined4 *)(param_1 + 0x204) = 0;
  *(undefined4 *)(param_1 + 0x200) = 0;
  *(undefined4 *)(param_1 + 0x1fc) = 0;
  *(undefined4 *)(param_1 + 0x208) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x20c) = 100;
  *(undefined4 *)(param_1 + 0x214) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x218) = 0;
  *(undefined4 *)(param_1 + 0x21c) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 10;
  FUN_0165dc20(param_1);
  return;
}

