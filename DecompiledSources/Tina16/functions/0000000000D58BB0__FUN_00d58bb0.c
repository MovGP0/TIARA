/* Ghidra address: 00d58bb0 */
/* Ghidra symbol: FUN_00d58bb0 */


void FUN_00d58bb0(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_74;
  int local_70;
  int local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  iVar1 = FUN_004230a0(param_4);
  iVar2 = FUN_004230c0(param_4);
  if ((iVar1 != 0) && (iVar2 != 0)) {
    FUN_004238d0(&local_68,0,0,iVar1,iVar2);
    FUN_00423b50(&local_68,*param_3,param_3[1]);
    iVar3 = FUN_004230a0(param_3);
    iVar4 = iVar3 / iVar1;
    iVar3 = FUN_004230a0(param_3,(longlong)iVar3 % (longlong)iVar1 & 0xffffffff);
    if (iVar3 % iVar1 != 0) {
      iVar4 = iVar4 + 1;
    }
    iVar3 = FUN_004230c0(param_3);
    local_6c = iVar3 / iVar2;
    iVar3 = FUN_004230c0(param_3,(longlong)iVar3 % (longlong)iVar2 & 0xffffffff);
    if (iVar3 % iVar2 != 0) {
      local_6c = local_6c + 1;
    }
    local_74 = 0;
    if (-1 < iVar4) {
      iVar4 = iVar4 + 1;
      do {
        local_70 = 0;
        if (-1 < local_6c) {
          iVar3 = local_6c + 1;
          do {
            local_48 = local_68;
            uStack_40 = uStack_60;
            FUN_00423b50(&local_48,local_74 * iVar1,local_70 * iVar2);
            FUN_004239d0(&local_48,&local_48,param_3);
            iVar5 = FUN_004230a0(&local_48);
            iVar6 = FUN_004230c0(&local_48);
            if ((iVar5 == 0) || (iVar6 == 0)) break;
            local_58 = *param_4;
            local_50 = param_4[1];
            if ((iVar5 == iVar1) && (iVar6 == iVar2)) {
              FUN_00d589a0(param_1,param_2,&local_48,&local_58);
            }
            else {
              local_58._4_4_ = (int)((ulonglong)local_58 >> 0x20);
              local_50 = CONCAT44(local_58._4_4_ + iVar6,(int)local_58 + iVar5);
              FUN_00d589a0(param_1,param_2,&local_48,&local_58);
            }
            local_70 = local_70 + 1;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
        local_74 = local_74 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  return;
}

