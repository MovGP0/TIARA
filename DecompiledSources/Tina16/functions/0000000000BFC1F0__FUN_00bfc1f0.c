/* Ghidra address: 00bfc1f0 */
/* Ghidra symbol: FUN_00bfc1f0 */


int FUN_00bfc1f0(longlong param_1)

{
  int *piVar1;
  ushort *puVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  short *psVar8;
  undefined8 uVar9;
  short *psVar10;
  int local_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  int local_38;
  int local_34;
  longlong local_30;
  
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_30 = 0;
  local_6c = 0;
  iVar7 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x70) + 0x4c4);
  psVar10 = *(short **)(*(longlong *)(param_1 + 0x50) + 0x80);
  do {
    psVar8 = (short *)FUN_00bcc3c0(psVar10);
    if (psVar8 != psVar10) {
      lVar3 = (longlong)psVar8 - (longlong)psVar10;
      FUN_004169f0(&local_30,lVar3 / 2);
      uVar9 = FUN_00414de0(&local_30);
      FUN_00409a70(psVar10,uVar9,(lVar3 / 2) * 2);
      plVar4 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x70) + 0x4e8);
      iVar6 = (**(code **)(*plVar4 + 0x28))(plVar4);
      if (iVar6 < *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x70) + 0x4cc)) {
        local_6c = local_6c + 1;
        FUN_00bd1750(&local_40,0x20,iVar7 + -1);
        FUN_00416ba0(*(longlong *)(param_1 + 0x50) + 0x38,local_40,local_30);
        plVar4 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x70) + 0x4e8);
        (**(code **)(*plVar4 + 0x78))(plVar4,0);
        if (*(char *)(*(longlong *)(param_1 + 0x50) + 0x88) != '\0') {
          iVar6 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x70) + 0x4cc);
          local_34 = iVar6 + -1;
          plVar4 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x70) + 0x4e8);
          (**(code **)(*plVar4 + 0x18))(plVar4,&local_48,iVar6 + -2);
          local_38 = 0;
          if (local_48 != 0) {
            local_38 = *(int *)(local_48 + -4);
          }
          local_38 = local_38 + 1;
          FUN_00bd0e70(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x70) + 0x550),
                       5,&local_38,&local_38,0,0);
        }
      }
      else {
        plVar4 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x70) + 0x4e8);
        (**(code **)(*plVar4 + 0x18))
                  (plVar4,&local_50,
                   *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x70) + 0x4cc) + -1);
        FUN_00414b50(*(longlong *)(param_1 + 0x50) + 0x38,local_50);
        lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 0x38);
        iVar6 = 0;
        if (lVar5 != 0) {
          iVar6 = *(int *)(lVar5 + -4);
        }
        if (iVar6 < iVar7) {
          FUN_00bd1750(&local_58,0x20,(iVar7 - iVar6) + -1);
          FUN_00416cd0(*(longlong *)(param_1 + 0x50) + 0x38,3,
                       *(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x38),local_58,local_30);
        }
        else {
          FUN_00416ea0(local_30,*(longlong *)(param_1 + 0x50) + 0x38,iVar7);
        }
      }
      FUN_00c0f2c0(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x70),
                   *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x70) + 0x4cc) + -1,
                   *(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x38));
      if (*(char *)(*(longlong *)(param_1 + 0x50) + 0x88) != '\0') {
        local_60 = FUN_00bb7750(iVar7,*(undefined4 *)
                                       (*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x70) + 0x4cc)
                               );
        local_68 = FUN_00bb7750(iVar7 + (int)(lVar3 / 2),
                                *(undefined4 *)
                                 (*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x70) + 0x4cc));
        FUN_00bd0e70(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x70) + 0x550),1,
                     &local_60,&local_68,0,
                     *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x70) + 0x5f5));
      }
    }
    psVar10 = psVar8;
    if (*psVar8 == 0xd) {
      psVar10 = psVar8 + 1;
      if (*psVar10 == 10) {
        psVar10 = psVar8 + 2;
      }
      piVar1 = (int *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x70) + 0x4cc);
      *piVar1 = *piVar1 + 1;
      puVar2 = (ushort *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x70) + 0x63e);
      *puVar2 = *puVar2 | 4;
    }
  } while (*psVar10 != 0);
  iVar7 = 0;
  if (local_30 != 0) {
    iVar7 = *(int *)(local_30 + -4);
  }
  piVar1 = (int *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x70) + 0x4c4);
  *piVar1 = *piVar1 + iVar7;
  puVar2 = (ushort *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x70) + 0x63e);
  *puVar2 = *puVar2 | 2;
  FUN_00414560(&local_58,4);
  FUN_00414480(&local_30);
  return local_6c;
}

