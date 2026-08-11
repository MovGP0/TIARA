/* Ghidra address: 00ab6080 */
/* Ghidra symbol: FUN_00ab6080 */


void FUN_00ab6080(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  
  iVar8 = *(int *)(param_2 + 0x10);
  iVar7 = 0;
  if (-1 < iVar8 + -1) {
    do {
      plVar4 = (longlong *)FUN_00ac50c0(param_2,iVar7);
      uVar5 = FUN_00a94a50(*(undefined8 *)(*(longlong *)(param_1 + 0x80) + 0x118),(int)plVar4[0xd]);
      uVar5 = (**(code **)(*plVar4 + 0xe0))
                        (plVar4,*(undefined8 *)(param_1 + 0x88),uVar5,
                         *(undefined4 *)(param_1 + 0xa0),*(undefined4 *)(param_1 + 0xa8));
      if (*(char *)((longlong)plVar4 + 0xbc) == '\0') {
        if (*(byte *)((longlong)plVar4 + 0x4c) < 8) {
          uVar1 = (int)CONCAT71((int7)((ulonglong)uVar5 >> 8),1) <<
                  (*(byte *)((longlong)plVar4 + 0x4c) & 0x1f);
          bVar9 = (uVar1 & 0xc) != 0;
          uVar6 = (ulonglong)CONCAT31((int3)(uVar1 >> 8),bVar9);
        }
        else {
          uVar6 = 0;
          bVar9 = false;
        }
        if (bVar9) {
          *(undefined1 *)
           (*(longlong *)(*(longlong *)(param_1 + 0x80) + 0xe0) + (longlong)(int)plVar4[0xd]) = 1;
        }
        else {
          if (*(byte *)(plVar4 + 0xc) < 8) {
            bVar9 = ((int)CONCAT71((int7)(uVar6 >> 8),1) << (*(byte *)(plVar4 + 0xc) & 0x1f) & 0x60U
                    ) != 0;
          }
          else {
            bVar9 = false;
          }
          if (bVar9) {
            iVar2 = FUN_00ac4f20(plVar4);
            **(int **)(param_1 + 0x98) = **(int **)(param_1 + 0x98) + iVar2;
            *(undefined1 *)
             (*(longlong *)(*(longlong *)(param_1 + 0x80) + 0xe0) + (longlong)(int)plVar4[0xd]) = 1;
            iVar2 = **(int **)(param_1 + 0x90);
            iVar3 = FUN_00ac4f20(plVar4);
            if (iVar3 < iVar2) {
              iVar3 = iVar2;
            }
            **(int **)(param_1 + 0x90) = iVar3;
          }
          else {
            iVar2 = **(int **)(param_1 + 0x90);
            iVar3 = (**(code **)(*plVar4 + 200))(plVar4);
            if (iVar3 < iVar2) {
              iVar3 = iVar2;
            }
            **(int **)(param_1 + 0x90) = iVar3;
          }
        }
      }
      iVar7 = iVar7 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  return;
}

