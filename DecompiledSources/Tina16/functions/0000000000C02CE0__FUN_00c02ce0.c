/* Ghidra address: 00c02ce0 */
/* Ghidra symbol: FUN_00c02ce0 */


void FUN_00c02ce0(longlong *param_1,longlong *param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  short sVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 *local_50;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  char local_27;
  char local_26;
  char local_25;
  undefined8 local_24;
  char local_19;
  
  local_50 = auStack_98;
  local_68 = 0;
  local_60 = 0;
  local_40 = 0;
  cVar1 = (**(code **)(*param_1 + 0x278))(param_1);
  if (((cVar1 == '\0') && (cVar1 = FUN_004113d0(param_2,&PTR_FUN_00bea338), cVar1 != '\0')) &&
     (cVar1 = FUN_00bf2c80(param_2), cVar1 != '\0')) {
    FUN_00bf3750(param_1);
    FUN_0064ebd0(param_1,param_2,param_3,param_4);
    FUN_00bf1a50(param_1,param_3,param_4);
    local_24 = FUN_00bfaa10(param_1);
    if (param_2 == param_1) {
      sVar2 = thunk_FUN_040bd713(0x11);
      local_27 = -1 < sVar2;
      local_30 = FUN_00bf2b30(param_1);
      uVar3 = FUN_00bf2b90(param_1);
      local_38._4_4_ = (int)((ulonglong)uVar3 >> 0x20);
      if ((local_38._4_4_ < local_24._4_4_) ||
         ((local_24._4_4_ == local_38._4_4_ &&
          ((local_38._0_4_ = (int)uVar3, (int)local_38 < (int)local_24 ||
           ((local_27 == '\0' && ((int)local_24 == (int)local_38)))))))) {
        local_26 = '\x01';
      }
      else {
        local_26 = '\0';
      }
      local_38 = uVar3;
      if (((local_26 == '\0') && (local_30._4_4_ <= local_24._4_4_)) &&
         ((local_24._4_4_ != local_30._4_4_ ||
          (((int)local_30 <= (int)local_24 &&
           ((local_27 != '\0' || ((int)local_24 != (int)local_30)))))))) {
        local_25 = '\0';
      }
      else {
        local_25 = '\x01';
      }
    }
    else {
      sVar2 = thunk_FUN_040bd713(0x10);
      local_27 = sVar2 < 0;
      local_25 = '\x01';
      local_26 = '\0';
    }
    if (local_25 != '\0') {
      FUN_00c08780(param_1);
      FUN_00bf2ed0(param_2,&local_40);
      if (local_27 != '\0') {
        if (param_2 == param_1) {
          FUN_00c08be0(param_1,0);
          if ((local_26 != '\0') && (local_24._4_4_ == local_38._4_4_)) {
            local_24 = CONCAT44(local_24._4_4_,(int)local_24 - ((int)local_38 - (int)local_30));
          }
          if ((local_26 != '\0') && (local_30._4_4_ < local_38._4_4_)) {
            local_24 = CONCAT44(local_24._4_4_ - (local_38._4_4_ - local_30._4_4_),(int)local_24);
          }
        }
        else {
          FUN_00c08be0(param_2,0);
        }
      }
      local_19 = (*(uint *)((longlong)param_1 + 0x63a) & 0x40000) == 0;
      if ((bool)local_19) {
        *(uint *)((longlong)param_1 + 0x63a) = *(uint *)((longlong)param_1 + 0x63a) | 0x40000;
      }
      (**(code **)(*param_1 + 0x2a8))(param_1,&local_24);
      FUN_00bfa470(param_1,&local_24);
      FUN_00c08e80(param_1);
      FUN_00c08be0(param_1,local_40);
      FUN_00c08eb0(param_1);
      if (local_19 != '\0') {
        *(uint *)((longlong)param_1 + 0x63a) = *(uint *)((longlong)param_1 + 0x63a) & 0xfffbffff;
      }
      if (param_2 == param_1) {
        local_58 = FUN_00bf2b90(param_1);
        FUN_00bf2ed0(param_1,&local_60);
        local_78 = local_60;
        local_70 = *(undefined1 *)((longlong)param_1 + 0x5f5);
        FUN_00bd0e70(param_1[0xaa],2,&local_24,&local_58);
      }
      else {
        local_58 = FUN_00bf2b90(param_1);
        FUN_00bf2ed0(param_1,&local_68);
        local_78 = local_68;
        local_70 = *(undefined1 *)((longlong)param_1 + 0x5f5);
        FUN_00bd0e70(param_1[0xaa],0,&local_24,&local_58);
      }
      local_58 = FUN_00bfaa10(param_1);
      FUN_00bfa6c0(param_1,&local_58);
      (**(code **)(*param_1 + 0x328))(param_1,0x75,0,&local_24);
      FUN_00c087b0(param_1);
    }
    FUN_00bf28a0(param_1);
  }
  else {
    FUN_0064ebd0(param_1,param_2,param_3,param_4);
  }
  FUN_00414560(&local_68,2);
  FUN_00414480(&local_40);
  return;
}

