/* Ghidra address: 01808770 */
/* Ghidra symbol: FUN_01808770 */


undefined8 FUN_01808770(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 local_58;
  undefined1 *local_50;
  int local_3c;
  undefined8 local_38;
  undefined1 local_30 [4];
  char local_2c;
  char local_2b;
  char local_2a;
  byte local_29;
  undefined8 local_28;
  longlong *local_20;
  
  local_50 = auStack_88;
  local_58 = 0;
  local_28 = 0;
  FUN_004144d0(&local_28);
  (**(code **)(*param_2 + 0x18))(param_2,&local_2c,4);
  if (((local_2c == '\x1f') && (local_2b == -0x75)) && (local_2a == '\b')) {
    (**(code **)(*param_2 + 0x18))(param_2,local_30,4);
    (**(code **)(*param_2 + 0x18))(param_2,&local_2c,2);
    if ((local_29 & 8) != 0) {
      (**(code **)(*param_2 + 0x18))(param_2,&local_2c,1);
      while (local_2c != '\0') {
        FUN_004153d0(&local_58,local_2c,0);
        FUN_004155b0(&local_28,local_58);
        (**(code **)(*param_2 + 0x18))(param_2,&local_2c);
      }
    }
  }
  local_20 = (longlong *)FUN_00410e60(&PTR_FUN_0047cbc0,1);
  FUN_00414c70(&local_28,&DAT_01808a14);
  uVar2 = FUN_00414df0(&local_28);
  (**(code **)(*local_20 + 0x20))(local_20,uVar2,2);
  lVar3 = (**(code **)*param_2)(param_2);
  lVar4 = FUN_004b6da0(param_2);
  FUN_004b8ba0(local_20,param_2,(lVar3 + -8) - lVar4);
  (**(code **)(*local_20 + 0x20))(local_20,local_30,4);
  uVar1 = (**(code **)*local_20)(local_20);
  local_68 = 0;
  FUN_00627f80(local_20[1],uVar1,&local_38,&local_3c);
  (**(code **)(*param_3 + 0x20))(param_3,local_38,local_3c);
  FUN_004095f0(local_38,(longlong)local_3c);
  FUN_00410f20(local_20);
  FUN_00414bf0(param_1,local_28);
  FUN_004144d0(&local_58);
  FUN_004144d0(&local_28);
  return param_1;
}

