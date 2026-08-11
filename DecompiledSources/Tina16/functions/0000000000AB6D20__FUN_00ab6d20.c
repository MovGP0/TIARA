/* Ghidra address: 00ab6d20 */
/* Ghidra symbol: FUN_00ab6d20 */


undefined8
FUN_00ab6d20(longlong param_1,longlong param_2,int *param_3,undefined8 param_4,int *param_5,
            int *param_6,int *param_7)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined8 in_RAX;
  ulonglong uVar5;
  undefined8 uVar6;
  bool bVar7;
  
  uVar6 = 0;
  if (*(byte *)(param_2 + 0x60) < 8) {
    uVar1 = (int)CONCAT71((int7)((ulonglong)in_RAX >> 8),1) << (*(byte *)(param_2 + 0x60) & 0x1f);
    bVar7 = (uVar1 & 0x60) != 0;
    uVar5 = (ulonglong)CONCAT31((int3)(uVar1 >> 8),bVar7);
  }
  else {
    uVar5 = 0;
    bVar7 = false;
  }
  if (bVar7) {
    if (**(ulonglong **)(param_1 + 0x138) < *(ulonglong *)(param_1 + 0x100)) {
      iVar3 = *(int *)(param_1 + 0x118);
      if (*(int *)(param_1 + 0x118) <= **(int **)(param_1 + 0x128)) {
        iVar3 = **(int **)(param_1 + 0x128);
      }
      **(int **)(param_1 + 0x128) = iVar3;
      uVar2 = FUN_00ac4f20(param_2);
      iVar3 = FUN_00ac4ef0(param_2);
      if (*(char *)(param_2 + 0x60) == '\x05') {
        iVar4 = FUN_00a74130(*(undefined8 *)(param_1 + 0x120),*(undefined8 *)(param_1 + 0x128),uVar2
                            );
        *(int *)(param_2 + 100) = iVar4 + *(int *)(param_2 + 0xac);
        FUN_00a73bd0(*(undefined8 *)(param_1 + 0x120),**(undefined4 **)(param_1 + 0x128),
                     **(int **)(param_1 + 0x128) + iVar3,uVar2);
      }
      else if (*(char *)(param_2 + 0x60) == '\x06') {
        iVar4 = FUN_00a74430(*(undefined8 *)(param_1 + 0x120),*(undefined8 *)(param_1 + 0x128),uVar2
                            );
        *(int *)(param_2 + 100) = iVar4 + *(int *)(param_2 + 0xac);
        FUN_00a73c40(*(undefined8 *)(param_1 + 0x120),**(undefined4 **)(param_1 + 0x128),
                     **(int **)(param_1 + 0x128) + iVar3,uVar2);
      }
      *(undefined4 *)(param_2 + 0xc4) = *(undefined4 *)(param_2 + 100);
      *(int *)(param_2 + 0xc0) = **(int **)(param_1 + 0x128) + *(int *)(param_2 + 0xb4);
      iVar4 = **(int **)(param_1 + 0x130);
      if (**(int **)(param_1 + 0x130) <= iVar3) {
        iVar4 = iVar3;
      }
      **(int **)(param_1 + 0x130) = iVar4;
      **(undefined8 **)(param_1 + 0x138) = *(undefined8 *)(param_1 + 0x100);
      iVar3 = FUN_00a73eb0(*(undefined8 *)(param_1 + 0x120),*(undefined4 *)(param_1 + 0x118));
      iVar4 = FUN_00a73fa0(*(undefined8 *)(param_1 + 0x120),*(undefined4 *)(param_1 + 0x118));
      *param_5 = iVar4 - iVar3;
      *param_7 = *param_7 + 1;
      if (*param_7 <= *param_6) {
        uVar6 = 1;
      }
    }
  }
  else {
    if (*(byte *)(param_2 + 0x4c) < 8) {
      bVar7 = ((int)CONCAT71((int7)(uVar5 >> 8),1) << (*(byte *)(param_2 + 0x4c) & 0x1f) & 0xcU) !=
              0;
    }
    else {
      bVar7 = false;
    }
    if (!bVar7) {
      iVar3 = **(int **)(param_1 + 0x130);
      iVar4 = FUN_00ac4ef0(param_2);
      if (iVar4 < iVar3) {
        iVar4 = iVar3;
      }
      **(int **)(param_1 + 0x130) = iVar4;
      iVar3 = FUN_00ac4f20(param_2);
      *param_3 = *param_3 + iVar3;
      if (*param_5 < *param_3) {
        uVar6 = 2;
      }
    }
  }
  return uVar6;
}

