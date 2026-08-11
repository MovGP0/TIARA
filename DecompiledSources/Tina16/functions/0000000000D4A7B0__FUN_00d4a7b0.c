/* Ghidra address: 00d4a7b0 */
/* Ghidra symbol: FUN_00d4a7b0 */


void FUN_00d4a7b0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined4 uVar7;
  undefined1 *puVar6;
  ulonglong local_88;
  int local_80;
  int local_7c;
  undefined1 local_6c [12];
  longlong local_60;
  undefined1 local_58 [16];
  int local_48 [4];
  undefined8 local_38;
  undefined8 local_30;
  
  local_60 = 0;
  iVar1 = FUN_00d4a660();
  iVar5 = 0;
  if (-1 < iVar1 + -1) {
    do {
      FUN_00d4a680(param_1,&local_38,iVar5);
      FUN_00d4a630(param_1,local_48,iVar5);
      thunk_FUN_04176532(&local_38,1,1);
      if ((longlong)local_38 < 0) {
        local_38 = local_38 & 0xffffffff;
      }
      if ((int)local_38 < 0) {
        local_38 = local_38 & 0xffffffff00000000;
      }
      FUN_00787be0(*(undefined8 *)(param_1 + 0x18),&local_88);
      if (local_80 < (int)local_30) {
        FUN_00787be0(*(undefined8 *)(param_1 + 0x18),&local_88);
        local_30 = CONCAT44(local_30._4_4_,local_80);
      }
      FUN_00787be0(*(undefined8 *)(param_1 + 0x18),&local_88);
      if (local_7c < local_30._4_4_) {
        FUN_00787be0(*(undefined8 *)(param_1 + 0x18),&local_88);
        local_30 = CONCAT44(local_7c,(int)local_30);
      }
      plVar2 = (longlong *)FUN_00781840();
      (**(code **)(*plVar2 + 400))(plVar2,local_6c,4);
      uVar3 = FUN_00781840();
      uVar4 = FUN_005ffa40(param_2);
      uVar7 = 0;
      FUN_00778dc0(uVar3,uVar4,local_6c,&local_38,0,0);
      uVar3 = CONCAT44(uVar7,local_30._4_4_);
      FUN_004238d0(local_58,(int)local_38 + 10,local_38._4_4_,(int)local_38 + local_48[0],uVar3);
      uVar7 = (undefined4)((ulonglong)uVar3 >> 0x20);
      FUN_00d4a710(param_1,&local_60,iVar5);
      if (local_60 != 0) {
        puVar6 = local_58;
        FUN_00788490(param_1,param_2,local_6c,local_60,puVar6,0x25);
        uVar7 = (undefined4)((ulonglong)puVar6 >> 0x20);
      }
      FUN_004238d0(&local_88,(int)local_38 + 2,local_38._4_4_ + 2,(int)local_38 + 6,
                   CONCAT44(uVar7,local_30._4_4_ + -2));
      local_38 = local_88;
      local_30 = CONCAT44(local_7c,local_80);
      plVar2 = (longlong *)FUN_00781840();
      (**(code **)(*plVar2 + 400))(plVar2,local_6c,2);
      uVar3 = FUN_00781840();
      uVar4 = FUN_005ffa40(param_2);
      FUN_00778dc0(uVar3,uVar4,local_6c,&local_38,0,0);
      iVar5 = iVar5 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00414480(&local_60);
  return;
}

