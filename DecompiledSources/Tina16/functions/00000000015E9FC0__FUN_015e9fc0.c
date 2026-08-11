/* Ghidra address: 015e9fc0 */
/* Ghidra symbol: FUN_015e9fc0 */


/* WARNING: Removing unreachable block (ram,0x015ea142) */

void FUN_015e9fc0(longlong param_1,longlong param_2,int param_3,int param_4)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  undefined8 *local_90;
  int local_7c;
  undefined *local_78;
  undefined8 local_70;
  undefined1 local_68 [8];
  longlong local_60;
  undefined8 local_58;
  undefined8 local_50 [4];
  
  local_78 = (undefined *)0x0;
  local_70 = 0;
  local_50[0] = 0;
  local_58 = 0;
  local_60 = 0;
  FUN_017cc020(PTR_DAT_020027c0,10,0,0,0,0);
  if (*PTR_DAT_020017c0 == '\0') {
    lVar6 = *(longlong *)PTR_DAT_020027c0;
  }
  else {
    lVar6 = *(longlong *)PTR_DAT_020037b0;
  }
  local_90 = (undefined8 *)(param_2 + 8);
  FUN_00419260(&local_60,&DAT_015e9f90,1,(longlong)param_4);
  local_7c = 0;
  iVar7 = param_4;
  if (-1 < param_4 + -1) {
    do {
      if (*(int *)(*(longlong *)(param_1 + 0x818) + 0x10) <= local_7c) {
        uVar3 = FUN_0044d490(&PTR_FUN_004334c0,1,L"SC_GetDiagram");
        FUN_004134c0(uVar3);
      }
      lVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x818),local_7c);
      FUN_01571a60(lVar4,local_50);
      uVar2 = *(undefined4 *)(lVar4 + 0x30);
      FUN_015755e0(*(undefined8 *)(param_1 + 0x8d0),uVar2,local_68);
      FUN_0043f750(&local_70,1);
      FUN_00416ba0(&local_58,&LAB_015ea364,local_70);
      FUN_00416ba0(&local_78,local_50[0],local_58);
      FUN_01cc34d0(*(undefined8 *)(lVar6 + 8),local_78,uVar2,0);
      local_7c = local_7c + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  local_7c = 0;
  iVar7 = param_3;
  if (-1 < param_3 + -1) {
    do {
      uVar3 = *local_90;
      local_90 = local_90 + 1;
      iVar5 = 0;
      iVar8 = param_4;
      if (-1 < param_4 + -1) {
        do {
          uVar1 = *(undefined1 *)local_90;
          local_90 = (undefined8 *)((longlong)local_90 + 1);
          uVar2 = FUN_015e9f60(uVar1);
          if (local_7c == param_3 + -1) {
            *(char *)(local_60 + iVar5) = (char)uVar2;
          }
          FUN_01cc56d0(lVar6,iVar5,uVar3,uVar2);
          iVar5 = iVar5 + 1;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
      local_7c = local_7c + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  local_7c = 0;
  if (-1 < param_4 + -1) {
    do {
      FUN_01cc56d0(lVar6,local_7c,*(undefined8 *)(param_1 + 0x718),
                   *(undefined1 *)(local_60 + local_7c));
      local_7c = local_7c + 1;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  FUN_013d39a0(lVar6);
  FUN_00419430(&local_60,&DAT_015e9f90);
  FUN_00414560(&local_78,2);
  FUN_00419430(&local_60,&DAT_015e9f90);
  FUN_00414560(&local_58,2);
  return;
}

