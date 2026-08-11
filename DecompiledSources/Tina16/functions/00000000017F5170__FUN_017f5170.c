/* Ghidra address: 017f5170 */
/* Ghidra symbol: FUN_017f5170 */


void FUN_017f5170(longlong param_1,longlong *param_2)

{
  char cVar1;
  short sVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  int local_5c;
  undefined8 local_58;
  undefined8 local_50;
  int local_48;
  int local_44;
  int local_40;
  int local_38;
  int local_34;
  int local_30;
  
  uVar3 = FUN_0198d430(param_1);
  (**(code **)(*param_2 + 0x68))(param_2,uVar3,&local_48);
  sVar2 = (**(code **)(*param_2 + 0xf8))(param_2);
  if (sVar2 == 0x68) {
    FUN_00b95880(&local_48,0xfffffffd,0xfffffffd);
  }
  else {
    FUN_017f5030(auStack_98);
  }
  lVar4 = 0;
  iVar6 = *(int *)(param_1 + 0x10);
  local_5c = 0;
  if (-1 < iVar6 + -1) {
    do {
      uVar3 = FUN_00b94e60(param_1,local_5c);
      cVar1 = FUN_017f4f90(auStack_98,uVar3);
      if (cVar1 != '\0') {
        lVar4 = FUN_00b94e60(param_1,local_5c);
        break;
      }
      local_5c = local_5c + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  if (lVar4 != 0) {
    uVar3 = FUN_017f3ff0(&DAT_017f39d0,1,10);
    local_50 = FUN_017f3db0(&DAT_017f36b0,1,10);
    local_58 = FUN_017f3db0(&DAT_017f36b0,1,10);
    local_78 = (ulonglong)local_78._4_4_ << 0x20;
    FUN_00b956d0(&local_38,0,0,0);
    iVar6 = *(int *)(param_1 + 0x10);
    local_5c = 0;
    if (-1 < iVar6 + -1) {
      do {
        uVar5 = FUN_00b94e60(param_1,local_5c);
        FUN_017f4e60(auStack_98,uVar5);
        local_5c = local_5c + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    local_78 = uVar3;
    FUN_017f4540(param_1,param_2,local_50,local_58);
    cVar1 = FUN_017f4d80(uVar3,param_2,param_1,&local_38);
    if (cVar1 == '\0') {
      uVar5 = FUN_0198d430(param_1);
      (**(code **)(*param_2 + 0x68))(param_2,uVar5,&local_48);
      if ((((local_48 + local_40) - local_38) - local_30) / 2 < 0) {
        *(int *)((longlong)param_2 + 0xc) =
             local_38 + (*(int *)((longlong)param_2 + 0xc) - local_40);
        *(int *)(param_2 + 2) = local_34 + ((int)param_2[2] - local_44);
      }
      else {
        *(int *)((longlong)param_2 + 0xc) =
             local_30 + (*(int *)((longlong)param_2 + 0xc) - local_48);
        *(int *)(param_2 + 2) = local_34 + ((int)param_2[2] - local_44);
      }
    }
    FUN_00410f20(local_50);
    FUN_00410f20(local_58);
    FUN_00410f20(uVar3);
  }
  return;
}

