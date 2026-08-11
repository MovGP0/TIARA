/* Ghidra address: 00dd9c10 */
/* Ghidra symbol: FUN_00dd9c10 */


void FUN_00dd9c10(longlong *param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined1 auStack_b8 [32];
  int local_98;
  int local_90;
  undefined4 local_88;
  int local_80;
  undefined4 local_78;
  int local_70;
  int *local_68;
  undefined1 *local_50;
  longlong local_48;
  int local_40;
  short local_3c;
  char local_39;
  longlong local_38;
  undefined8 local_30;
  
  local_50 = auStack_b8;
  if (param_1[9] != 0) {
    FUN_005fdf10(param_2);
    local_30 = FUN_005ffa40(param_2);
    local_38 = (**(code **)(*param_1 + 0x50))(param_1);
    local_39 = 0;
    bVar5 = local_38 != 0;
    if (bVar5) {
      local_38 = thunk_FUN_0418f5de(local_30,local_38,0xffffffff);
      thunk_FUN_03a5de49(local_30);
    }
    local_39 = bVar5;
    (**(code **)(*(longlong *)param_1[9] + 0x28))((longlong *)param_1[9],&local_3c);
    if (local_3c == 4) {
      (**(code **)(*(longlong *)param_1[9] + 0x18))((longlong *)param_1[9],&local_40);
      local_48 = (longlong)local_40;
      thunk_FUN_0417aa92(local_30,local_48,param_3);
    }
    else {
      iVar1 = *param_3;
      iVar2 = param_3[1];
      iVar3 = FUN_00dd9f00(param_1);
      uVar4 = FUN_00dd9f30(param_1);
      local_70 = FUN_00dd9f00(param_1);
      local_98 = param_3[2] - iVar1;
      local_90 = param_3[3] - iVar2;
      local_88 = 0;
      local_80 = iVar3 + -1;
      local_70 = -local_70;
      local_78 = uVar4;
      local_68 = param_3;
      uVar4 = (**(code **)(*(longlong *)param_1[9] + 0x40))
                        ((longlong *)param_1[9],local_30,iVar1,iVar2);
      FUN_006245b0(uVar4);
    }
    if (local_39 != '\0') {
      thunk_FUN_0418f5de(local_30,local_38,0xffffffff);
    }
    FUN_005fe090(param_2);
  }
  return;
}

