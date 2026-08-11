/* Ghidra address: 00d82380 */
/* Ghidra symbol: FUN_00d82380 */


void FUN_00d82380(longlong param_1,undefined8 param_2,longlong param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined7 uVar8;
  undefined1 local_e8 [16];
  int local_d8;
  int local_d4;
  int local_d0 [14];
  undefined1 local_98 [40];
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  undefined8 local_60;
  undefined8 uStack_58;
  longlong *local_50;
  undefined8 uStack_48;
  undefined8 local_3c;
  undefined8 uStack_34;
  undefined4 uStack_2c;
  
  local_3c = *param_4;
  uStack_34 = param_4[1];
  uStack_2c = *(undefined4 *)(param_4 + 2);
  local_60 = *param_5;
  uStack_58 = param_5[1];
  local_50 = (longlong *)param_5[2];
  uVar6 = param_5[3];
  uStack_48._1_1_ = (char)((ulonglong)uVar6 >> 8);
  uStack_48 = uVar6;
  if (uStack_48._1_1_ == '\0') {
    FUN_00423010(&local_70,0,0,0x10,0x10);
    FUN_00d57690(local_e8,&local_70,&local_60);
    FUN_00409a70(&DAT_01ed0830,local_d0,0x60);
    iVar2 = 0xc;
    piVar5 = local_d0;
    do {
      *piVar5 = *piVar5 + (local_70 + local_68) / 2 + -2;
      piVar1 = piVar5 + 1;
      *piVar1 = *piVar1 + (local_6c + local_64) / 2 + 1;
      piVar5 = piVar5 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    uVar8 = (undefined7)((ulonglong)piVar1 >> 8);
    if (uStack_2c._1_1_ == '\0') {
      lVar7 = FUN_00d7efc0(*(undefined8 *)(param_1 + 0x10),CONCAT71(uVar8,0x3e));
      FUN_005fd4e0(*(undefined8 *)(param_3 + 0x78),*(undefined4 *)(lVar7 + 0x28));
    }
    else if (uStack_2c._1_1_ == '\x03') {
      lVar7 = FUN_00d7efc0(*(undefined8 *)(param_1 + 0x10),CONCAT71(uVar8,0x41));
      FUN_005fd4e0(*(undefined8 *)(param_3 + 0x78),*(undefined4 *)(lVar7 + 0x28));
    }
    uVar6 = FUN_005ffa40(param_3);
    thunk_FUN_04172651(uVar6,local_d0,7);
    uVar6 = FUN_005ffa40(param_3);
    thunk_FUN_04172651(uVar6,local_98,5);
  }
  else if (uStack_48._1_1_ == '\x01') {
    FUN_00423010(&local_70,0,0,6,6);
    FUN_00d57690(local_e8,&local_70,&local_60);
    if (uStack_2c._1_1_ == '\0') {
      lVar7 = FUN_00d7efc0(*(undefined8 *)(param_1 + 0x10),0x3e);
      FUN_00d57d80(param_3,&local_70,3,*(undefined4 *)(lVar7 + 0x28));
    }
    else if (uStack_2c._1_1_ == '\x03') {
      lVar7 = FUN_00d7efc0(*(undefined8 *)(param_1 + 0x10),0x41);
      FUN_00d57d80(param_3,&local_70,3,*(undefined4 *)(lVar7 + 0x28));
    }
  }
  else if (uStack_48._1_1_ == '\x02') {
    FUN_00423010(&local_70,0,0,0x10,0x10);
    FUN_00d57690(local_e8,&local_70,&local_60);
    if (uStack_2c._1_1_ == '\0') {
      lVar7 = FUN_00d7efc0(*(undefined8 *)(param_1 + 0x10),0x3e);
      FUN_005fd4e0(*(undefined8 *)(param_3 + 0x78),*(undefined4 *)(lVar7 + 0x28));
    }
    else if (uStack_2c._1_1_ == '\x03') {
      lVar7 = FUN_00d7efc0(*(undefined8 *)(param_1 + 0x10),0x41);
      FUN_005fd4e0(*(undefined8 *)(param_3 + 0x78),*(undefined4 *)(lVar7 + 0x28));
    }
    iVar2 = FUN_004230c0(&local_70);
    local_d4 = iVar2 / 2;
    local_d8 = local_68 + -6;
    FUN_00635a10(param_3,CONCAT71((uint7)((ulonglong)((longlong)iVar2 % 2) >> 8) & 0xffffff,1),
                 &local_d8,3);
  }
  else if ((uStack_48._1_1_ == '\x03') && (local_50 != (longlong *)0x0)) {
    uVar3 = (**(code **)(*local_50 + 0x60))(local_50);
    uVar4 = (**(code **)(*local_50 + 0x48))(local_50);
    FUN_00423010(&local_70,0,0,uVar3,uVar4);
    FUN_00d57690(local_e8,&local_70,&local_60);
    FUN_00d58940(local_50,param_3,&local_70);
  }
  return;
}

