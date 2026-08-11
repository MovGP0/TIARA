/* Ghidra address: 00a48240 */
/* Ghidra symbol: FUN_00a48240 */


void FUN_00a48240(longlong param_1,longlong param_2,undefined4 param_3,undefined4 param_4,
                 int param_5,int param_6,undefined4 param_7,undefined4 param_8,char param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_98 [32];
  int local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined1 local_40 [16];
  undefined1 *local_30;
  int local_28;
  int local_24;
  longlong *local_20;
  
  local_30 = auStack_98;
  if (*(longlong *)(param_1 + 0x18) != 0) {
    if ((*(longlong *)(param_1 + 0x20) == 0) || (*(char *)(param_1 + 0x10) == '\0')) {
      local_30 = auStack_98;
      uVar1 = FUN_005ffa40(param_2);
      uVar2 = FUN_00609e10(*(undefined8 *)(param_1 + 0x18));
      local_70 = FUN_005ffa40(uVar2);
      local_78 = param_6;
      local_68 = param_7;
      local_60 = param_8;
      local_58 = 0xcc0020;
      thunk_FUN_0415fcd2(uVar1,param_3,param_4,param_5);
    }
    else {
      local_20 = (longlong *)0x0;
      local_20 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
      if (param_5 < 3) {
        local_24 = 2;
      }
      else {
        local_24 = param_5;
      }
      (**(code **)(*local_20 + 0x88))(local_20,local_24);
      if (param_6 < 3) {
        local_28 = 2;
      }
      else {
        local_28 = param_6;
      }
      (**(code **)(*local_20 + 0x70))(local_20,local_28);
      if (param_9 == '\0') {
        uVar1 = FUN_00609e10(local_20);
        uVar1 = FUN_005ffa40(uVar1);
        local_70 = FUN_005ffa40(param_2);
        local_78 = param_6;
        local_58 = 0xcc0020;
        local_68 = param_3;
        local_60 = param_4;
        thunk_FUN_0415fcd2(uVar1,0,0,param_5);
      }
      else {
        uVar1 = FUN_00609e10(local_20);
        FUN_005ff8c0(uVar1,*(undefined8 *)(param_2 + 0x80));
        plVar3 = (longlong *)FUN_00609e10(local_20);
        local_78 = param_6;
        FUN_004238d0(local_40,0,0,param_5);
        (**(code **)(*plVar3 + 0xa8))(plVar3,local_40);
      }
      uVar1 = FUN_00609e10(local_20);
      uVar1 = FUN_005ffa40(uVar1);
      uVar2 = FUN_00609e10(*(undefined8 *)(param_1 + 0x18));
      local_70 = FUN_005ffa40(uVar2);
      local_78 = param_6;
      local_68 = 0;
      local_60 = param_8;
      local_58 = 0x660046;
      thunk_FUN_0415fcd2(uVar1,0,0,param_5);
      uVar1 = FUN_00609e10(local_20);
      uVar1 = FUN_005ffa40(uVar1);
      uVar2 = FUN_00609e10(*(undefined8 *)(param_1 + 0x20));
      local_70 = FUN_005ffa40(uVar2);
      local_78 = param_6;
      local_68 = 0;
      local_60 = param_8;
      local_58 = 0x8800c6;
      thunk_FUN_0415fcd2(uVar1,0,0,param_5);
      uVar1 = FUN_00609e10(local_20);
      uVar1 = FUN_005ffa40(uVar1);
      uVar2 = FUN_00609e10(*(undefined8 *)(param_1 + 0x18));
      local_70 = FUN_005ffa40(uVar2);
      local_78 = param_6;
      local_68 = 0;
      local_60 = param_8;
      local_58 = 0xee0086;
      thunk_FUN_0415fcd2(uVar1,0,0,param_5);
      uVar1 = FUN_005ffa40(param_2);
      uVar2 = FUN_00609e10(local_20);
      local_70 = FUN_005ffa40(uVar2);
      local_78 = param_6;
      local_68 = 0;
      local_60 = 0;
      local_58 = 0xcc0020;
      thunk_FUN_0415fcd2(uVar1,param_3,param_4,param_5);
      FUN_00410f20(local_20);
    }
  }
  return;
}

