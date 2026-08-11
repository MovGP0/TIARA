/* Ghidra address: 00820d20 */
/* Ghidra symbol: FUN_00820d20 */


void FUN_00820d20(longlong param_1,int *param_2,char param_3,char param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined4 local_b0;
  uint local_a0;
  int local_9c;
  int local_98;
  int local_94;
  undefined1 *local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  undefined4 local_64;
  undefined1 local_60 [16];
  undefined1 local_50 [12];
  undefined4 local_44;
  undefined1 local_3d;
  undefined4 local_3c;
  uint local_38;
  int local_34;
  int local_30;
  int local_2c;
  uint local_28;
  undefined4 local_24;
  longlong *local_20;
  
  local_90 = auStack_d8;
  local_38 = *param_2 + ((param_2[2] - *param_2) - *(int *)(param_1 + 0x578)) / 2;
  iVar2 = (param_2[3] - param_2[1]) - *(int *)(param_1 + 0x57c);
  local_34 = param_2[1] + iVar2 / 2;
  local_30 = local_38 + *(int *)(param_1 + 0x578);
  local_2c = local_34 + *(int *)(param_1 + 0x57c);
  local_20 = *(longlong **)(param_1 + 0x4b8);
  cVar1 = FUN_00777ce0(param_1,(longlong)iVar2 % 2 & 0xffffffff);
  if (cVar1 == '\0') {
    if (param_3 == '\0') {
      local_28 = 0;
    }
    else if (param_3 == '\x01') {
      local_28 = 0x400;
    }
    else {
      local_28 = 0x408;
    }
    if (param_4 == '\0') {
      local_28 = local_28 | 0x100;
    }
    uVar5 = FUN_005ffa40(local_20);
    thunk_FUN_03ea73e5(uVar5,&local_38,4,local_28);
  }
  else {
    if (param_3 == '\0') {
      if (param_4 == '\0') {
        plVar4 = (longlong *)FUN_00781840();
        (**(code **)(*plVar4 + 200))(plVar4,local_50,0x13);
      }
      else {
        plVar4 = (longlong *)FUN_00781840();
        (**(code **)(*plVar4 + 200))(plVar4,local_50,0x10);
      }
    }
    else if (param_3 == '\x01') {
      if (param_4 == '\0') {
        plVar4 = (longlong *)FUN_00781840();
        (**(code **)(*plVar4 + 200))(plVar4,local_50,0x17);
      }
      else {
        plVar4 = (longlong *)FUN_00781840();
        (**(code **)(*plVar4 + 200))(plVar4,local_50,0x14);
      }
    }
    else if (param_4 == '\0') {
      plVar4 = (longlong *)FUN_00781840();
      (**(code **)(*plVar4 + 200))(plVar4,local_50,0x1b);
    }
    else {
      plVar4 = (longlong *)FUN_00781840();
      (**(code **)(*plVar4 + 200))(plVar4,local_50,0x18);
    }
    local_70 = local_20[0x10];
    local_64 = *(undefined4 *)(*(longlong *)(local_70 + 0x18) + 0x28);
    uVar5 = FUN_005ffa40(local_20);
    local_24 = thunk_FUN_03b57162(uVar5);
    cVar1 = FUN_00781870();
    if ((cVar1 == '\0') || ((*(byte *)(param_1 + 0x2c8) & 2) == 0)) {
      FUN_005fdab0(local_20[0x10],*(undefined4 *)(param_1 + 200));
    }
    else {
      uVar5 = FUN_00781840();
      uVar3 = FUN_00779380(uVar5,0x14);
      FUN_005fdab0(local_20[0x10],uVar3);
    }
    (**(code **)(*local_20 + 0xa8))(local_20,param_2);
    uVar5 = FUN_005ffa40(local_20);
    local_b8 = CONCAT44(local_b8._4_4_,param_2[3]);
    FUN_00428be0(uVar5,*param_2,param_2[1],param_2[2]);
    uVar5 = FUN_00781840();
    uVar6 = FUN_005ffa40(local_20);
    local_b8 = 0;
    local_b0 = *(undefined4 *)(param_1 + 0x2cc);
    FUN_00778dc0(uVar5,uVar6,local_50,param_2);
    uVar5 = FUN_005ffa40(local_20);
    thunk_FUN_0402759f(uVar5,local_24);
    FUN_005fdab0(local_20[0x10],local_64);
  }
  if (*(char *)(param_1 + 0x551) != '\0') {
    cVar1 = FUN_00781870();
    if (cVar1 == '\0') {
      local_80 = local_20[0x10];
      local_3d = *(undefined1 *)(*(longlong *)(local_80 + 0x18) + 0x38);
      local_3c = *(undefined4 *)(*(longlong *)(local_80 + 0x18) + 0x28);
      local_88 = local_20[0xf];
      local_44 = *(undefined4 *)(*(longlong *)(local_88 + 0x18) + 0x28);
      local_78 = local_80;
      FUN_005fdcb0(local_80,1);
      FUN_005fd4e0(local_20[0xf],*(undefined4 *)(param_1 + 200));
      local_a0 = local_38;
      local_9c = local_34;
      local_98 = local_30;
      local_94 = local_2c;
      local_b8._0_4_ = local_2c;
      (**(code **)(*local_20 + 0xf8))(local_20,local_38,local_34,local_30);
      FUN_005fdcb0(local_20[0x10],1);
      FUN_005fd4e0(local_20[0xf],0xff000010);
      local_b8._0_4_ = local_94 + -1;
      (**(code **)(*local_20 + 0xf8))(local_20,local_a0 + 1,local_9c + 1,local_98 + -1);
      uVar5 = FUN_005ffa40(local_20);
      local_24 = thunk_FUN_03b57162(uVar5);
      local_b8._0_4_ = param_2[3];
      FUN_004238d0(local_60,*param_2,param_2[1],local_98 + 2);
      FUN_005fdcb0(local_20[0x10],0);
      FUN_005fdab0(local_20[0x10],*(undefined4 *)(param_1 + 200));
      uVar5 = FUN_005ffa40(local_20);
      local_b8 = CONCAT44(local_b8._4_4_,local_94);
      thunk_FUN_041a27b3(uVar5,local_a0,local_9c,local_98);
      (**(code **)(*local_20 + 0xa8))(local_20,local_60);
      uVar5 = FUN_005ffa40(local_20);
      thunk_FUN_0402759f(uVar5,local_24);
      FUN_005fdcb0(local_20[0x10],1);
      FUN_005fdcb0(local_20[0x10],local_3d);
      FUN_005fdab0(local_20[0x10],local_3c);
      FUN_005fd4e0(local_20[0xf],local_44);
    }
  }
  return;
}

