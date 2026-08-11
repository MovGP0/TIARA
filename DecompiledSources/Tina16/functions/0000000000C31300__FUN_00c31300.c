/* Ghidra address: 00c31300 */
/* Ghidra symbol: FUN_00c31300 */


void FUN_00c31300(longlong param_1)

{
  undefined2 *puVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  undefined2 local_40;
  undefined1 uStack_3e;
  
  FUN_004af4a0(*(undefined8 *)(param_1 + 0x18),FUN_00c30980);
  if (*(char *)(param_1 + 0x2c) == '\0') {
    iVar5 = 0x100;
  }
  else {
    iVar5 = 0xff;
  }
  iVar7 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x10);
  *(int *)(param_1 + 0x28) = iVar7;
  local_50 = 0;
  if (-1 < iVar7 + -1) {
    do {
      if ((iVar5 <= local_50) ||
         (piVar3 = (int *)FUN_004aeac0(*(undefined8 *)(param_1 + 0x18),local_50), *piVar3 == 0)) {
        *(int *)(param_1 + 0x28) = local_50;
        break;
      }
      local_50 = local_50 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  FUN_00419260(param_1 + 0x20,&DAT_00c12750,1,0x100);
  iVar5 = *(int *)(param_1 + 0x28);
  local_50 = 0;
  if (-1 < iVar5 + -1) {
    do {
      lVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x18),local_50);
      *(int *)(lVar4 + 8) = local_50;
      lVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x18),local_50);
      puVar1 = (undefined2 *)(*(longlong *)(param_1 + 0x20) + (longlong)local_50 * 3);
      *puVar1 = *(undefined2 *)(lVar4 + 0x10);
      *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(lVar4 + 0x12);
      local_50 = local_50 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  local_50 = *(int *)(param_1 + 0x28);
  iVar5 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x10) + -1;
  if (local_50 <= iVar5) {
    iVar5 = (iVar5 - local_50) + 1;
    do {
      piVar3 = (int *)FUN_004aeac0(*(undefined8 *)(param_1 + 0x18),local_50);
      if (*piVar3 == 0) {
        piVar3[2] = *(int *)(*(longlong *)(piVar3 + 4) + 8);
      }
      else {
        local_44 = 0;
        local_48 = 0x2fa03;
        iVar7 = *(int *)(param_1 + 0x28);
        local_4c = 0;
        if (-1 < iVar7 + -1) {
          do {
            lVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x18),local_4c);
            iVar6 = (uint)*(byte *)(lVar4 + 0x10) - (uint)*(byte *)(piVar3 + 4);
            lVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x18),local_4c);
            iVar8 = (uint)*(byte *)(lVar4 + 0x11) - (uint)*(byte *)((longlong)piVar3 + 0x11);
            lVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x18),local_4c);
            iVar2 = (uint)*(byte *)(lVar4 + 0x12) - (uint)*(byte *)((longlong)piVar3 + 0x12);
            iVar2 = iVar6 * iVar6 + iVar8 * iVar8 + iVar2 * iVar2;
            if (iVar2 < local_48) {
              local_44 = local_4c;
              local_48 = iVar2;
            }
            local_4c = local_4c + 1;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
        }
        lVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x18),local_44);
        piVar3[2] = *(int *)(lVar4 + 8);
      }
      local_50 = local_50 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  if (*(char *)(param_1 + 0x2c) != '\0') {
    *(undefined1 *)(param_1 + 0x2d) = *(undefined1 *)(param_1 + 0x28);
    FUN_00c22dd0(&PTR_FUN_00c12858,&local_40,DAT_01e9f560);
    puVar1 = (undefined2 *)(*(longlong *)(param_1 + 0x20) + (longlong)*(int *)(param_1 + 0x28) * 3);
    *puVar1 = local_40;
    *(undefined1 *)(puVar1 + 1) = uStack_3e;
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  }
  return;
}

