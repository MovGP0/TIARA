/* Ghidra address: 007849c0 */
/* Ghidra symbol: FUN_007849c0 */


undefined8 FUN_007849c0(void)

{
  byte in_R9B;
  char in_stack_00000028;
  undefined4 *in_stack_00000030;
  
  if (in_R9B < 7) {
    if (in_R9B == 6) {
      if (in_stack_00000028 == '\0') {
        *in_stack_00000030 = 0x1fffffff;
        return 1;
      }
      if (in_stack_00000028 == '\x02') {
        *in_stack_00000030 = 0x1fffffff;
        return 1;
      }
      return 0;
    }
    if (in_R9B == 2) {
      if (in_stack_00000028 == '\x01') {
        *in_stack_00000030 = 0x1fffffff;
        return 1;
      }
      return 0;
    }
    if (in_R9B == 3) {
      if (in_stack_00000028 == '\x02') {
        *in_stack_00000030 = 0x1fffffff;
        return 1;
      }
      if (in_stack_00000028 != '\t') {
        if (in_stack_00000028 == '\n') {
          *in_stack_00000030 = 0x1fffffff;
          return 1;
        }
        return 0;
      }
      *in_stack_00000030 = 0x1fffffff;
      return 1;
    }
    if (in_R9B == 4) {
      if (in_stack_00000028 == '\x02') {
        *in_stack_00000030 = 0x1fffffff;
        return 1;
      }
      if (in_stack_00000028 != '\t') {
        if (in_stack_00000028 == '\n') {
          *in_stack_00000030 = 0x1fffffff;
          return 1;
        }
        return 0;
      }
      *in_stack_00000030 = 0x1fffffff;
      return 1;
    }
    if (in_R9B == 5) {
      if (in_stack_00000028 == '\0') {
        *in_stack_00000030 = 0x1fffffff;
        return 1;
      }
      if (in_stack_00000028 == '\x02') {
        *in_stack_00000030 = 0x1fffffff;
        return 1;
      }
      return 0;
    }
  }
  else {
    if (in_R9B == 7) {
      if (in_stack_00000028 == '\0') {
        *in_stack_00000030 = 0x1fffffff;
        return 1;
      }
      if (in_stack_00000028 == '\x02') {
        *in_stack_00000030 = 0x1fffffff;
        return 1;
      }
      return 0;
    }
    if (in_R9B == 10) {
      if (in_stack_00000028 == '\x01') {
        *in_stack_00000030 = 0x1fffffff;
        return 1;
      }
      return 0;
    }
    if (in_R9B == 0xb) {
      if (in_stack_00000028 == '\x01') {
        *in_stack_00000030 = 0x1fffffff;
        return 1;
      }
      return 0;
    }
  }
  return 0;
}

