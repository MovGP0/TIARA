/* Ghidra address: 01d0f910 */
/* Ghidra symbol: FUN_01d0f910 */


void FUN_01d0f910(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = (int)param_1[2];
  iVar4 = 0;
  if (-1 < iVar5 + -1) {
    do {
      uVar1 = FUN_004aeac0(param_1,iVar4);
      FUN_004095f0(uVar1);
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  (**(code **)(*param_1 + 0x10))(param_1);
  FUN_01d0f8a0(param_2);
  iVar5 = (int)param_3[2];
  iVar4 = 0;
  if (-1 < iVar5 + -1) {
    do {
      lVar2 = FUN_004aeac0(param_3,iVar4);
      iVar6 = *(int *)(*(longlong *)(lVar2 + 0x13) + 0x10);
      iVar3 = 0;
      if (-1 < iVar6 + -1) {
        do {
          lVar2 = FUN_004aeac0(param_3,iVar4);
          uVar1 = FUN_004aeac0(*(undefined8 *)(lVar2 + 0x13),iVar3);
          FUN_004095f0(uVar1);
          iVar3 = iVar3 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      lVar2 = FUN_004aeac0(param_3,iVar4);
      FUN_00410f20(*(undefined8 *)(lVar2 + 0x13));
      lVar2 = FUN_004aeac0(param_3,iVar4);
      iVar6 = *(int *)(*(longlong *)(lVar2 + 0x1b) + 0x10);
      iVar3 = 0;
      if (-1 < iVar6 + -1) {
        do {
          lVar2 = FUN_004aeac0(param_3,iVar4);
          uVar1 = FUN_004aeac0(*(undefined8 *)(lVar2 + 0x1b),iVar3);
          FUN_004095f0(uVar1);
          iVar3 = iVar3 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      lVar2 = FUN_004aeac0(param_3,iVar4);
      FUN_00410f20(*(undefined8 *)(lVar2 + 0x1b));
      lVar2 = FUN_004aeac0(param_3,iVar4);
      iVar6 = *(int *)(*(longlong *)(lVar2 + 0x23) + 0x10);
      iVar3 = 0;
      if (-1 < iVar6 + -1) {
        do {
          lVar2 = FUN_004aeac0(param_3,iVar4);
          uVar1 = FUN_004aeac0(*(undefined8 *)(lVar2 + 0x23),iVar3);
          FUN_004095f0(uVar1);
          iVar3 = iVar3 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      lVar2 = FUN_004aeac0(param_3,iVar4);
      FUN_00410f20(*(undefined8 *)(lVar2 + 0x23));
      uVar1 = FUN_004aeac0(param_3,iVar4);
      FUN_004095f0(uVar1);
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  (**(code **)(*param_3 + 0x10))(param_3);
  return;
}

