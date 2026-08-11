/* Ghidra address: 00aa17f0 */
/* Ghidra symbol: FUN_00aa17f0 */


void FUN_00aa17f0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined7 uVar5;
  longlong *plVar4;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  uVar5 = (undefined7)((ulonglong)param_1 >> 8);
  if (*(byte *)(param_1 + 0x60) < 8) {
    bVar8 = ((int)CONCAT71(uVar5,1) << (*(byte *)(param_1 + 0x60) & 0x1f) & 0x60U) != 0;
  }
  else {
    bVar8 = false;
  }
  if (!bVar8) {
    if (*(byte *)(param_1 + 0x4c) < 8) {
      bVar8 = ((int)CONCAT71(uVar5,1) << (*(byte *)(param_1 + 0x4c) & 0x1f) & 0xcU) != 0;
    }
    else {
      bVar8 = false;
    }
    if (!bVar8) {
      *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x38) + 0x10) = param_4;
      goto LAB_00aa18a4;
    }
  }
  lVar1 = *(longlong *)(param_1 + 0xa8);
  lVar2 = *(longlong *)(lVar1 + 0x38);
  uVar3 = *(undefined8 *)(lVar2 + 0x28);
  FUN_00a73df0(lVar2,*(undefined4 *)(*(longlong *)(param_1 + 0x558) + 8));
  lVar1 = *(longlong *)(lVar1 + 0x38);
  *(undefined4 *)(lVar1 + 0x10) = param_4;
  *(undefined8 *)(lVar1 + 0x28) = uVar3;
LAB_00aa18a4:
  iVar7 = *(int *)(*(longlong *)(param_1 + 0x530) + 0x10);
  iVar6 = 0;
  if (-1 < iVar7 + -1) {
    do {
      plVar4 = (longlong *)FUN_00ac3910(*(undefined8 *)(param_1 + 0x530),iVar6);
      (**(code **)(*plVar4 + 0x58))
                (plVar4,param_2,param_3,*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x38),
                 param_5,param_6,param_7);
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  return;
}

