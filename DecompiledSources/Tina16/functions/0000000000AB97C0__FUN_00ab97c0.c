/* Ghidra address: 00ab97c0 */
/* Ghidra symbol: FUN_00ab97c0 */


void FUN_00ab97c0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  int iVar11;
  int local_3c;
  
  *(undefined1 *)(param_2 + 0x48) = 0;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x2d0);
  iVar11 = *(int *)(lVar1 + 0x10);
  local_3c = 0;
  if (-1 < iVar11 + -1) {
    do {
      iVar2 = FUN_00aa8d90(lVar1,local_3c);
      iVar3 = FUN_00aa8de0(lVar1,local_3c);
      lVar5 = *(longlong *)(param_2 + 8) - *(longlong *)(param_1 + 0xd8);
      iVar8 = *(int *)(param_1 + 0x68) + (int)(lVar5 / 2);
      if ((iVar8 < iVar3) && (iVar2 < iVar8 + *(int *)(param_2 + 0x20))) {
        if (*(longlong *)(param_2 + 0x40) == 0) {
          uVar4 = FUN_00610ca0(&LAB_00a84398,CONCAT71((int7)((ulonglong)(lVar5 % 2) >> 8),1));
          *(undefined8 *)(param_2 + 0x40) = uVar4;
          *(undefined1 *)(param_2 + 0x48) = 1;
        }
        lVar5 = FUN_00410e60(&DAT_00a841e8,1);
        FUN_004ae7e0(*(undefined8 *)(param_2 + 0x40),lVar5);
        lVar6 = FUN_004aeac0(lVar1,local_3c);
        puVar9 = (undefined8 *)(lVar6 + 0x1c);
        puVar10 = (undefined8 *)(lVar5 + 0x24);
        for (lVar7 = 0x13; lVar7 != 0; lVar7 = lVar7 + -1) {
          *puVar10 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar10 = puVar10 + 1;
        }
        if (iVar2 < iVar8) {
          *(undefined1 *)(lVar5 + 0x10) = 1;
          *(int *)(lVar5 + 8) =
               (int)((*(longlong *)(param_2 + 8) - *(longlong *)(param_1 + 0xd8)) / 2);
        }
        else {
          *(undefined1 *)(lVar5 + 0x10) = 0;
          *(int *)(lVar5 + 8) = iVar2 - *(int *)(param_1 + 0x68);
        }
        if (iVar8 + *(int *)(param_2 + 0x20) < iVar3) {
          *(undefined1 *)(lVar5 + 0x11) = 1;
          *(int *)(lVar5 + 0xc) =
               (int)((*(longlong *)(param_2 + 8) - *(longlong *)(param_1 + 0xd8)) / 2) +
               *(int *)(param_2 + 0x20);
        }
        else {
          *(undefined1 *)(lVar5 + 0x11) = 0;
          *(int *)(lVar5 + 0xc) = iVar3 - *(int *)(param_1 + 0x68);
        }
      }
      local_3c = local_3c + 1;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
  }
  return;
}

