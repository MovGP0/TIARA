/* Ghidra address: 00bfc660 */
/* Ghidra symbol: FUN_00bfc660 */


int FUN_00bfc660(longlong param_1)

{
  int *piVar1;
  ushort *puVar2;
  longlong *plVar3;
  int iVar4;
  short *psVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  short *psVar8;
  int iVar9;
  int local_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50 [2];
  longlong local_40 [2];
  
  local_60 = 0;
  local_68 = 0;
  local_50[0] = 0;
  local_58 = 0;
  local_40[0] = 0;
  local_6c = 0;
  *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x70) + 0x4c4) = 1;
  psVar8 = *(short **)(*(longlong *)(param_1 + 0x50) + 0x80);
  do {
    psVar5 = (short *)FUN_00bcc3c0(psVar8);
    if (psVar5 == psVar8) {
      FUN_00414480(local_40);
    }
    else {
      FUN_004169f0(local_40,((longlong)psVar5 - (longlong)psVar8) / 2);
      uVar6 = FUN_00414de0(local_40);
      FUN_00409a70(psVar8,uVar6,(((longlong)psVar5 - (longlong)psVar8) / 2) * 2);
    }
    if (*psVar5 == 0) {
      plVar3 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x70) + 0x4e8);
      iVar4 = (**(code **)(*plVar3 + 0x28))(plVar3);
      iVar9 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x70) + 0x4cc);
      if (iVar4 < iVar9) {
        plVar3 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x70) + 0x4e8);
        (**(code **)(*plVar3 + 0x78))(plVar3,local_40[0]);
      }
      else {
        plVar3 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x70) + 0x4e8);
        iVar9 = iVar9 + -1;
        (**(code **)(*plVar3 + 0x18))(plVar3,&local_58,iVar9);
        FUN_00416ba0(local_50,local_40[0],local_58);
        (**(code **)(*plVar3 + 0x40))(plVar3,iVar9);
      }
      uVar7 = FUN_00c09df0(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x70));
      if ((uVar7 & 0x4000000) != 0) {
        plVar3 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x70) + 0x4e8);
        iVar9 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x70) + 0x4cc) + -1;
        (**(code **)(*plVar3 + 0x18))(plVar3,&local_68,iVar9);
        FUN_00bf1640(&local_60,local_68);
        (**(code **)(*plVar3 + 0x40))(plVar3,iVar9);
      }
      iVar9 = 0;
      if (local_40[0] != 0) {
        iVar9 = *(int *)(local_40[0] + -4);
      }
      *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x70) + 0x4c4) = iVar9 + 1;
    }
    else {
      plVar3 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x70) + 0x4e8);
      iVar9 = (**(code **)(*plVar3 + 0x28))(plVar3);
      if ((*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x70) + 0x4cc) == iVar9) ||
         (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x70) + 0x4e2) != '\0')) {
        plVar3 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x70) + 0x4e8);
        (**(code **)(*plVar3 + 200))
                  (plVar3,*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x70) + 0x4cc) + -1
                   ,0);
        local_6c = local_6c + 1;
      }
      FUN_00c0f2c0(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x70),
                   *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x70) + 0x4cc) + -1);
      piVar1 = (int *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x70) + 0x4cc);
      *piVar1 = *piVar1 + 1;
      puVar2 = (ushort *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x70) + 0x63e);
      *puVar2 = *puVar2 | 4;
      local_6c = local_6c + 1;
      psVar8 = psVar5;
      if (*psVar5 == 0xd) {
        psVar8 = psVar5 + 1;
      }
      psVar5 = psVar8;
      if (*psVar8 == 10) {
        psVar8 = psVar8 + 1;
        psVar5 = psVar8;
      }
    }
  } while (*psVar5 != 0);
  FUN_00c0a950(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x70),2);
  FUN_00414560(&local_68,4);
  FUN_00414480(local_40);
  return local_6c;
}

