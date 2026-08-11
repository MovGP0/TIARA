/* Ghidra address: 01887690 */
/* Ghidra symbol: FUN_01887690 */


void FUN_01887690(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  int *piVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_38 = 0;
  local_40 = 0;
  local_30 = 0;
  FUN_018039a0(param_2);
  iVar10 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x10);
  iVar9 = 0;
  if (-1 < iVar10 + -1) {
    do {
      uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x10),iVar9);
      FUN_004b6dc0(uVar2,0);
      iVar9 = iVar9 + 1;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  iVar10 = FUN_01888a70();
  iVar9 = 0;
  if (-1 < iVar10 + -1) {
    do {
      iVar11 = iVar9 + 1;
      iVar1 = FUN_01888a70(*(undefined8 *)(param_1 + 8));
      if (iVar11 < iVar1) {
        piVar3 = (int *)FUN_01888b80(*(undefined8 *)(param_1 + 8),iVar9);
        piVar4 = (int *)FUN_01888b80(*(undefined8 *)(param_1 + 8),iVar11);
        if (*piVar3 != *piVar4) goto LAB_01887794;
        lVar5 = FUN_01888b80(*(undefined8 *)(param_1 + 8),iVar11);
        lVar6 = FUN_01888b80(*(undefined8 *)(param_1 + 8),iVar9);
        iVar1 = *(int *)(lVar5 + 4) - *(int *)(lVar6 + 4);
      }
      else {
LAB_01887794:
        puVar8 = (undefined4 *)FUN_01888b80(*(undefined8 *)(param_1 + 8),iVar9);
        puVar7 = (undefined8 *)FUN_004aeac0(*(undefined8 *)(param_1 + 0x10),*puVar8);
        iVar1 = (**(code **)*puVar7)(puVar7);
        lVar5 = FUN_01888b80(*(undefined8 *)(param_1 + 8),iVar9);
        iVar1 = iVar1 - *(int *)(lVar5 + 4);
      }
      lVar5 = FUN_01803a30(param_2);
      FUN_00414ad0(lVar5 + 0x20,L"item");
      puVar8 = (undefined4 *)FUN_01888b80(*(undefined8 *)(param_1 + 8),iVar9);
      uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x10),*puVar8);
      FUN_01886d40(&local_30,uVar2,iVar1);
      FUN_00416cd0(lVar5 + 0x30,3,L"stream=\"",local_30,&DAT_01887960);
      lVar5 = FUN_01803a30(lVar5);
      FUN_00414ad0(lVar5 + 0x20,L"size");
      lVar6 = FUN_01888b80(*(undefined8 *)(param_1 + 8),iVar9);
      FUN_0043f750(&local_38,*(undefined4 *)(lVar6 + 0xc));
      lVar6 = FUN_01888b80(*(undefined8 *)(param_1 + 8),iVar9);
      FUN_0043f750(&local_40,*(undefined4 *)(lVar6 + 0x10));
      FUN_00416cd0(lVar5 + 0x30,5,&DAT_01887988,local_38,L"\" h=\"",local_40,&DAT_01887960);
      iVar9 = iVar9 + 1;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  FUN_00414560(&local_40,3);
  return;
}

