/* Ghidra address: 00784900 */
/* Ghidra symbol: FUN_00784900 */


undefined8
FUN_00784900(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,char param_5
            ,undefined8 param_6,undefined8 param_7,undefined4 param_8)

{
  undefined8 uVar1;
  undefined1 local_38 [24];
  
  if (param_5 == '\b') {
    (**(code **)(*param_2 + 0x220))(param_2,local_38,9);
    uVar1 = FUN_00778dc0(param_2,param_3,local_38,param_6,param_7,param_8);
  }
  else if (param_5 == '\t') {
    (**(code **)(*param_2 + 0x220))(param_2,local_38,8);
    uVar1 = FUN_00778dc0(param_2,param_3,local_38,param_6,param_7,param_8);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

