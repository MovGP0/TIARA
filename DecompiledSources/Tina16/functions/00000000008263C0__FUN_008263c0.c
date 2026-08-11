/* Ghidra address: 008263c0 */
/* Ghidra symbol: FUN_008263c0 */


undefined8
FUN_008263c0(undefined8 param_1,longlong *param_2,ulonglong *param_3,undefined4 param_4,char param_5
            ,char param_6,char param_7,char param_8)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 local_60;
  ulonglong local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  int iStack_3c;
  undefined8 local_38;
  undefined8 local_30;
  
  if (((param_5 == '\0') && (*PTR_DAT_02003210 != '\0')) || (param_5 == '\x02')) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  local_38 = *param_3;
  local_30 = param_3[1];
  if (bVar1) {
    FUN_005fdab0(param_2[0x10],0xff00000f);
    FUN_005fdcb0(param_2[0x10],0);
    uVar2 = FUN_005ffa40(param_2);
    if (param_7 == '\0') {
      thunk_FUN_03998bad(uVar2,&local_38,1,0xc);
      local_30 = CONCAT44(local_30._4_4_ + -1,(int)local_30 + -1);
      thunk_FUN_03998bad(uVar2,&local_38,4,3);
      local_38 = CONCAT44(local_38._4_4_ + 1,(int)local_38 + 1);
      thunk_FUN_03998bad(uVar2,&local_38,4,0x80c);
    }
    else {
      thunk_FUN_03998bad(uVar2,&local_38,8,3);
      thunk_FUN_03998bad(uVar2,&local_38,2,0xc);
      local_30 = CONCAT44(local_30._4_4_ + -1,(int)local_30 + -1);
      local_38 = CONCAT44(local_38._4_4_ + 1,(int)local_38 + 1);
      thunk_FUN_03998bad(uVar2,&local_38,2,0x803);
    }
  }
  else {
    FUN_005fd4e0(param_2[0xf],0xff000006);
    FUN_005fdab0(param_2[0x10],0xff00000f);
    FUN_005fdcb0(param_2[0x10],0);
    (**(code **)(*param_2 + 0xf8))
              (param_2,local_38 & 0xffffffff,local_38._4_4_,local_30 & 0xffffffff,local_30._4_4_);
    if (param_6 != '\0') {
      (**(code **)(*param_2 + 0x40))(param_2,local_38 & 0xffffffff,local_38._4_4_,0xff00000f);
      (**(code **)(*param_2 + 0x40))(param_2,local_38 & 0xffffffff,local_30._4_4_ + -1,0xff00000f);
      (**(code **)(*param_2 + 0x40))(param_2,(int)local_30 + -1,local_38._4_4_,0xff00000f);
      (**(code **)(*param_2 + 0x40))(param_2,(int)local_30 + -1,local_30._4_4_ + -1,0xff00000f);
    }
    if (param_8 != '\0') {
      FUN_00423b10(&local_38,0xffffffff,0xffffffff);
      FUN_005fdcb0(param_2[0x10],1);
      (**(code **)(*param_2 + 0xf8))
                (param_2,local_38 & 0xffffffff,local_38._4_4_,local_30 & 0xffffffff,local_30._4_4_);
    }
    FUN_00423b10(&local_38,0xffffffff,0xffffffff);
    if (param_7 == '\0') {
      FUN_00741000(param_2,&local_38,0xff000014,0xff000010,param_4);
    }
    else {
      FUN_005fd4e0(param_2[0xf],0xff000010);
      iStack_3c = local_30._4_4_ + -1;
      local_40 = (int)local_38;
      local_48 = (int)local_30;
      uStack_44 = local_38._4_4_;
      local_60 = CONCAT44(iStack_3c,(int)local_38);
      local_58 = local_38;
      local_50 = CONCAT44(local_38._4_4_,(int)local_30);
      (**(code **)(*param_2 + 0xe0))(param_2,&local_60,2);
    }
  }
  FUN_004238d0(param_1,(int)*param_3 + 1,*(int *)((longlong)param_3 + 4) + 1,(int)param_3[1] + -2,
               *(int *)((longlong)param_3 + 0xc) + -2);
  if (param_7 != '\0') {
    FUN_00423b50(param_1,1,1);
  }
  return param_1;
}

