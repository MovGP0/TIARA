/* Ghidra address: 01b10700 */
/* Ghidra symbol: FUN_01b10700 */


byte FUN_01b10700(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined2 uVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  byte bVar8;
  int iVar9;
  int *piVar10;
  double dVar11;
  byte local_79;
  uint local_6c;
  undefined2 local_62;
  undefined1 local_60 [16];
  undefined8 local_50 [4];
  
  local_79 = 1;
  iVar9 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x10);
  local_6c = 0;
  if (-1 < iVar9 + -1) {
    do {
      lVar1 = *(longlong *)(param_1 + 0x10);
      if (*(uint *)(lVar1 + 0x10) <= local_6c) {
        FUN_00594f90();
      }
      plVar2 = *(longlong **)(*(longlong *)(lVar1 + 8) + (longlong)(int)local_6c * 8);
      (**(code **)(*plVar2 + 0x40))(plVar2,local_60,plVar2[6],*(undefined8 *)(param_1 + 8));
      local_62 = (**(code **)(*plVar2 + 0x30))(plVar2,local_60);
      uVar3 = local_62;
      iVar7 = 1;
      pcVar6 = (char *)((longlong)&local_62 + 1);
      bVar8 = (byte)local_62;
      do {
        if ((bVar8 == 0) || (*pcVar6 == '\0')) {
          bVar8 = 0;
        }
        else {
          bVar8 = 1;
        }
        pcVar6 = pcVar6 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      local_62 = uVar3;
      dVar11 = (double)FUN_00409eb0();
      iVar7 = 0;
      pcVar6 = (char *)&local_62;
      piVar10 = (int *)local_50;
      do {
        if (*pcVar6 == '\0') {
          local_50[0] = (**(code **)(*plVar2 + 0x38))(plVar2,local_60);
          iVar4 = FUN_01b0fa20(plVar2,iVar7);
          if (iVar4 < *piVar10) {
            if (0.2 <= dVar11) {
              iVar4 = FUN_01b0fa20(plVar2,iVar7);
              FUN_01b0fa30(plVar2,iVar7,iVar4 + 1);
            }
            else {
              uVar5 = FUN_01b0fad0(plVar2,iVar7);
              uVar5 = FUN_00409e80(uVar5);
              FUN_01b0fa30(plVar2,iVar7,uVar5);
            }
          }
          else if (0.2 <= dVar11) {
            iVar4 = FUN_01b0fa20(plVar2,iVar7);
            FUN_01b0fa30(plVar2,iVar7,iVar4 + -1);
          }
          else {
            uVar5 = FUN_01b0fad0(plVar2,iVar7);
            uVar5 = FUN_00409e80(uVar5);
            FUN_01b0fa30(plVar2,iVar7,uVar5);
          }
        }
        iVar7 = iVar7 + 1;
        piVar10 = piVar10 + 1;
        pcVar6 = pcVar6 + 1;
      } while (iVar7 != 2);
      local_79 = local_79 & bVar8;
      local_6c = local_6c + 1;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  return local_79;
}

