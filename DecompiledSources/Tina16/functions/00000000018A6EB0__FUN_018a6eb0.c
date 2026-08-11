/* Ghidra address: 018a6eb0 */
/* Ghidra symbol: FUN_018a6eb0 */


void FUN_018a6eb0(longlong *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  undefined4 uVar7;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  
  uVar1 = FUN_0064d0b0(param_1);
  lVar6 = param_1[0xa9];
  FUN_018a5310(param_1[0xa5],&local_38,*(undefined4 *)((longlong)param_1 + 0x50c),uVar1,lVar6,
               (char)param_1[0xaa]);
  uVar7 = (undefined4)((ulonglong)lVar6 >> 0x20);
  uVar1 = FUN_0040c770((double)(int)DAT_02110674 * (double)param_1[0xa9]);
  uVar2 = FUN_0040c770((double)DAT_02110674._4_4_ * (double)param_1[0xa9]);
  uVar3 = FUN_0040c770((double)(int)DAT_0211067c * (double)param_1[0xa9]);
  uVar4 = FUN_0040c770((double)DAT_0211067c._4_4_ * (double)param_1[0xa9]);
  FUN_00498350(&local_48,uVar1,uVar2,uVar3,CONCAT44(uVar7,uVar4));
  if (local_34 + local_44 < (int)param_1[0xa4]) {
LAB_018a6f97:
    iVar5 = FUN_0064d120(param_1);
    FUN_018933f0(param_1,((local_34 + local_3c) - iVar5) + 0x14);
  }
  else {
    iVar5 = FUN_0064d120(param_1);
    if ((int)param_1[0xa4] + iVar5 < local_34 + local_3c) goto LAB_018a6f97;
  }
  if (*(int *)((longlong)param_1 + 0x51c) <= local_38 + local_48) {
    iVar5 = FUN_0064d0b0(param_1);
    if (local_38 + local_40 <= *(int *)((longlong)param_1 + 0x51c) + iVar5) goto LAB_018a6ff4;
  }
  iVar5 = FUN_0064d0b0(param_1);
  FUN_018932d0(param_1,((local_38 + local_40) - iVar5) + 0x14);
LAB_018a6ff4:
  (**(code **)(*param_1 + 0x188))(param_1);
  return;
}

