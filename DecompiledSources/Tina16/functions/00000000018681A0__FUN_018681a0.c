/* Ghidra address: 018681a0 */
/* Ghidra symbol: FUN_018681a0 */


void FUN_018681a0(longlong param_1,byte *param_2,undefined8 param_3,longlong *param_4,int *param_5,
                 double param_6,double param_7)

{
  undefined1 *puVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  double local_80;
  double local_78;
  undefined1 *local_60;
  undefined8 local_58;
  undefined8 local_50;
  int local_48;
  int local_44;
  double local_40;
  double local_38;
  undefined8 local_30;
  
  local_60 = auStack_a8;
  local_30 = 0;
  puVar1 = auStack_a8;
  if ((*param_2 & 0x20) != 0) {
    local_30 = thunk_FUN_03976db5(0,0,0x7fffffff,0x7fffffff);
    uVar3 = FUN_005ffa40(param_3);
    thunk_FUN_0411a732(uVar3,local_30);
    uVar3 = FUN_005ffa40(param_3);
    local_88 = (undefined8 *)CONCAT44(local_88._4_4_,param_5[3]);
    FUN_00428be0(uVar3,*param_5,param_5[1],param_5[2]);
    puVar1 = local_60;
  }
  local_60 = puVar1;
  local_44 = param_5[2] - *param_5;
  local_48 = param_5[3] - param_5[1];
  local_58 = *(undefined8 *)param_5;
  local_50 = *(undefined8 *)(param_5 + 2);
  if ((*param_2 & 8) == 0) {
    if ((*param_2 & 2) != 0) {
      iVar2 = (**(code **)(*param_4 + 0x60))(param_4);
      lVar4 = FUN_0040c770(param_6 * (double)iVar2);
      iVar2 = (**(code **)(*param_4 + 0x48))(param_4);
      lVar5 = FUN_0040c770(param_7 * (double)iVar2);
      FUN_00423b50(&local_58,(local_44 - lVar4) / 2 & 0xffffffff,(local_48 - lVar5) / 2 & 0xffffffff
                  );
    }
    iVar2 = (**(code **)(*param_4 + 0x60))(param_4);
    iVar2 = FUN_0040c770((double)iVar2 * param_6);
    local_50 = CONCAT44(local_50._4_4_,(int)local_58 + iVar2);
    iVar2 = (**(code **)(*param_4 + 0x48))(param_4);
    iVar2 = FUN_0040c770((double)iVar2 * param_7);
    local_50 = CONCAT44(local_58._4_4_ + iVar2,(int)local_50);
    local_88 = &local_58;
    local_80 = param_6;
    local_78 = param_7;
    (**(code **)(param_1 + 8))(param_1,param_2,param_3,param_4);
  }
  else {
    if ((*param_2 & 4) != 0) {
      iVar2 = (**(code **)(*param_4 + 0x60))(param_4);
      if (iVar2 == 0) {
        local_38 = 0.0;
      }
      else {
        iVar2 = (**(code **)(*param_4 + 0x60))(param_4);
        local_38 = (double)local_44 / (double)iVar2;
      }
      iVar2 = (**(code **)(*param_4 + 0x48))(param_4);
      if (iVar2 == 0) {
        local_40 = 0.0;
      }
      else {
        iVar2 = (**(code **)(*param_4 + 0x48))(param_4);
        local_40 = (double)local_48 / (double)iVar2;
      }
      if (local_40 <= local_38) {
        iVar2 = (**(code **)(*param_4 + 0x60))(param_4);
        iVar2 = FUN_0040c770((double)iVar2 * local_40);
        local_50 = CONCAT44(local_50._4_4_,(int)local_58 + iVar2);
      }
      else {
        iVar2 = (**(code **)(*param_4 + 0x48))(param_4);
        iVar2 = FUN_0040c770((double)iVar2 * local_38);
        local_50 = CONCAT44(local_58._4_4_ + iVar2,(int)local_50);
      }
      if ((*param_2 & 2) != 0) {
        FUN_00423b50(&local_58,
                     (longlong)(local_44 - ((int)local_50 - (int)local_58)) / 2 & 0xffffffff,
                     (longlong)(local_48 - (local_50._4_4_ - local_58._4_4_)) / 2 & 0xffffffff);
      }
    }
    local_88 = &local_58;
    local_80 = param_6;
    local_78 = param_7;
    (**(code **)(param_1 + 8))(param_1,param_2,param_3,param_4);
  }
  if ((*param_2 & 0x20) != 0) {
    uVar3 = FUN_005ffa40(param_3);
    thunk_FUN_039bba01(uVar3,local_30);
    thunk_FUN_0416f828(local_30);
  }
  return;
}

