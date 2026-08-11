/* Ghidra address: 00783cc0 */
/* Ghidra symbol: FUN_00783cc0 */


undefined8
FUN_00783cc0(undefined8 param_1,longlong *param_2,undefined8 param_3,ulonglong param_4,char param_5,
            undefined4 *param_6)

{
  undefined8 uVar1;
  undefined1 local_28 [16];
  
  param_4 = param_4 & 0xff;
  if (param_4 < 0x10) {
    if (param_4 == 0xf) {
      if (param_5 == '\0') {
        *param_6 = 0x1fffffff;
        return 1;
      }
      if (param_5 == '\x02') {
        *param_6 = 0x1fffffff;
        return 1;
      }
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
    if (param_4 < 8) {
      if (param_4 == 2) {
        if (param_5 == '\0') {
          if (5 < *(int *)PTR_DAT_02001bd8) {
            *param_6 = 0xf0f0f0;
            return 1;
          }
          *param_6 = 0xd8e9ec;
          return 1;
        }
        if (param_5 != '\x01') {
          if (param_5 == '\x02') {
            *param_6 = 0x1fffffff;
            return 1;
          }
          return 0;
        }
        (**(code **)(*param_2 + 0x150))(param_2,local_28,2);
        uVar1 = FUN_007790b0(param_2,local_28,1,param_6);
        return uVar1;
      }
      if (param_4 - 3 < 4) {
        if (param_5 == '\x02') {
          (**(code **)(*param_2 + 0x158))(param_2,local_28,0x1d);
          uVar1 = FUN_007790b0(param_2,local_28,2,param_6);
          return uVar1;
        }
        return 0;
      }
      if (param_4 == 7) {
        if (param_5 == '\0') {
          if (5 < *(int *)PTR_DAT_02001bd8) {
            (**(code **)(*param_2 + 0x138))(param_2,local_28,2);
            uVar1 = FUN_007790b0(param_2,local_28,7,param_6);
            return uVar1;
          }
          *param_6 = 0xb8c7cb;
          return 1;
        }
        if (param_5 != '\x01') {
          if (param_5 == '\x02') {
            *param_6 = 0x1fffffff;
            return 1;
          }
          return 0;
        }
        (**(code **)(*param_2 + 0x150))(param_2,local_28,2);
        uVar1 = FUN_007790b0(param_2,local_28,1,param_6);
        return uVar1;
      }
    }
    else {
      if (param_4 - 8 < 2) {
        if (param_5 == '\x02') {
          *param_6 = 0x1fffffff;
          return 1;
        }
        return 0;
      }
      if (param_4 == 10) {
        if (param_5 == '\0') {
          *param_6 = 0x1fffffff;
          return 1;
        }
        if (param_5 != '\x01') {
          if (param_5 == '\x02') {
            *param_6 = 0x1fffffff;
            return 1;
          }
          return 0;
        }
        *param_6 = 0x1fffffff;
        return 1;
      }
      if (param_4 - 0xb < 4) {
        if (param_5 == '\x02') {
          *param_6 = 0x1fffffff;
          return 1;
        }
        if (param_5 != '\t') {
          if (param_5 == '\n') {
            *param_6 = 0x1fffffff;
            return 1;
          }
          return 0;
        }
        *param_6 = 0x1fffffff;
        return 1;
      }
    }
  }
  else if (param_4 < 0x13) {
    if (param_4 == 0x10) {
      if (param_5 == '\0') {
        *param_6 = 0x1fffffff;
        return 1;
      }
      if (param_5 == '\x02') {
        *param_6 = 0x1fffffff;
        return 1;
      }
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
    if (param_4 == 0x11) {
      if (param_5 == '\0') {
        *param_6 = 0x1fffffff;
        return 1;
      }
      if (param_5 == '\x02') {
        *param_6 = 0x1fffffff;
        return 1;
      }
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
    if (param_4 == 0x12) {
      if (param_5 == '\0') {
        *param_6 = 0x1fffffff;
        return 1;
      }
      if (param_5 != '\x01') {
        if (param_5 == '\x02') {
          *param_6 = 0x1fffffff;
          return 1;
        }
        return 0;
      }
      *param_6 = 0x1fffffff;
      return 1;
    }
  }
  else {
    if (param_4 - 0x13 < 4) {
      if (param_5 == '\x01') {
        *param_6 = 0x1fffffff;
        return 1;
      }
      if (param_5 == '\x02') {
        *param_6 = 0x1fffffff;
        return 1;
      }
      return 0;
    }
    if (param_4 == 0x17) {
      if (param_5 == '\0') {
        *param_6 = 0x1fffffff;
        return 1;
      }
      if (param_5 != '\x01') {
        if (param_5 == '\x02') {
          *param_6 = 0x1fffffff;
          return 1;
        }
        return 0;
      }
      *param_6 = 0x1fffffff;
      return 1;
    }
    if (param_4 - 0x18 < 2) {
      if (param_5 == '\x01') {
        *param_6 = 0x1fffffff;
        return 1;
      }
      if (param_5 == '\x02') {
        *param_6 = 0x1fffffff;
        return 1;
      }
      return 0;
    }
  }
  return 0;
}

