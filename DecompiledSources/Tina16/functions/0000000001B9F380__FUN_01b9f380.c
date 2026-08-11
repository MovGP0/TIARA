/* Ghidra address: 01b9f380 */
/* Ghidra symbol: FUN_01b9f380 */


void FUN_01b9f380(longlong param_1)

{
  double *pdVar1;
  double dVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  undefined8 local_970;
  undefined4 local_964;
  undefined1 local_960 [2368];
  
  local_970 = 0;
  FUN_00417580(local_960,&DAT_01d0d0b8);
  cVar5 = (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_02004e40 + 0x18f0) + 0xa8))
                    (*(longlong **)(*(longlong *)PTR_DAT_02004e40 + 0x18f0));
  if (cVar5 != '\0') {
    puVar3 = *(undefined8 **)(param_1 + 0x708);
    if (puVar3 != (undefined8 *)0x0) {
      uVar9 = (**(code **)*puVar3)(puVar3);
      FUN_00418590(uVar9,&DAT_01984da0);
    }
    FUN_00417c40(local_960,PTR_DAT_02004010,&DAT_01d0d0b8);
    FUN_01d0e500();
    FUN_00724270(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x18f0),&local_970);
    uVar9 = FUN_0065b870(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0xa10));
    uVar9 = FUN_014a7fd0(local_970,uVar9);
    *(undefined8 *)(param_1 + 0x708) = uVar9;
    FUN_00417c40(PTR_DAT_02004010,local_960,&DAT_01d0d0b8);
    if (*(longlong *)(param_1 + 0x708) != 0) {
      FUN_019a57f0(*(longlong *)(param_1 + 0x708),
                   *(undefined8 *)(*(longlong *)(param_1 + 0x6f0) + 0x4a0),1,0);
    }
    iVar6 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x6f0) + 0x4a0) + 0x28))();
    iVar12 = 0;
    if (-1 < iVar6 + -1) {
      do {
        cVar5 = FUN_01b9f220(param_1,iVar12,&local_964);
        if (cVar5 == '\0') {
LAB_01b9f5a4:
          uVar8 = 0;
        }
        else {
          plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x6e8) + 0x4a0);
          lVar10 = (**(code **)(*plVar4 + 0x30))(plVar4,local_964);
          plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x6f0) + 0x4a0);
          lVar11 = (**(code **)(*plVar4 + 0x30))(plVar4,iVar12);
          iVar7 = FUN_00416db0(*(undefined8 *)(*(longlong *)(lVar10 + 0x1a8) + 0x30),
                               *(undefined8 *)(*(longlong *)(lVar11 + 0x1a8) + 0x30));
          if (iVar7 != 0) goto LAB_01b9f5a4;
          plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x6e8) + 0x4a0);
          lVar10 = (**(code **)(*plVar4 + 0x30))(plVar4,local_964);
          plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x6f0) + 0x4a0);
          lVar11 = (**(code **)(*plVar4 + 0x30))(plVar4,iVar12);
          dVar2 = *(double *)(*(longlong *)(lVar11 + 0x1a8) + 0x88);
          pdVar1 = (double *)(*(longlong *)(lVar10 + 0x1a8) + 0x88);
          if (dVar2 < *pdVar1 || dVar2 == *pdVar1) goto LAB_01b9f5a4;
          uVar8 = (undefined4)CONCAT71((int7)((ulonglong)*(longlong *)(lVar11 + 0x1a8) >> 8),1);
        }
        FUN_0068bd10(*(undefined8 *)(param_1 + 0x6f0),iVar12,uVar8);
        iVar12 = iVar12 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
  }
  FUN_00414480(&local_970);
  FUN_00417740(local_960,&DAT_01d0d0b8);
  return;
}

