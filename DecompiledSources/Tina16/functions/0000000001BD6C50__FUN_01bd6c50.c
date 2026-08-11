/* Ghidra address: 01bd6c50 */
/* Ghidra symbol: FUN_01bd6c50 */


void FUN_01bd6c50(longlong *param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  int iVar12;
  bool bVar13;
  undefined1 local_48 [24];
  
  plVar7 = (longlong *)FUN_00781840();
  cVar3 = (**(code **)(*plVar7 + 0x98))(plVar7);
  if (cVar3 != '\0') {
    uVar8 = FUN_00781840();
    cVar3 = FUN_00779360(uVar8);
    if (cVar3 == '\0') {
      uVar8 = FUN_00781840();
      uVar4 = FUN_007793c0(uVar8,0xff00000f);
      FUN_005fdab0(*(undefined8 *)(param_1[0x96] + 0x80),uVar4);
      (**(code **)(*param_1 + 0xe0))(param_1,local_48);
      (**(code **)(*(longlong *)param_1[0x96] + 0xa8))((longlong *)param_1[0x96],local_48);
    }
  }
  FUN_01c00850(param_1);
  iVar5 = (**(code **)(*param_1 + 0x2e8))(param_1);
  if ((iVar5 != 0) && (cVar3 = FUN_01c02d10(param_1), cVar3 != '\0')) {
    lVar9 = (**(code **)(*param_1 + 0x350))(param_1);
    lVar10 = (**(code **)(*param_1 + 0x298))(param_1);
    if ((lVar9 != 0) &&
       (((lVar10 != 0 && (*(longlong *)(lVar9 + 0x80) != 0)) && (*(longlong *)(lVar10 + 0x80) != 0))
       )) {
      uVar6 = *(uint *)(*(longlong *)(lVar9 + 0x80) + 0x94);
      uVar11 = (ulonglong)uVar6;
      if (uVar6 != *(uint *)(*(longlong *)(lVar10 + 0x80) + 0x94)) {
        if (*(char *)((longlong)param_1 + 0x50c) != '\0') {
          if (*(byte *)((longlong)param_1 + 0x4c3) < 8) {
            uVar6 = (int)CONCAT71((uint7)(uint3)(uVar6 >> 8),1) <<
                    (*(byte *)((longlong)param_1 + 0x4c3) & 0x1f);
            uVar6 = CONCAT31((int3)(uVar6 >> 8),(uVar6 & 3) != 0);
          }
          else {
            uVar6 = 0;
          }
          uVar11 = (ulonglong)uVar6;
          if ((char)uVar6 != '\0') {
            uVar11 = 0;
            iVar12 = (int)param_1[0xa0] + -1;
            iVar5 = 1;
            if (0 < iVar12) {
              do {
                iVar2 = *(int *)((longlong)param_1 + 0x504) * 2;
                iVar1 = *(int *)(*(longlong *)(lVar10 + 0x80) + 0x9c);
                uVar11 = (**(code **)(*param_1 + 0x3a0))
                                   (param_1,iVar2 + iVar1 + (iVar5 + -1) * (iVar2 + iVar1 + 2) + 1,2
                                   );
                iVar5 = iVar5 + 1;
                iVar12 = iVar12 + -1;
              } while (iVar12 != 0);
            }
          }
        }
        if ((char)param_1[0xa3] != '\0') {
          if (*(byte *)((longlong)param_1 + 0x4c3) < 8) {
            bVar13 = ((int)CONCAT71((int7)(uVar11 >> 8),1) <<
                      (*(byte *)((longlong)param_1 + 0x4c3) & 0x1f) & 0xcU) != 0;
          }
          else {
            bVar13 = false;
          }
          if (bVar13) {
            iVar12 = *(int *)((longlong)param_1 + 0x4fc) + -1;
            iVar5 = 1;
            if (0 < iVar12) {
              do {
                iVar2 = (int)param_1[0xa1] * 2;
                iVar1 = *(int *)(*(longlong *)(lVar10 + 0x80) + 0x98);
                (**(code **)(*param_1 + 0x3a0))
                          (param_1,iVar2 + iVar1 + (iVar5 + -1) * (iVar2 + iVar1 + 2) + 1,2);
                iVar5 = iVar5 + 1;
                iVar12 = iVar12 + -1;
              } while (iVar12 != 0);
            }
          }
        }
      }
    }
  }
  return;
}

