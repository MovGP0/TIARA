/* Ghidra address: 007857e0 */
/* Ghidra symbol: FUN_007857e0 */


undefined8 FUN_007857e0(void)

{
  char in_R9B;
  byte in_stack_00000028;
  undefined4 *in_stack_00000030;
  
  if (in_R9B == '\x02') {
    if (in_stack_00000028 == 1) {
      *in_stack_00000030 = 0x1fffffff;
      return 1;
    }
    return 0;
  }
  if (in_R9B == '\x03') {
    if (in_stack_00000028 < 6) {
      if (in_stack_00000028 == 5) {
        *in_stack_00000030 = 0x1fffffff;
        return 1;
      }
      if (in_stack_00000028 == 1) {
        *in_stack_00000030 = 0x1fffffff;
        return 1;
      }
      if (in_stack_00000028 == 2) {
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
    return 0;
  }
  if (in_R9B != '\x04') {
    return 0;
  }
  if (in_stack_00000028 < 6) {
    if (in_stack_00000028 == 5) {
      *in_stack_00000030 = 0x1fffffff;
      return 1;
    }
    if (in_stack_00000028 == 1) {
      *in_stack_00000030 = 0x1fffffff;
      return 1;
    }
    if (in_stack_00000028 == 2) {
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
  return 0;
}

