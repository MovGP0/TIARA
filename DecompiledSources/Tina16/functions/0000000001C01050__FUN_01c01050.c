/* Ghidra address: 01c01050 */
/* Ghidra symbol: FUN_01c01050 */


longlong FUN_01c01050(longlong *param_1,char param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  
  lVar2 = (**(code **)(*param_1 + 0x350))(param_1);
  if (lVar2 != 0) {
    while (((lVar2 != 0 && (*(longlong *)(lVar2 + 0x80) != 0)) &&
           (*(char *)(*(longlong *)(lVar2 + 0x80) + 0xa9) == '\0'))) {
      lVar2 = (**(code **)(*param_1 + 0x2a8))(param_1,lVar2,0);
    }
    iVar6 = 0;
    iVar1 = (**(code **)(*param_1 + 0x2e8))(param_1);
    iVar1 = iVar1 + -1;
    iVar5 = 1;
    if (0 < iVar1) {
      do {
        uVar3 = FUN_01c019a0(param_1);
        lVar4 = FUN_01bfb960(uVar3,iVar5);
        if (*(longlong *)(lVar4 + 0x80) == 0) {
LAB_01c01133:
          uVar3 = FUN_01c019a0(param_1);
          lVar4 = FUN_01bfb960(uVar3,iVar5);
          if ((lVar4 != 0) && (lVar4 = (**(code **)(*param_1 + 0x2d0))(param_1,iVar5), lVar4 != 0))
          {
            uVar3 = FUN_01c019a0(param_1);
            lVar4 = FUN_01bfb960(uVar3,iVar5);
            if (iVar6 <= *(int *)(*(longlong *)(param_1[0x94] + 0xe0) + 0x48) -
                         *(int *)(lVar4 + 0xa4)) {
              uVar3 = FUN_01c019a0(param_1);
              lVar2 = FUN_01bfb960(uVar3,iVar5);
              lVar4 = (**(code **)(*param_1 + 0x2d0))(param_1,iVar5);
              iVar6 = *(int *)(*(longlong *)(param_1[0x94] + 0xe0) + 0x48) -
                      *(int *)(*(longlong *)(lVar4 + 800) + 0xa4);
            }
          }
        }
        else {
          uVar3 = FUN_01c019a0(param_1);
          lVar4 = FUN_01bfb960(uVar3,iVar5);
          if (*(char *)(*(longlong *)(lVar4 + 0x80) + 0xa9) == param_2) goto LAB_01c01133;
        }
        iVar5 = iVar5 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    if (lVar2 == 0) {
      lVar2 = FUN_01c01230(param_1);
    }
  }
  return lVar2;
}

