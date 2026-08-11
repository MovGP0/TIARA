/* Ghidra address: 00f11910 */
/* Ghidra symbol: FUN_00f11910 */


void FUN_00f11910(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  
  lVar5 = *(longlong *)(param_1 + 0x78);
  if (*(char *)(param_1 + 0x70) == '\0') {
    uVar3 = FUN_004095c0((longlong)(*(int *)(param_1 + 0x58) << 4));
    *(undefined8 *)(param_1 + 0x68) = uVar3;
    *(undefined1 *)(param_1 + 0x70) = 1;
  }
  if ((*(longlong *)(param_1 + 0x80) == 0) &&
     (iVar2 = (**(code **)(**(longlong **)(lVar5 + 0xd8) + 0x28))(*(longlong **)(lVar5 + 0xd8)),
     iVar2 == 1)) {
    uVar3 = (**(code **)(**(longlong **)(lVar5 + 0xd8) + 0x30))(*(longlong **)(lVar5 + 0xd8),0);
    cVar1 = FUN_004113d0(uVar3,&DAT_01cdd500);
    if (cVar1 != '\0') {
      lVar4 = (**(code **)(**(longlong **)(lVar5 + 0xd8) + 0x30))(*(longlong **)(lVar5 + 0xd8),0);
      iVar2 = (**(code **)(**(longlong **)(lVar4 + 0x70) + 0x28))(*(longlong **)(lVar4 + 0x70));
      if (iVar2 == 1) {
        lVar4 = (**(code **)(**(longlong **)(lVar5 + 0xd8) + 0x30))(*(longlong **)(lVar5 + 0xd8),0);
        iVar2 = (**(code **)(**(longlong **)(lVar4 + 0x78) + 0x28))(*(longlong **)(lVar4 + 0x78));
        if (iVar2 == 1) {
          iVar2 = *(int *)(param_1 + 0x48);
          iVar6 = 1;
          if (iVar2 < 1) {
            return;
          }
          do {
            lVar7 = (longlong)iVar6;
            lVar4 = (**(code **)(**(longlong **)(lVar5 + 0xd8) + 0x30))
                              (*(longlong **)(lVar5 + 0xd8),0);
            uVar3 = (**(code **)(**(longlong **)(lVar4 + 0x70) + 0x30))
                              (*(longlong **)(lVar4 + 0x70),0);
            uVar3 = FUN_01cd62b0(uVar3,*(undefined4 *)
                                        (*(longlong *)(param_1 + 0x50) + -8 + lVar7 * 8));
            *(undefined8 *)(*(longlong *)(param_1 + 0x68) + -0x10 + lVar7 * 0x10) = uVar3;
            lVar4 = (**(code **)(**(longlong **)(lVar5 + 0xd8) + 0x30))
                              (*(longlong **)(lVar5 + 0xd8),0);
            uVar3 = (**(code **)(**(longlong **)(lVar4 + 0x78) + 0x30))
                              (*(longlong **)(lVar4 + 0x78),0);
            uVar3 = FUN_01cd62b0(uVar3);
            *(undefined8 *)(*(longlong *)(param_1 + 0x68) + -8 + lVar7 * 0x10) = uVar3;
            iVar6 = iVar6 + 1;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
          return;
        }
      }
    }
  }
  if (*(longlong *)(param_1 + 0x80) == 0) {
    iVar2 = *(int *)(param_1 + 0x48);
    iVar6 = 1;
    if (0 < iVar2) {
      do {
        lVar4 = *(longlong *)(param_1 + 0x68);
        lVar7 = (longlong)iVar6;
        *(double *)(lVar4 + -0x10 + lVar7 * 0x10) =
             (double)(*(int *)(*(longlong *)(param_1 + 0x50) + -8 + lVar7 * 8) -
                     *(int *)(lVar5 + 0x14)) /
             (double)(*(int *)(lVar5 + 0x1c) - *(int *)(lVar5 + 0x14));
        *(double *)(lVar4 + -8 + lVar7 * 0x10) =
             (double)(*(int *)(*(longlong *)(param_1 + 0x50) + -4 + lVar7 * 8) -
                     *(int *)(lVar5 + 0x18)) /
             (double)(*(int *)(lVar5 + 0x20) - *(int *)(lVar5 + 0x18));
        iVar6 = iVar6 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  else {
    iVar2 = *(int *)(param_1 + 0x48);
    iVar6 = 1;
    if (0 < iVar2) {
      do {
        lVar5 = (longlong)iVar6;
        (**(code **)(**(longlong **)(param_1 + 0x80) + 0xf8))
                  (*(longlong **)(param_1 + 0x80),
                   *(undefined4 *)(*(longlong *)(param_1 + 0x50) + -8 + lVar5 * 8),
                   *(undefined4 *)(*(longlong *)(param_1 + 0x50) + -4 + lVar5 * 8),
                   *(longlong *)(param_1 + 0x68) + -0x10 + lVar5 * 0x10,
                   *(longlong *)(param_1 + 0x68) + -8 + lVar5 * 0x10);
        iVar6 = iVar6 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  return;
}

