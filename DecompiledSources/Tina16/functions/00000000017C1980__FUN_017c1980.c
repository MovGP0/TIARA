/* Ghidra address: 017c1980 */
/* Ghidra symbol: FUN_017c1980 */


void FUN_017c1980(longlong *param_1,longlong *param_2)

{
  short sVar1;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_88 [32];
  int local_68;
  int local_4c;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  short sVar2;
  
  if (param_2 != (longlong *)0x0) {
    if (*(char *)((longlong)param_1 + 0x3d9) == '\0') {
      (**(code **)(*param_2 + 0xe8))(param_2,*PTR_DAT_02003960);
    }
    else {
      (**(code **)(*param_2 + 0xe8))(param_2,2);
    }
    if (*(char *)((longlong)param_1 + 0xb) == '\0') {
      (**(code **)(*param_2 + 0xf0))(param_2,0);
      if (*(char *)((longlong)param_1 + 9) == '\0') {
        if (*(char *)((longlong)param_1 + 0x52) == '\0') {
          if (*(char *)((longlong)param_1 + 10) == '\0') {
            if (*(char *)((longlong)param_1 + 0x99) == '\0') {
              FUN_01a9a440(param_2,9);
            }
            else {
              FUN_01a9a440(param_2,10);
            }
          }
          else {
            FUN_01a9a440(param_2,0xc);
            (**(code **)(*param_2 + 0xf8))(param_2);
          }
        }
        else {
          FUN_01a9a440(param_2,4);
        }
      }
      else {
        FUN_01a9a440(param_2,0);
      }
    }
    else {
      (**(code **)(*param_2 + 0xf0))(param_2,1);
      FUN_01a9a440(param_2,0xb);
      (**(code **)(*param_2 + 0xf8))(param_2);
    }
    local_3c = FUN_017c2c60(param_1,0);
    if ((*(char *)((longlong)param_1 + 0xb) != '\0') || (*(char *)((longlong)param_1 + 9) == '\0'))
    {
      lVar7 = (longlong)(short)local_3c;
      local_3c._2_2_ = (short)((uint)local_3c >> 0x10);
      lVar8 = (longlong)local_3c._2_2_;
      (**(code **)(*param_2 + 0x40))(param_2,lVar7,lVar8);
    }
    sVar1 = (short)local_3c;
    sVar2 = local_3c._2_2_;
    iVar3 = FUN_017c2b70(param_1);
    iVar3 = iVar3 + -1;
    local_4c = 1;
    if (0 < iVar3) {
      do {
        uVar4 = FUN_017c2c60(param_1,local_4c);
        local_40._0_2_ = (short)uVar4;
        local_40._2_2_ = (short)((uint)uVar4 >> 0x10);
        local_40 = uVar4;
        if ((*(char *)((longlong)param_1 + 0xb) == '\0') &&
           (*(char *)((longlong)param_1 + 9) != '\0')) {
          lVar7 = (longlong)(short)local_40;
          local_68 = (int)local_40._2_2_;
          FUN_00b956d0(&local_38,(int)sVar1,(int)sVar2,lVar7);
          FUN_00b956f0(&local_38);
          FUN_00b95880(&local_38,10,10);
          local_68 = local_2c;
          (**(code **)(*param_2 + 0x30))(param_2,local_38,local_34,local_30);
        }
        else {
          lVar7 = (longlong)(short)local_40;
          lVar8 = (longlong)local_40._2_2_;
          (**(code **)(*param_2 + 0x48))(param_2,lVar7,lVar8);
        }
        local_4c = local_4c + 1;
        iVar3 = iVar3 + -1;
        sVar1 = (short)local_40;
        sVar2 = local_40._2_2_;
      } while (iVar3 != 0);
    }
    uVar4 = FUN_017c2c60(param_1,0);
    uVar5 = FUN_017c2c60(param_1,1);
    if ((*(char *)((longlong)param_1 + 0x3d9) == '\0') && (param_1[0x7c] != 0)) {
      uVar6 = 0;
    }
    else {
      uVar6 = 1;
    }
    local_68._0_1_ = uVar6;
    FUN_017c1520(auStack_88,uVar4,uVar5,*(undefined1 *)((longlong)param_1 + 0x3da));
    if (param_1[0x7d] != 0) {
      iVar3 = FUN_017c2b70(param_1);
      uVar4 = FUN_017c2c60(param_1,iVar3 + -1);
      iVar3 = FUN_017c2b70(param_1);
      uVar5 = FUN_017c2c60(param_1,iVar3 + -2);
      local_68._0_1_ = 0;
      FUN_017c1520(auStack_88,uVar4,uVar5,*(undefined1 *)((longlong)param_1 + 0x3db));
    }
    if (*(char *)((longlong)param_1 + 10) != '\0') {
      (**(code **)(*param_1 + 0x168))(param_1,param_2,0);
    }
    (**(code **)(*param_2 + 0xf0))(param_2,0);
    (**(code **)(*param_2 + 0xe0))(param_2,0);
    (**(code **)(*param_2 + 0xe8))(param_2,0);
  }
  return;
}

