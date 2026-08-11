/* Ghidra address: 00784f60 */
/* Ghidra symbol: FUN_00784f60 */


undefined8
FUN_00784f60(undefined8 param_1,longlong *param_2,undefined8 param_3,ulonglong param_4,char param_5,
            undefined4 *param_6)

{
  undefined8 uVar1;
  undefined1 local_28 [16];
  
  param_4 = param_4 & 0xff;
  if (param_4 < 5) {
    if (param_4 == 4) {
      if (param_5 != '\x02') {
        return 1;
      }
      (**(code **)(*param_2 + 0x120))(param_2,local_28,0x18);
      uVar1 = FUN_007790b0(param_2,local_28,2,param_6);
      return uVar1;
    }
    if (param_4 == 2) {
      if (param_5 == '\x01') {
        *param_6 = 0x1fffffff;
        return 1;
      }
      return 0;
    }
    if (param_4 == 3) {
      if (param_5 == '\t') {
        *param_6 = 0x1fffffff;
        return 1;
      }
      if (param_5 == '\n') {
        *param_6 = 0x1fffffff;
        return 1;
      }
      return 0;
    }
  }
  else {
    if (param_4 - 5 < 3) {
      if (param_5 == '\x01') {
        *param_6 = 0x1fffffff;
        return 1;
      }
      return 0;
    }
    if (param_4 - 8 < 3) {
      if (param_5 == '\x01') {
        *param_6 = 0x1fffffff;
        return 1;
      }
      return 0;
    }
  }
  return 0;
}

