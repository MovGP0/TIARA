/* Ghidra address: 016af0f0 */
/* Ghidra symbol: FUN_016af0f0 */


void FUN_016af0f0(longlong param_1,char param_2,longlong param_3)

{
  int *piVar1;
  ushort *puVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 local_3c [3];
  
  iVar8 = 0;
  uVar6 = (uint)(param_2 == '\x0e');
  iVar9 = *(int *)(param_1 + 0x24) + -1;
  uVar3 = (uint)(param_2 == '\x0e');
  if ((int)uVar3 <= iVar9) {
    iVar9 = (iVar9 - uVar3) + 1;
    do {
      if (*(int *)(*(longlong *)(param_1 + 0x28) + (longlong)(int)uVar6 * 8) == 0) {
        FUN_016af040(param_1,uVar6,iVar8,param_2);
        iVar8 = iVar8 + 1;
      }
      uVar6 = uVar6 + 1;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  iVar9 = *(int *)(param_1 + 0x24);
  iVar7 = 0;
  if (-1 < iVar9 + -1) {
    do {
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 8) + (longlong)iVar7 * 8);
      while (lVar4 != 0) {
        lVar5 = *(longlong *)(lVar4 + 8);
        FUN_004095f0(lVar4);
        lVar4 = lVar5;
      }
      iVar7 = iVar7 + 1;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  lVar4 = FUN_00409570((longlong)(iVar8 << 3));
  FUN_0040d200(lVar4,(longlong)(iVar8 << 3),0xff);
  if ((param_2 == '\x0e') && (**(int **)(param_1 + 0x28) < 0)) {
    **(undefined4 **)(param_1 + 0x28) = 0;
  }
  else if (param_2 == '\r') {
    iVar9 = *(int *)(param_1 + 0x24);
    iVar7 = 0;
    if (-1 < iVar9 + -1) {
      do {
        *(undefined4 *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar7 * 8) =
             *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 4 + (longlong)iVar7 * 8);
        iVar7 = iVar7 + 1;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
  }
  else {
    iVar9 = *(int *)(param_1 + 0x24);
    iVar7 = 0;
    if (-1 < iVar9 + -1) {
      do {
        lVar5 = (longlong)iVar7;
        puVar2 = (ushort *)
                 (lVar4 + (longlong)*(int *)(*(longlong *)(param_1 + 0x28) + 4 + lVar5 * 8) * 8);
        if (*(int *)(*(longlong *)(param_1 + 0x28) + lVar5 * 8) < (int)(uint)*puVar2) {
          *puVar2 = *(ushort *)(*(longlong *)(param_1 + 0x28) + lVar5 * 8);
          *(int *)(puVar2 + 2) = iVar7;
        }
        if (param_2 == '\x0e') {
          piVar1 = (int *)(*(longlong *)(param_1 + 0x28) + lVar5 * 8);
          *piVar1 = (*piVar1 - *(int *)(*(longlong *)(param_1 + 0x28) + 4 + lVar5 * 8)) + -1;
        }
        iVar7 = iVar7 + 1;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
    if (param_2 == '\x0e') {
      iVar7 = 0;
      iVar9 = iVar8;
      if (-1 < iVar8 + -1) {
        do {
          *(undefined4 *)
           (*(longlong *)(param_1 + 0x28) + (longlong)*(int *)(lVar4 + 4 + (longlong)iVar7 * 8) * 8)
               = 0;
          iVar7 = iVar7 + 1;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
    }
    else if ((param_3 != 0) && (1 < iVar8)) {
      iVar7 = iVar8 + -1;
      iVar9 = 1;
      if (0 < iVar7) {
        do {
          local_3c[0] = *(undefined4 *)(lVar4 + 4 + (longlong)iVar9 * 8);
          FUN_00597de0(param_3 + 8,local_3c);
          iVar9 = iVar9 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
    }
  }
  FUN_004095f0(lVar4,(longlong)(iVar8 << 3));
  return;
}

