/* Ghidra address: 00784bf0 */
/* Ghidra symbol: FUN_00784bf0 */


undefined8
FUN_00784bf0(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,byte param_5
            ,undefined8 param_6,undefined8 param_7,undefined4 param_8)

{
  undefined8 uVar1;
  undefined1 local_38 [24];
  
  if (param_5 < 0x11) {
    if (param_5 == 0x10) {
      (**(code **)(*param_2 + 0x120))(param_2,local_38,0x14);
      uVar1 = FUN_00778dc0(param_2,param_3,local_38,param_6,param_7,param_8);
      return uVar1;
    }
    if (param_5 == 4) {
      (**(code **)(*param_2 + 0x120))(param_2,local_38,0x18);
      uVar1 = FUN_00778dc0(param_2,param_3,local_38,param_6,param_7,param_8);
      return uVar1;
    }
    if (param_5 == 0xe) {
      (**(code **)(*param_2 + 0x120))(param_2,local_38,0x12);
      uVar1 = FUN_00778dc0(param_2,param_3,local_38,param_6,param_7,param_8);
      return uVar1;
    }
    if (param_5 == 0xf) {
      (**(code **)(*param_2 + 0x120))(param_2,local_38,0x13);
      uVar1 = FUN_00778dc0(param_2,param_3,local_38,param_6,param_7,param_8);
      return uVar1;
    }
  }
  else {
    if (param_5 == 0x11) {
      (**(code **)(*param_2 + 0x120))(param_2,local_38,0x15);
      uVar1 = FUN_00778dc0(param_2,param_3,local_38,param_6,param_7,param_8);
      return uVar1;
    }
    if (param_5 == 0x12) {
      (**(code **)(*param_2 + 0x120))(param_2,local_38,0x16);
      uVar1 = FUN_00778dc0(param_2,param_3,local_38,param_6,param_7,param_8);
      return uVar1;
    }
    if (param_5 == 0x13) {
      (**(code **)(*param_2 + 0x120))(param_2,local_38,0x17);
      uVar1 = FUN_00778dc0(param_2,param_3,local_38,param_6,param_7,param_8);
      return uVar1;
    }
  }
  return 0;
}

