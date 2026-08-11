/* Ghidra address: 00c237c0 */
/* Ghidra symbol: FUN_00c237c0 */


undefined1 FUN_00c237c0(longlong *param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  bool bVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  byte *pbVar8;
  int iVar9;
  undefined1 auStack_968 [32];
  longlong *local_948;
  undefined1 local_939;
  byte local_930 [256];
  longlong local_830;
  int local_828 [512];
  
  local_830 = 0;
  local_948 = param_1;
  if ((int)param_1[2] < 2) {
    local_939 = 0;
  }
  else {
    *(undefined1 *)((longlong)param_1 + 0x14) = 1;
    local_939 = 1;
    (**(code **)(*param_1 + 0x20))(param_1,local_828);
    FUN_00c236f0(auStack_968,0,(int)local_948[2] + -1);
    iVar9 = (int)local_948[2];
    iVar5 = 0;
    if (-1 < iVar9 + -1) {
      piVar7 = local_828 + 1;
      do {
        if (*piVar7 != iVar5) break;
        iVar5 = iVar5 + 1;
        piVar7 = piVar7 + 2;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
    iVar9 = (int)local_948[2];
    if (iVar5 != iVar9) {
      bVar4 = 0;
      if (-1 < iVar9 + -1) {
        piVar7 = local_828 + 1;
        do {
          local_930[*piVar7] = bVar4;
          bVar4 = bVar4 + 1;
          piVar7 = piVar7 + 2;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
      (**(code **)(*local_948 + 0x28))(local_948,local_930);
      bVar3 = false;
      iVar9 = (int)local_948[2];
      FUN_004192a0(&local_830,local_948[1],&DAT_00c12750);
      iVar5 = (int)local_948[2];
      iVar6 = 0;
      if (-1 < iVar5 + -1) {
        pbVar8 = local_930;
        piVar7 = local_828;
        do {
          puVar1 = (undefined2 *)(local_948[1] + (ulonglong)*pbVar8 * 3);
          puVar2 = (undefined2 *)(local_830 + (longlong)iVar6 * 3);
          *puVar1 = *puVar2;
          *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
          if ((*piVar7 == 0) && (!bVar3)) {
            bVar3 = true;
            iVar9 = iVar6;
          }
          iVar6 = iVar6 + 1;
          piVar7 = piVar7 + 2;
          pbVar8 = pbVar8 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      *(int *)(local_948 + 2) = iVar9;
      (**(code **)(*local_948 + 0x38))(local_948);
    }
  }
  FUN_00419430(&local_830,&DAT_00c12750);
  return local_939;
}

