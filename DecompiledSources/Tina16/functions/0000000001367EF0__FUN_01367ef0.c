/* Ghidra address: 01367ef0 */
/* Ghidra symbol: FUN_01367ef0 */


void FUN_01367ef0(longlong param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  bool bVar10;
  undefined1 auStack_98 [32];
  int *local_78;
  char *local_70;
  char local_59;
  char local_51;
  undefined1 local_50 [8];
  int local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  int local_2c;
  
  uVar4 = FUN_004aeac0(*(longlong *)(param_1 + 0x28),
                       *(int *)(*(longlong *)(param_1 + 0x28) + 0x10) + -1);
  local_59 = *(int *)(*(longlong *)(param_1 + 0x28) + 0x10) == 1;
  local_30 = FUN_00b959c0(uVar4);
  local_44 = FUN_00b959a0(param_2,param_3);
  if (((short)local_30 == param_2) && (local_30._2_2_ == param_3)) {
    return;
  }
  if (*(char *)(param_1 + 0x30) == '\0') {
    uVar1 = FUN_01367da0(param_1,local_30,local_44);
    *(undefined1 *)(param_1 + 0x30) = uVar1;
  }
  local_2c = thunk_FUN_039b2f93();
  uVar5 = local_2c - *(int *)(param_1 + 0x44);
  uVar6 = (int)uVar5 >> 0x1f;
  iVar2 = (uVar5 ^ uVar6) - uVar6;
  bVar10 = iVar2 < 500;
  if (bVar10) {
    FUN_01367df0(param_1,500 - (short)iVar2,param_2,param_3);
  }
  bVar9 = true;
  if ((*(char *)(param_1 + 0x3d) != '\0') && (local_59 == '\0')) {
    local_38 = FUN_004aeac0(*(longlong *)(param_1 + 0x28),
                            *(int *)(*(longlong *)(param_1 + 0x28) + 0x10) + -1);
    local_40 = FUN_004aeac0(*(longlong *)(param_1 + 0x28),
                            *(int *)(*(longlong *)(param_1 + 0x28) + 0x10) + -2);
    if (*(char *)(param_1 + 0x30) == '\x01') {
      iVar2 = (int)local_44._2_2_;
      FUN_00b95a70(&local_38,(int)local_44._2_2_);
      FUN_00b95a70(&local_40,iVar2);
    }
    else {
      iVar2 = (int)(short)local_44;
      FUN_00b95a60(&local_38,(int)(short)local_44);
      FUN_00b95a60(&local_40,iVar2);
    }
    FUN_004aedb0(*(longlong *)(param_1 + 0x28),*(int *)(*(longlong *)(param_1 + 0x28) + 0x10) + -1,
                 local_38);
    FUN_004aedb0(*(longlong *)(param_1 + 0x28),*(int *)(*(longlong *)(param_1 + 0x28) + 0x10) + -2,
                 local_40);
    local_30 = FUN_00b959c0(local_38);
  }
  if (*(char *)(param_1 + 0x30) == '\x01') {
    if ((*(char *)(param_1 + 0x3f) == '\0') &&
       ((uVar5 = (int)local_44._2_2_ - (int)local_30._2_2_ >> 0x1f,
        uVar6 = (int)(short)local_44 - (int)(short)local_30 >> 0x1f,
        (int)(((int)local_44._2_2_ - (int)local_30._2_2_ ^ uVar5) - uVar5) <=
        (int)(((int)(short)local_44 - (int)(short)local_30 ^ uVar6) - uVar6) ||
        (((bVar10 && (*(char *)(param_1 + 0x3c) == '\0')) &&
         (uVar5 = (int)local_44._2_2_ - (int)local_30._2_2_ >> 0x1f,
         (int)(((int)local_44._2_2_ - (int)local_30._2_2_ ^ uVar5) - uVar5) < 0x40)))))) {
      local_44 = CONCAT22(local_30._2_2_,(short)local_44);
      bVar9 = (short)local_44 != (short)local_30;
      if (local_59 == '\0') {
        uVar4 = FUN_00b95a80(local_44);
        FUN_004aedb0(*(longlong *)(param_1 + 0x28),
                     *(int *)(*(longlong *)(param_1 + 0x28) + 0x10) + -1,uVar4);
      }
      else {
        uVar4 = FUN_00b95a80(local_44);
        FUN_01367ec0(auStack_98,uVar4);
      }
    }
    else {
      local_44 = CONCAT22(local_44._2_2_,(short)local_30);
      *(undefined1 *)(param_1 + 0x30) = 2;
      uVar4 = FUN_00b95a80(local_44);
      FUN_01367ec0(auStack_98,uVar4);
      *(undefined1 *)(param_1 + 0x3f) = 0;
    }
  }
  else if (*(char *)(param_1 + 0x30) == '\x02') {
    if ((*(char *)(param_1 + 0x3f) == '\0') &&
       ((uVar5 = (int)(short)local_44 - (int)(short)local_30 >> 0x1f,
        uVar6 = (int)local_44._2_2_ - (int)local_30._2_2_ >> 0x1f,
        (int)(((int)(short)local_44 - (int)(short)local_30 ^ uVar5) - uVar5) <=
        (int)(((int)local_44._2_2_ - (int)local_30._2_2_ ^ uVar6) - uVar6) ||
        (((bVar10 && (*(char *)(param_1 + 0x3c) == '\0')) &&
         (uVar5 = (int)(short)local_44 - (int)(short)local_30 >> 0x1f,
         (int)(((int)(short)local_44 - (int)(short)local_30 ^ uVar5) - uVar5) < 0x40)))))) {
      local_44 = CONCAT22(local_44._2_2_,(short)local_30);
      bVar9 = local_44._2_2_ != local_30._2_2_;
      if (local_59 == '\0') {
        uVar4 = FUN_00b95a80(local_44);
        FUN_004aedb0(*(longlong *)(param_1 + 0x28),
                     *(int *)(*(longlong *)(param_1 + 0x28) + 0x10) + -1,uVar4);
      }
      else {
        uVar4 = FUN_00b95a80(local_44);
        FUN_01367ec0(auStack_98,uVar4);
      }
    }
    else {
      local_44 = CONCAT22(local_30._2_2_,(short)local_44);
      *(undefined1 *)(param_1 + 0x30) = 1;
      uVar4 = FUN_00b95a80(local_44);
      FUN_01367ec0(auStack_98,uVar4);
      *(undefined1 *)(param_1 + 0x3f) = 0;
    }
  }
  if (bVar9) {
    *(int *)(param_1 + 0x44) = local_2c;
  }
  iVar2 = *(int *)(*(longlong *)(param_1 + 0x28) + 0x10);
  if (1 < iVar2) {
    uVar4 = FUN_004aeac0(*(longlong *)(param_1 + 0x28),iVar2 + -1);
    local_44 = FUN_00b959c0(uVar4);
    uVar4 = FUN_004aeac0(*(longlong *)(param_1 + 0x28),
                         *(int *)(*(longlong *)(param_1 + 0x28) + 0x10) + -2);
    local_30 = FUN_00b959c0(uVar4);
    bVar10 = (short)local_30 == (short)local_44;
    if (bVar10) {
      local_30._2_2_ = (short)((uint)local_30 >> 0x10);
      bVar10 = local_30._2_2_ == local_44._2_2_;
      if (bVar10) {
        FUN_004ae870(*(longlong *)(param_1 + 0x28),
                     *(int *)(*(longlong *)(param_1 + 0x28) + 0x10) + -1);
        iVar2 = *(int *)(*(longlong *)(param_1 + 0x28) + 0x10);
        if (iVar2 == 1) {
          *(undefined1 *)(param_1 + 0x30) = 0;
        }
        else {
          uVar4 = FUN_004aeac0(*(longlong *)(param_1 + 0x28),iVar2 + -2);
          local_44 = FUN_00b959c0(uVar4);
          uVar1 = FUN_01367da0(param_1,local_30,local_44);
          *(undefined1 *)(param_1 + 0x30) = uVar1;
        }
      }
    }
  }
  uVar4 = FUN_004aeac0(*(longlong *)(param_1 + 0x28),
                       *(int *)(*(longlong *)(param_1 + 0x28) + 0x10) + -1);
  uVar3 = FUN_00b959c0(uVar4);
  local_30._0_2_ = (short)uVar3;
  lVar7 = (longlong)(short)local_30;
  local_30._2_2_ = (short)((uint)uVar3 >> 0x10);
  lVar8 = (longlong)local_30._2_2_;
  local_78 = &local_48;
  local_70 = &local_51;
  local_30 = uVar3;
  FUN_019a4820(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x27a8),lVar7,lVar8,local_50);
  if ((local_48 == -1) || (*(char *)(param_1 + 0x21) != local_51)) {
    *(undefined2 *)(param_1 + 0x1e) = 6;
  }
  else {
    *(undefined2 *)(param_1 + 0x1e) = 0x1c;
  }
  return;
}

