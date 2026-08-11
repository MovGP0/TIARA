/* Ghidra address: 0068c750 */
/* Ghidra symbol: FUN_0068c750 */


void FUN_0068c750(longlong *param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  bool bVar7;
  
  if ((*(uint *)((longlong)param_1 + 0xa4) & 0x2000) != 0) {
    uVar2 = FUN_0068e260(param_1);
    *(undefined4 *)(param_1 + 0x9d) = uVar2;
    uVar4 = (**(code **)(*(longlong *)param_1[0x94] + 0x28))((longlong *)param_1[0x94]);
    if (0 < (int)uVar4) {
      if (*(byte *)((longlong)param_1 + 0x4cc) < 8) {
        bVar7 = ((int)CONCAT71((int7)((ulonglong)uVar4 >> 8),1) <<
                 (*(byte *)((longlong)param_1 + 0x4cc) & 0x1f) & 0x18U) != 0;
      }
      else {
        bVar7 = false;
      }
      if (bVar7) {
        uVar2 = (**(code **)(*(longlong *)param_1[0x94] + 0x28))((longlong *)param_1[0x94]);
        *(undefined4 *)(param_1 + 0x99) = uVar2;
      }
      else {
        lVar5 = FUN_004b6930(&PTR_FUN_00478280,1);
        param_1[0x9b] = lVar5;
        (**(code **)(*param_1 + 0x2d8))(param_1,lVar5);
        if ((char)param_1[0x92] != '\0') {
          iVar3 = (**(code **)(*(longlong *)param_1[0x94] + 0x28))((longlong *)param_1[0x94]);
          FUN_00419260(param_1 + 0x9e,&DAT_00676a88,1,(longlong)iVar3);
          iVar3 = (**(code **)(*(longlong *)param_1[0x94] + 0x28))();
          iVar6 = 0;
          if (-1 < iVar3 + -1) {
            do {
              uVar1 = FUN_0068bca0(param_1,iVar6);
              *(undefined1 *)(param_1[0x9e] + (longlong)iVar6) = uVar1;
              iVar6 = iVar6 + 1;
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
          }
        }
      }
      uVar2 = FUN_0068bee0(param_1);
      *(undefined4 *)(param_1 + 0x9c) = uVar2;
      uVar2 = (**(code **)(*param_1 + 0x260))(param_1);
      *(undefined4 *)((longlong)param_1 + 0x4e4) = uVar2;
    }
  }
  FUN_00655750(param_1);
  return;
}

