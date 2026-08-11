/* Ghidra address: 01695550 */
/* Ghidra symbol: FUN_01695550 */


void FUN_01695550(longlong param_1)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 0x318);
  if (iVar5 == 0) {
    *(undefined4 *)(param_1 + 0x31c) = 0x36;
    uVar1 = FUN_004095c0(0x1e6);
    *(undefined8 *)(param_1 + 0x2f8) = uVar1;
    uVar1 = FUN_004095c0((longlong)(*(int *)(param_1 + 0x31c) * 4));
    *(undefined8 *)(param_1 + 0x300) = uVar1;
    iVar5 = *(int *)(param_1 + 0x31c);
    iVar3 = 1;
    if (0 < iVar5) {
      puVar4 = &DAT_01f80bec;
      do {
        FUN_00415020(*(longlong *)(param_1 + 0x2f8) + -9 + (longlong)iVar3 * 9,puVar4,8);
        iVar3 = iVar3 + 1;
        puVar4 = puVar4 + 9;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    iVar5 = *(int *)(param_1 + 0x31c);
    iVar3 = 1;
    if (0 < iVar5) {
      puVar2 = &DAT_01f80dd4;
      do {
        *(undefined4 *)(*(longlong *)(param_1 + 0x300) + -4 + (longlong)iVar3 * 4) = *puVar2;
        iVar3 = iVar3 + 1;
        puVar2 = puVar2 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    *(undefined4 *)(param_1 + 800) = 0xb;
    uVar1 = FUN_004095c0(99);
    *(undefined8 *)(param_1 + 0x308) = uVar1;
    uVar1 = FUN_004095c0((longlong)(*(int *)(param_1 + 800) * 4));
    *(undefined8 *)(param_1 + 0x310) = uVar1;
    iVar5 = *(int *)(param_1 + 800);
    iVar3 = 1;
    if (0 < iVar5) {
      puVar4 = &DAT_01f811f0;
      do {
        FUN_00415020(*(longlong *)(param_1 + 0x308) + -9 + (longlong)iVar3 * 9,puVar4,8);
        iVar3 = iVar3 + 1;
        puVar4 = puVar4 + 3;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    iVar5 = *(int *)(param_1 + 800);
    iVar3 = 1;
    if (0 < iVar5) {
      puVar2 = &DAT_01f81214;
      do {
        *(undefined4 *)(*(longlong *)(param_1 + 0x310) + -4 + (longlong)iVar3 * 4) = *puVar2;
        iVar3 = iVar3 + 1;
        puVar2 = puVar2 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  else if (iVar5 == 1) {
    *(undefined4 *)(param_1 + 0x31c) = 0x25;
    uVar1 = FUN_004095c0(0x14d);
    *(undefined8 *)(param_1 + 0x2f8) = uVar1;
    uVar1 = FUN_004095c0((longlong)(*(int *)(param_1 + 0x31c) * 4));
    *(undefined8 *)(param_1 + 0x300) = uVar1;
    iVar5 = *(int *)(param_1 + 0x31c);
    iVar3 = 1;
    if (0 < iVar5) {
      puVar4 = &DAT_01f80eac;
      do {
        FUN_00415020(*(longlong *)(param_1 + 0x2f8) + -9 + (longlong)iVar3 * 9,puVar4,8);
        iVar3 = iVar3 + 1;
        puVar4 = puVar4 + 9;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    iVar5 = *(int *)(param_1 + 0x31c);
    iVar3 = 1;
    if (0 < iVar5) {
      puVar2 = &DAT_01f80ffc;
      do {
        *(undefined4 *)(*(longlong *)(param_1 + 0x300) + -4 + (longlong)iVar3 * 4) = *puVar2;
        iVar3 = iVar3 + 1;
        puVar2 = puVar2 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    *(undefined4 *)(param_1 + 800) = 0x10;
    uVar1 = FUN_004095c0(0x90);
    *(undefined8 *)(param_1 + 0x308) = uVar1;
    uVar1 = FUN_004095c0((longlong)(*(int *)(param_1 + 800) * 4));
    *(undefined8 *)(param_1 + 0x310) = uVar1;
    iVar5 = *(int *)(param_1 + 800);
    iVar3 = 1;
    if (0 < iVar5) {
      puVar4 = &DAT_01f81240;
      do {
        FUN_00415020(*(longlong *)(param_1 + 0x308) + -9 + (longlong)iVar3 * 9,puVar4,8);
        iVar3 = iVar3 + 1;
        puVar4 = puVar4 + 3;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    iVar5 = *(int *)(param_1 + 800);
    iVar3 = 1;
    if (0 < iVar5) {
      puVar2 = &DAT_01f81270;
      do {
        *(undefined4 *)(*(longlong *)(param_1 + 0x310) + -4 + (longlong)iVar3 * 4) = *puVar2;
        iVar3 = iVar3 + 1;
        puVar2 = puVar2 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  else if (iVar5 == 2) {
    *(undefined4 *)(param_1 + 0x31c) = 0x1b;
    uVar1 = FUN_004095c0(0xf3);
    *(undefined8 *)(param_1 + 0x2f8) = uVar1;
    uVar1 = FUN_004095c0((longlong)(*(int *)(param_1 + 0x31c) * 4));
    *(undefined8 *)(param_1 + 0x300) = uVar1;
    iVar5 = *(int *)(param_1 + 0x31c);
    iVar3 = 1;
    if (0 < iVar5) {
      puVar4 = &DAT_01f81090;
      do {
        FUN_00415020(*(longlong *)(param_1 + 0x2f8) + -9 + (longlong)iVar3 * 9,puVar4,8);
        iVar3 = iVar3 + 1;
        puVar4 = puVar4 + 9;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    iVar5 = *(int *)(param_1 + 0x31c);
    iVar3 = 1;
    if (0 < iVar5) {
      puVar2 = &DAT_01f81184;
      do {
        *(undefined4 *)(*(longlong *)(param_1 + 0x300) + -4 + (longlong)iVar3 * 4) = *puVar2;
        iVar3 = iVar3 + 1;
        puVar2 = puVar2 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    *(undefined4 *)(param_1 + 800) = 10;
    uVar1 = FUN_004095c0(0x5a);
    *(undefined8 *)(param_1 + 0x308) = uVar1;
    uVar1 = FUN_004095c0((longlong)(*(int *)(param_1 + 800) * 4));
    *(undefined8 *)(param_1 + 0x310) = uVar1;
    iVar5 = *(int *)(param_1 + 800);
    iVar3 = 1;
    if (0 < iVar5) {
      puVar4 = &DAT_01f812b0;
      do {
        FUN_00415020(*(longlong *)(param_1 + 0x308) + -9 + (longlong)iVar3 * 9,puVar4,8);
        iVar3 = iVar3 + 1;
        puVar4 = puVar4 + 3;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    iVar5 = *(int *)(param_1 + 800);
    iVar3 = 1;
    if (0 < iVar5) {
      puVar2 = &DAT_01f812d0;
      do {
        *(undefined4 *)(*(longlong *)(param_1 + 0x310) + -4 + (longlong)iVar3 * 4) = *puVar2;
        iVar3 = iVar3 + 1;
        puVar2 = puVar2 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  return;
}

