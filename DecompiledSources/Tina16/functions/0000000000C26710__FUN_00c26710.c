/* Ghidra address: 00c26710 */
/* Ghidra symbol: FUN_00c26710 */


ulonglong FUN_00c26710(longlong param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  int *piVar5;
  int iVar6;
  
  if (*(char *)(param_1 + 0xe7) == '\0') {
    uVar4 = FUN_00c262d0(*(undefined8 *)(param_1 + 0xd8),*(undefined4 *)(param_1 + 0xd4));
  }
  else {
    *(undefined1 *)(param_1 + 0xe7) = 0;
    uVar4 = (ulonglong)*(uint *)(param_1 + 0xe0);
  }
  uVar1 = (uint)uVar4;
  do {
    if ((int)uVar1 < 0) {
      return uVar4;
    }
    iVar6 = (int)uVar4;
    if (iVar6 == *(int *)(param_1 + 0xe0)) {
      FUN_0040d200(param_1 + 0x40f0,0x4000,0);
      iVar6 = *(int *)(param_1 + 0xe0);
      iVar2 = 0;
      if (-1 < iVar6 + -1) {
        piVar5 = (int *)(param_1 + 0xf0);
        do {
          *piVar5 = iVar2;
          iVar2 = iVar2 + 1;
          piVar5 = piVar5 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      FUN_0040d200(param_1 + 0xf0 + (longlong)*(int *)(param_1 + 0xe0) * 4,
                   (longlong)(0xfff - *(int *)(param_1 + 0xe0)),0);
      *(uint *)(param_1 + 0xd4) = *(byte *)(param_1 + 0xd3) + 1;
      *(int *)(param_1 + 0xcc) = *(int *)(param_1 + 0xe0) * 2;
      *(int *)(param_1 + 200) = *(int *)(param_1 + 0xe0) + 2;
      *(longlong *)(param_1 + 0xe8) = param_1 + 0x80f0;
      do {
        uVar3 = FUN_00c262d0(*(undefined8 *)(param_1 + 0xd8),*(undefined4 *)(param_1 + 0xd4));
        *(undefined4 *)(param_1 + 0xc4) = uVar3;
      } while (*(int *)(param_1 + 0xc4) == *(int *)(param_1 + 0xe0));
      *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0xc4);
      return (ulonglong)*(uint *)(param_1 + 0xc4);
    }
    if (iVar6 == *(int *)(param_1 + 0xbc)) {
      return 0xffffffff;
    }
    iVar2 = iVar6;
    if (*(int *)(param_1 + 200) <= iVar6) {
      FUN_00c26550(param_1,*(undefined4 *)(param_1 + 0xc4));
      iVar2 = *(int *)(param_1 + 0xc0);
    }
    iVar2 = FUN_00c265f0(param_1,iVar2,*(undefined4 *)(param_1 + 0xe0));
    *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_1 + 0xf0 + (longlong)iVar2 * 4);
    FUN_00c26550(param_1,*(undefined4 *)(param_1 + 0xc4));
    uVar1 = *(uint *)(param_1 + 200);
    uVar4 = (ulonglong)uVar1;
    if ((int)uVar1 < 0x1000) {
      *(undefined4 *)(param_1 + 0x40f0 + (longlong)(int)uVar1 * 4) = *(undefined4 *)(param_1 + 0xc0)
      ;
      *(undefined4 *)(param_1 + 0xf0 + (longlong)(int)uVar1 * 4) = *(undefined4 *)(param_1 + 0xc4);
      *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 1;
      if ((*(int *)(param_1 + 0xcc) <= *(int *)(param_1 + 200)) &&
         (*(int *)(param_1 + 0xcc) < 0x1000)) {
        *(int *)(param_1 + 0xcc) = *(int *)(param_1 + 0xcc) * 2;
        *(int *)(param_1 + 0xd4) = *(int *)(param_1 + 0xd4) + 1;
      }
    }
    *(int *)(param_1 + 0xc0) = iVar6;
  } while (*(ulonglong *)(param_1 + 0xe8) <= param_1 + 0x80f0U);
  *(longlong *)(param_1 + 0xe8) = *(longlong *)(param_1 + 0xe8) + -4;
  return (ulonglong)**(uint **)(param_1 + 0xe8);
}

