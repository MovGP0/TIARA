/* Ghidra address: 013597b0 */
/* Ghidra symbol: FUN_013597b0 */


void FUN_013597b0(longlong param_1,longlong *param_2)

{
  char cVar1;
  short sVar2;
  int iVar3;
  undefined8 uVar4;
  int *piVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  int local_40;
  int local_3c [3];
  
  if (param_2 != (longlong *)0x0) {
    uVar4 = FUN_0198a580(param_2);
    if ((byte)uVar4 < 8) {
      bVar9 = ((int)CONCAT71((int7)((ulonglong)uVar4 >> 8),1) << ((byte)uVar4 & 0x1f) & 0x2aU) != 0;
    }
    else {
      bVar9 = false;
    }
    if ((bVar9) ||
       ((cVar1 = FUN_0198a580(param_2), cVar1 == '\x04' &&
        (sVar2 = (**(code **)(*param_2 + 0xf8))(param_2), sVar2 != 0x68)))) {
      iVar3 = (**(code **)(*param_2 + 0x1c8))();
      iVar7 = 0;
      if (-1 < iVar3 + -1) {
        do {
          (**(code **)(*param_2 + 0x1f0))(param_2,iVar7,local_3c,&local_40);
          iVar8 = 0;
          while (iVar8 < *(int *)(*(longlong *)(param_1 + 0x38) + 0x10)) {
            piVar5 = (int *)FUN_004aeac0(*(undefined8 *)(param_1 + 0x38),iVar8);
            if ((*piVar5 == local_3c[0]) &&
               (lVar6 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x38),iVar8),
               *(int *)(lVar6 + 4) == local_40)) {
              uVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x38),iVar8);
              FUN_004095f0(uVar4);
              FUN_004ae870(*(undefined8 *)(param_1 + 0x38),iVar8);
            }
            else {
              iVar8 = iVar8 + 1;
            }
          }
          iVar7 = iVar7 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
    }
  }
  return;
}

