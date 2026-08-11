/* Ghidra address: 00785280 */
/* Ghidra symbol: FUN_00785280 */


undefined8 FUN_00785280(void)

{
  undefined8 uVar1;
  char in_R9B;
  byte in_stack_00000028;
  undefined4 *in_stack_00000030;
  
  uVar1 = 1;
  if (in_R9B == '\x02') {
    if (in_stack_00000028 == 1) {
      *in_stack_00000030 = 0x1fffffff;
    }
    else if (in_stack_00000028 == 2) {
      *in_stack_00000030 = 0x1fffffff;
    }
    else {
      uVar1 = 0;
    }
  }
  else if (in_R9B == '\x03') {
    if (in_stack_00000028 == 4) {
      *in_stack_00000030 = 0x1fffffff;
    }
    else if (in_stack_00000028 == 5) {
      *in_stack_00000030 = 0x1fffffff;
    }
    else {
      uVar1 = 0;
    }
  }
  else if ((byte)(in_R9B - 4U) < 4) {
    if (in_stack_00000028 == 0) {
      *in_stack_00000030 = 0x1fffffff;
    }
    else if (in_stack_00000028 == 1) {
      *in_stack_00000030 = 0x1fffffff;
    }
    else if (in_stack_00000028 == 2) {
      *in_stack_00000030 = 0x1fffffff;
    }
    else {
      uVar1 = 0;
    }
  }
  else if ((byte)(in_R9B - 8U) < 2) {
    if (in_stack_00000028 < 6) {
      if (in_stack_00000028 == 5) {
        *in_stack_00000030 = 0x1fffffff;
        return 1;
      }
      if (in_stack_00000028 == 1) {
        *in_stack_00000030 = 0x1fffffff;
        return 1;
      }
      if (in_stack_00000028 == 4) {
        *in_stack_00000030 = 0x1fffffff;
        return 1;
      }
    }
    else {
      if (in_stack_00000028 == 6) {
        *in_stack_00000030 = 0x1fffffff;
        return 1;
      }
      if (in_stack_00000028 == 7) {
        *in_stack_00000030 = 0x1fffffff;
        return 1;
      }
    }
    uVar1 = 0;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

