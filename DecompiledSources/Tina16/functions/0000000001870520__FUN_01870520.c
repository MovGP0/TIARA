/* Ghidra address: 01870520 */
/* Ghidra symbol: FUN_01870520 */


void FUN_01870520(longlong *param_1,undefined8 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int local_48;
  int local_40;
  
  iVar3 = (**(code **)(*param_1 + 200))(param_1);
  iVar1 = *(int *)((longlong)param_1 + 0x84);
  local_40 = (int)param_1[0x11];
  iVar2 = *(int *)((longlong)param_1 + 0x54);
  local_48 = FUN_0040c770((double)(iVar2 * 0x8c) / (double)*(int *)PTR_DAT_02001400);
  local_48 = local_40 - local_48;
  iVar4 = FUN_0040c770((double)(iVar2 * 0xa2) / (double)*(int *)PTR_DAT_02001400);
  if (local_48 < 0) {
    local_40 = local_40 - local_48;
    local_48 = 0;
  }
  *param_2 = CONCAT44(iVar1 + iVar3 + 2,local_48);
  uVar5 = FUN_0040c770((double)(local_40 - local_48) /
                       ((double)iVar2 / (double)*(int *)PTR_DAT_02001400));
  *param_3 = uVar5;
  uVar5 = FUN_0040c770((double)iVar4 /
                       ((double)*(int *)((longlong)param_1 + 0x54) /
                       (double)*(int *)PTR_DAT_02001400));
  *param_4 = uVar5;
  return;
}

