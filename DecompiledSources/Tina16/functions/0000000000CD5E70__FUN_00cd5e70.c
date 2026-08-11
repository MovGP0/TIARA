/* Ghidra address: 00cd5e70 */
/* Ghidra symbol: FUN_00cd5e70 */


longlong *
FUN_00cd5e70(longlong *param_1,longlong *param_2,longlong param_3,char param_4,undefined4 param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [32];
  char local_58;
  longlong local_48;
  undefined1 *local_40;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  longlong *local_20;
  
  local_40 = auStack_78;
  FUN_004144d0(param_2);
  local_24 = 0;
  if (param_3 != 0) {
    local_24 = *(int *)(param_3 + -4);
  }
  if (0 < local_24) {
    local_48 = param_3;
    local_20 = (longlong *)FUN_00410e60(&PTR_FUN_0047cbc0,1);
    if (param_4 == '\x01') {
      local_28 = 0;
      if (local_48 != 0) {
        local_28 = *(undefined4 *)(local_48 + -4);
      }
      uVar2 = FUN_00415ab0(param_3);
      FUN_00cd7620(param_2,uVar2,local_28,param_5);
    }
    else {
      FUN_00414bf0(param_2,param_3);
    }
    local_2c = 0;
    if (*param_2 != 0) {
      local_2c = *(undefined4 *)(*param_2 + -4);
    }
    uVar2 = FUN_00415ab0(*param_2);
    (**(code **)(*local_20 + 0x20))(local_20,uVar2,local_2c);
    FUN_004b6dc0(local_20,0);
    uVar1 = (**(code **)*local_20)(local_20);
    local_58 = param_4;
    (**(code **)(*param_1 + 0x18))(param_1,local_20,local_20,uVar1);
    if (param_4 == '\x01') {
      uVar1 = (**(code **)*local_20)(local_20);
      FUN_00415d10(param_2,uVar1,0);
      uVar2 = FUN_00415ab0(*param_2);
      uVar3 = (**(code **)*local_20)(local_20);
      FUN_00409a70(local_20[1],uVar2,uVar3);
    }
    else {
      uVar1 = (**(code **)*local_20)(local_20);
      FUN_00cd7480(param_2,local_20[1],uVar1,param_5);
    }
    FUN_00410f20(local_20);
  }
  return param_2;
}

